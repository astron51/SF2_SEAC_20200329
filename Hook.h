/*

--------- * Benzaiten * ---------
Benzaiten :: Built for private use on Special Force 2 PlayPark
Hook.h : Hook type definition and tool
---------------------------------

*/

LONG WINAPI MyVectorExceptionFilter(PEXCEPTION_POINTERS pException)
{
	if (pException->ExceptionRecord->ExceptionFlags == EXCEPTION_CONTINUABLE
		&& pException->ExceptionRecord->ExceptionCode == EXCEPTION_ACCESS_VIOLATION)
	{
		MEMORY_BASIC_INFORMATION mbi = {};
		if (VirtualQuery(pException->ExceptionRecord->ExceptionAddress, &mbi, sizeof(mbi))
			&& mbi.AllocationProtect == PAGE_EXECUTE_READWRITE)
		{
			pException->ContextRecord->Eip = dwNullptrExceptionHandler;
			return EXCEPTION_CONTINUE_EXECUTION;
		}
	}

	return EXCEPTION_CONTINUE_SEARCH;
}

LPVOID VMTHook(TArray< UObject* >* GObjObjects, char* ObjectName, int index)
{
	DWORD* vtable = NULL;
	for (DWORD i = 0x0; i < GObjObjects->Num(); i++)
	{
		if (!GObjObjects->Data[i]) { continue; }
		if (!strcmp(GObjObjects->Data[i]->GetFullName(), ObjectName))
			vtable = (DWORD*)*(DWORD*)GObjObjects->Data[i];
	}

	if (!vtable) return NULL;

	uintptr_t dwVTable = *((uintptr_t*)vtable);
	uintptr_t* dwEntry = ((uintptr_t*)vtable + index);
	uintptr_t dwOrig = *((uintptr_t*)dwEntry);

	DWORD dwOldProtection;
	VirtualProtect((LPVOID)dwEntry, sizeof(dwEntry), PAGE_EXECUTE_READWRITE, &dwOldProtection);
	*((uintptr_t*)dwEntry) = (uintptr_t)hkProcessEvent;
	VirtualProtect((LPVOID)dwEntry, sizeof(dwEntry), dwOldProtection, &dwOldProtection);

	Log() << ObjectName;
	Log() << dwEntry;

	return (LPVOID)dwOrig;
}

typedef void(__thiscall* tProcessEvent)(class UObject*, class UFunction*, void*, void*);
tProcessEvent oProcessEvent;// = (tProcessEvent)g_dwProcessEvent;
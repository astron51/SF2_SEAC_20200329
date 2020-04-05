/*

--------- * Benzaiten * ---------
Benzaiten :: Built for private use on Special Force 2 PlayPark
Cheats.h : Backend for cheat
---------------------------------

*/

APlayerController* PlayerController;

void PostRender(UCanvas* Canvas)
{
	if (!Canvas) return;
	bool Ret = false;
	if (!Ret) {
		Log() << Canvas;
		Ret = true;
	}
}

void ProcessTick()
{

}


void __fastcall hkProcessEvent(UObject* pObject, void* edx, UFunction* pFunction, void* pParms, void* pResult)
{
	if (!dwNullptrExceptionHandler)
	{
		__asm push eax
		__asm mov eax, catchHere
		__asm mov dwNullptrExceptionHandler, eax
		__asm pop eax

		AddVectoredExceptionHandler(1, MyVectorExceptionFilter);
	}
	try
	{
		//To update Inner Outer Class Name Offset -> Refer to Text
		char* szName = pFunction->GetFullName();
		if (IS_FUNCTION(0x0067, 0x0015, 0x0FBA, 0x1F1D))
		{
			if (pParms)
				PostRender((((UGameViewportClient_eventPostRender_Parms*)(pParms))->Canvas));
		}
		Log() << szName;
		//Log() << std::hex << pFunction->Class->Name.Index;
		//Log() << std::hex << pFunction->Outer->Outer->Name.Index;
		//Log() << std::hex << pFunction->Outer->Name.Index;
		//Log() << std::hex << pFunction->Name.Index;
	}
	catch (...) {}
catchHere:
	oProcessEvent(pObject, pFunction, pParms, pResult);
}
/*

--------- * Benzaiten * ---------
Benzaiten :: Built for private use on Special Force 2 PlayPark
dllEntryPoint.cpp : EntryPoint
---------------------------------

*/

#include "stdafx.h"
bool runonce = false;

string GetEXEName(DWORD dwProcessID)
{
	DWORD aProcesses[1024], cbNeeded, cProcesses;
	unsigned int i;

	//Enumerate all processes
	if (!EnumProcesses(aProcesses, sizeof(aProcesses), &cbNeeded))
		return NULL;

	// Calculate how many process identifiers were returned.
	cProcesses = cbNeeded / sizeof(DWORD);

	TCHAR szEXEName[MAX_PATH];
	//Loop through all process to find the one that matches
	//the one we are looking for
	for (i = 0; i < cProcesses; i++)
	{
		if (aProcesses[i] == dwProcessID)
		{
			// Get a handle to the process
			HANDLE hProcess = OpenProcess(PROCESS_QUERY_INFORMATION |
				PROCESS_VM_READ, FALSE, dwProcessID);

			// Get the process name
			if (NULL != hProcess)
			{
				HMODULE hMod;
				DWORD cbNeeded;

				if (EnumProcessModules(hProcess, &hMod,
					sizeof(hMod), &cbNeeded))
				{
					//Get the name of the exe file
					GetModuleBaseName(hProcess, hMod, szEXEName,
						sizeof(szEXEName) / sizeof(TCHAR));

					return string(szEXEName);
				}
			}
		}
	}
	return NULL;
}

extern "C" __declspec(dllexport) int HookEvent(int code, WPARAM wParam, LPARAM lParam) {
	if (!runonce) {
		runonce = true;
		string currentProcess = GetEXEName(GetCurrentProcessId());
		if (currentProcess.compare("sf2.exe") == 0)
		{
			BeginRoutine();
		}
	}
	return(CallNextHookEx(NULL, code, wParam, lParam));
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved)
{
	return true;
}
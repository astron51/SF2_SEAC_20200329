/*

--------- * Benzaiten * ---------
Benzaiten :: Built for private use on Special Force 2 PlayPark
stdafx.h : Source Linking with Constant variable and Hard Coded Address
---------------------------------

*/

#include <Windows.h>
#include <stdio.h>
#include <d3d9.h>
#include <d3dx9.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <TlHelp32.h>
#include <Psapi.h>
#include <intrin.h>
#include <sstream>
#include <iostream>
#include <cstdlib>
#include <crtdbg.h>
#include <chrono>
#include <fstream>
#include <thread>
#include <tchar.h>
#include <vector>
#include <conio.h>
#include <algorithm>
#include <iomanip>
#include <WinInet.h>
#include <iterator>
#include <detours.h>
#include "SF223032020/SDK.h"

#pragma comment (lib, "d3d9.lib")
#pragma comment (lib, "d3dx9.lib")
#pragma comment (lib, "detours.lib")
#pragma comment (lib,"Ws2_32.lib")
#pragma comment (lib, "Wininet.lib")
#pragma comment (lib,"Psapi.lib")

using namespace std;

#include "Configuration.h"
#include "Hook.h"
#include "Cheats.h"
#include "Processor.h"
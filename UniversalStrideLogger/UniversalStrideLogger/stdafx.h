
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
#endif

#define _DEBUG_VERSION

#include <SDKDDKVer.h>

// C RunTime Header Files
#include <iostream>
#include <stdio.h>
#include <tchar.h>
#include <string.h>
#include <stdint.h>
#include <vector>
#include <stdio.h>
#include <Windows.h>
#include <fstream>

#include <d3d9.h>
#include <d3dx9.h>

#pragma comment( lib, "d3d9.lib" )
#pragma comment( lib, "d3dx9.lib" )

#include "MinHook.h"

#if defined _M_X64
#pragma comment(lib, "libMinHook.lib")
#elif defined _M_IX86
#pragma comment(lib, "libMinHook.lib")
#endif

typedef unsigned int uint;

#if defined _M_X64
#define DWORD_VERSION DWORD64
#define PDWORD_VERSION PDWORD64
#elif defined _M_IX86
#define DWORD_VERSION DWORD
#define PDWORD_VERSION PDWORD
#endif

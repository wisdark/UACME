/*******************************************************************************
*
*  (C) COPYRIGHT AUTHORS, 2018 - 2021
*
*  TITLE:       STUB.C
*
*  VERSION:     3.56
*
*  DATE:        17 July 2021
*
* THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
* ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED
* TO THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
* PARTICULAR PURPOSE.
*
*******************************************************************************/
#include "global.h"

#ifdef KUMA_STUB

#pragma comment(linker, "/ENTRY:Stub_main")
VOID __cdecl Stub_main()
{
    ExitProcess(0);
}

#endif

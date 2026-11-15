/* hello.dll: a hello world as a Windows DLL. */
#define HELLO_EXPORTS
#include <windows.h>

#include "hello.h"

BOOL WINAPI DllMain(HINSTANCE instance, DWORD reason, LPVOID reserved)
{
    (void)instance;
    (void)reason;
    (void)reserved;
    return TRUE;
}

HELLO_API const char *hello_world(void)
{
    return "Hello, world!";
}

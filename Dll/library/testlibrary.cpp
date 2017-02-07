#include <windows.h>

//----------------------------------------------------------------------

int __stdcall FindMinimum(size_t count, const int* buffer)
{
    int minimalElement = buffer[0];

    for(size_t i = 1; i < count; ++i)
    {
        if(buffer[i] < minimalElement)
        {
            minimalElement = buffer[i];
        }
    }

    return minimalElement;
}

//----------------------------------------------------------------------

BOOL WINAPI DllMain
            (
            _In_ HINSTANCE hinstDLL,
            _In_ DWORD     fdwReason,
            _In_ LPVOID    lpvReserved
            )
{
    return TRUE;
}

//----------------------------------------------------------------------


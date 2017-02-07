#include <windows.h>
#include <stdio.h>

#include "testlibrary.h"

//----------------------------------------------------------------------

PtrFindMinimum FindMinimum;

//----------------------------------------------------------------------

int main()
{
    const char* libraryName = "testlibrary.dll";
    const char* functionName = "FindMinimum";

    const size_t count = 5;

    int buffer[count] = {-20, 0, -200, 0, 15};

    HMODULE hm = LoadLibrary(libraryName);

    if(!hm)
    {
        printf("%s not found; bye.\n", libraryName);
        return 0;
    }
    
    FindMinimum = (PtrFindMinimum)GetProcAddress(hm, functionName);

    if(!FindMinimum)
    {
        printf("Function \'%s\' not found in %s; bye.\n", functionName, libraryName);
        return 0;        
    }

    printf("Min is %d\n", FindMinimum(count, buffer));

    return 0;
}

//----------------------------------------------------------------------

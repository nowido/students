#include <windows.h>
#include <stdio.h>

#include "testlibrary.h"

//----------------------------------------------------------------------

extern "C" int __stdcall FindMinimum(size_t count, int* buffer);

//----------------------------------------------------------------------

int main()
{
    const size_t count = 5;

    int buffer[count] = {-20, 0, -200, 0, 15};

    printf("Min is %d\n", FindMinimum(count, buffer));

    return 0;
}

//----------------------------------------------------------------------

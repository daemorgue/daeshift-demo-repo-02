/* hello.exe: loads hello.dll and prints its greeting. */
#include <stdio.h>

#include "hello.h"

int main(void)
{
    puts(hello_world());
    return 0;
}

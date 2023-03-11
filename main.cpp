#include <iostream>
#include <stdint.h>

uint64_t callStack(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5, uint64_t arg6, uint64_t arg7)
{
    return arg0 + arg1 + arg2 + arg3 + arg4 + arg5 + arg6 + arg7;
}

int main(void) {
    uint64_t num;
    num = 50;

    callStack(num, num, num, num, num, num, num, num);

    return 0;
}
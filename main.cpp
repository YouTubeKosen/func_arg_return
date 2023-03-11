#include <iostream>
#include <stdint.h>

uint32_t callStack(uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7)
{
    return 0;
}

int main(void) {
    uint32_t num;
    num = 50;

    callStack(num, num, num, num, num, num, num, num);

    return 0;
}
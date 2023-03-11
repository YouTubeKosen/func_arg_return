#include <iostream>
#include <stdint.h>

void callByValue(uint32_t num)
{
    num = 80;
}

void callByRef(uint32_t & num)
{
    num = 80;
}

int main(void) {
    uint32_t num;
    num = 50;
    std::cout << num << "\n";

    callByValue(num);
    std::cout << num << "\n";

    callByRef(num);
    std::cout << num << "\n";

    return 0;
}
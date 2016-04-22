#include <iostream>

using namespace std;

string get_cpu_name()
{
    uint32_t data[4] = { 0 };

    __asm__(
        "cpuid\n\t"
        "mov %%ebx, %1\n\t"
        "mov %%edx, %1\n\t"
        "mov %%ecx, %1"
        : "=g" (data)
        : "g"  (data)
    );

    return string((const char*) data);
}

void assembler()
{
    cout << "CPU is " << get_cpu_name() << endl;
}

int main()
{
    assembler();
    return 0;
}

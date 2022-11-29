#include <stdio.h>

void PrintHelloWorld(void)
{
    printf("HelloWorld\n");
}


void PrintHalloween(void)
{
    printf("Halloween\n");
}

int main(void)
{
    //printf("main = %p\n", main);
    void (*pfunc)();

    pfunc = PrintHelloWorld;
    printf("PrintHelloWorld�̃A�h���X = %p\n", PrintHelloWorld);
    printf("pfunc�̓��e = %p\n", *pfunc);
    pfunc();

    pfunc = PrintHalloween;
    pfunc();

    return 0;
}

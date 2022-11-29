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
    printf("PrintHelloWorldのアドレス = %p\n", PrintHelloWorld);
    printf("pfuncの内容 = %p\n", *pfunc);
    pfunc();

    pfunc = PrintHalloween;
    pfunc();

    return 0;
}

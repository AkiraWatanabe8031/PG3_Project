#include <stdio.h>






int Min(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}











int main()
{
    printf("%d\n", Min(5, 3));
    return 0;
}








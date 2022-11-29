// 大きい方の値を表示する

#include <stdio.h>

template <typename Type>
Type big(Type a, Type b)
{
    if (a > b)
    {
        //return (Type)a;
        return static_cast<Type>(a);
    }
    else
    {
        return static_cast<Type>(b);
    }
}


//int big(int a, int b)
//{
//    if (a > b)
//    {
//        return a;
//    }
//    else
//    {
//        return b;
//    }
//}
//
//float big(float a, float b)
//{
//    if (a > b)
//    {
//        return a;
//    }
//    else
//    {
//        return b;
//    }
//}
//
//double big(double a, double b)
//{
//    if (a > b)
//    {
//        return a;
//    }
//    else
//    {
//        return b;
//    }
//}

template <>
char big<char>(char a, char b)
{
    printf("数値以外扱えない\n");
    return 0;
}

int main()
{
    int a = 5;
    int b = 3;

    printf("%d\n", big(a,b) );
    printf("%d\n", big(100,200) );
    printf("%f\n", big(1.1f, 2.2f));
    printf("%f\n", big(1.13, 2.25));
    big('a', 'b');
    return 0;
}

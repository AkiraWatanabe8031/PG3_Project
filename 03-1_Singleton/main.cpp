#include "test.h"

int main()
{
    // ���@1
    TestSingleton::GetInstance()->Hello();

    // ���@2
    TestSingleton* p = TestSingleton::GetInstance();
    p->Hello();

    return 0;
}

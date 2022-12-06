#include "test.h"

int main()
{
    // •û–@1
    TestSingleton::GetInstance()->Hello();

    // •û–@2
    TestSingleton* p = TestSingleton::GetInstance();
    p->Hello();

    return 0;
}

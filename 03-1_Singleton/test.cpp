#include "test.h"
#include <stdio.h>

// �R���X�g���N�^
TestSingleton::TestSingleton()
{}

// �f�X�g���N�^
TestSingleton::~TestSingleton()
{}

TestSingleton* TestSingleton::GetInstance()
{
    // static : �ÓI�� (���炩���ߏ����ς�)
    static TestSingleton instance;  // instance : ����
                           // �����낭�Q�[���ɂ��Ă���T�C�R���̂悤��

    return &instance;
}

void TestSingleton::Hello()
{
    printf("Hello\n");
}

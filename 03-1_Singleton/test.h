#pragma once

class TestSingleton final
{
private:
    TestSingleton();
    ~TestSingleton();

public:
    TestSingleton(const TestSingleton& obj) = delete;
    TestSingleton& operator=(const TestSingleton& obj) = delete;

    void Hello();

    static TestSingleton* GetInstance();
};


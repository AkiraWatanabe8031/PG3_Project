#include <list>     // list�R���e�i
#include <string>   // string
#include <stdio.h>  // printf   #include <cstdio>

using namespace std;        // std:: ���L�q���Ȃ��Ă������悤�ɂ���

int main()
{
    //           �R���e�i�� �`s  �����`�ɂ���Ƃ���
    list<const char *> stations =
    {
        "Tokyo", "Kanda", "Akihabara",
        "Okachimachi", "Ueno",
        "Uguisudani", "Nippori",
        "Tabata"
    };

    // 1970�N
    printf("--- 1970 ---\n");
    for (auto itr = stations.begin(); itr != stations.end(); itr++)
    {
        printf("%s\n", *itr);
    }

    // 1971�N "Nishi-Nippori" ���ǉ������
    // "Tabata" ��T���A�ǉ�����
    for (auto itr = stations.begin(); itr != stations.end(); itr++)
    {
        // if (*itr, "Tabata")  // �ˊ댯�@�A�h���X�̔�r�����Ă�
         
        //��if (strcmp(*itr, "Tabata") == 0)
        //{
        //    itr = stations.insert(itr, "Nishi-Nippori");
        //    itr++;
        //}

        if (strcmp(*itr, "Tabata") == 0)
        {
            stations.insert(itr, "Nishi-Nippori");
            break;
        }
    }

    printf("--- 2019 ---\n");
    for (auto itr = stations.begin(); itr != stations.end(); itr++)
    {
        printf("%s\n", *itr);
    }

    // 2020�N "Takanawa-Gateway" ���ǉ������
    // "Tamachi" ��T���A�ǉ�����
    //      :
    //      :
    printf("--- 2022 ---\n");
    for (auto itr = stations.begin(); itr != stations.end(); itr++)
    {
        printf("%s\n", *itr);
    }

    return 0;
}
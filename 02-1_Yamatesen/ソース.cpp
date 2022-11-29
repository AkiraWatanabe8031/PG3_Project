#include <list>     // listコンテナ
#include <string>   // string
#include <stdio.h>  // printf   #include <cstdio>

using namespace std;        // std:: を記述しなくてもいいようにする

int main()
{
    //           コンテナ名 ～s  複数形にするといい
    list<const char *> stations =
    {
        "Tokyo", "Kanda", "Akihabara",
        "Okachimachi", "Ueno",
        "Uguisudani", "Nippori",
        "Tabata"
    };

    // 1970年
    printf("--- 1970 ---\n");
    for (auto itr = stations.begin(); itr != stations.end(); itr++)
    {
        printf("%s\n", *itr);
    }

    // 1971年 "Nishi-Nippori" が追加される
    // "Tabata" を探し、追加する
    for (auto itr = stations.begin(); itr != stations.end(); itr++)
    {
        // if (*itr, "Tabata")  // ⇒危険　アドレスの比較をしてる
         
        //△if (strcmp(*itr, "Tabata") == 0)
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

    // 2020年 "Takanawa-Gateway" が追加される
    // "Tamachi" を探し、追加する
    //      :
    //      :
    printf("--- 2022 ---\n");
    for (auto itr = stations.begin(); itr != stations.end(); itr++)
    {
        printf("%s\n", *itr);
    }

    return 0;
}
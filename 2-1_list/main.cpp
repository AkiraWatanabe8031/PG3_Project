#include <list>     // listコンテナ

using namespace std;

int main()
{
    //std::list<int> lst(33, 4);
    //list<int> lst{ 114, 514, 364 };  // 初期設定リスト

    //lst.push_front(7);
    //lst.push_back(777);
    //for (int i = 0; i < 5; i++)
    //{
    //    lst.push_front(i);
    //}
    //for (int i = 0; i < 5; i++)
    //{
    //    lst.push_back(i);
    //}
    list<int> list{ 1,3,5,7,10 };

    for (std::list<int>::iterator itr = list.begin(); itr != list.end(); ++itr)
    {
        if (*itr == 3)
        {
            itr = list.insert(itr, 0);
            ++itr;      // 重要!!
        }
    }

    return 0;
}

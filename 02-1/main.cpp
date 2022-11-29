#include <stdlib.h> // system
#include <vector>   // vector
#include <iostream> // cout  endl
#include <string>   // string 文字列型

using namespace std;

int main()
{
    vector<string> f = { "ローソン","ファミマ","セブン" };

    for (vector<string>::iterator it_f = f.begin(); it_f != f.end(); it_f++)
    {
        cout << *it_f << endl;
    }

    cout << "---" << endl;

    f.erase(f.begin() + 1);
        
    for (vector<string>::iterator it_f = f.begin(); it_f != f.end(); it_f++)
    {
        cout << *it_f << endl;
    }

    system("pause");
    return 0;
}

#include <stdlib.h> // system
#include <vector>   // vector
#include <iostream> // cout  endl
#include <string>   // string ������^

using namespace std;

int main()
{
    vector<string> f = { "���[�\��","�t�@�~�}","�Z�u��" };

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

#include "Enemy.h"
#include <stdio.h>

int main()
{
    Enemy enemy;
    int input;

    while (true)
    {
        // 続けるか入力させる
        printf("0:exit 1:continue ==> ");
        scanf_s("%d", &input);
        if (input == 0) break;
        
        // 行動
        enemy.Update();
        enemy.Draw();
    }

    return 0;
}

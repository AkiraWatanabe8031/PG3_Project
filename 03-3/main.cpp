#include "Enemy.h"
#include <stdio.h>

int main()
{
    Enemy* enemy = new Enemy();
    int input;

    while (true)
    {
        // 続けるかどうか入力させる
        printf("0:exit 1:continue ==> ");
        scanf_s("%d", &input);
        if (input == 0) break;

        // 行動
        enemy->Update();
        enemy->Draw();
    }
    delete enemy;

    return 0;
}
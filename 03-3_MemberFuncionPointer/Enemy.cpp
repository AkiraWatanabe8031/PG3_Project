#include "Enemy.h"
#include <stdio.h>

// メンバ関数ポインタテーブルに、
void (Enemy::* Enemy::pFuncTable[])() =
{
    &Enemy::Approach,
    &Enemy::Shoot,
    &Enemy::GetAway
};

Enemy::Enemy()
{
    phase_ = 0;
}

Enemy::~Enemy()
{
}

void Enemy::Approach()
{
    printf("近づく\n");
}

void Enemy::Shoot()
{
    printf("射撃!!\n");
}

void Enemy::GetAway()
{
    printf("逃げる\n");
}

void Enemy::Update()
{
    // デバッグとして、現在のフェーズ番号を表示してみる
    printf("phase_ : %d\n", phase_);

    // 現在の行動フェーズを実行する
    (this->*pFuncTable[phase_])();

    // 次の行動フェーズに移行する
    phase_++;

    if (phase_ > 2)
    {
        phase_ = 0;
    }
}

void Enemy::Draw()
{
    printf("(draw enemy)\n");
}

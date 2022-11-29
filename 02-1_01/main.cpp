#include <stdio.h>
#include <windows.h>

typedef void (*PFunc)(int*);

// コールバック関数1
void callback1(int* s) {
    printf("%d秒後に実行されるよ\n", *s);
}

void setTimeout(PFunc p, int second) {
    // コールバック関数を呼び出す
    Sleep(second * 1000);
    p(&second);
}

int main() {
    printf("start\n");

    PFunc p;
    p = callback1;
    setTimeout(p, 5);

    return 0;
}

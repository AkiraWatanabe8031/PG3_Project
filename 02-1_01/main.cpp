#include <stdio.h>
#include <windows.h>

typedef void (*PFunc)(int*);

// �R�[���o�b�N�֐�1
void callback1(int* s) {
    printf("%d�b��Ɏ��s������\n", *s);
}

void setTimeout(PFunc p, int second) {
    // �R�[���o�b�N�֐����Ăяo��
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

#include <stdio.h>

int main() {
    int num, a = 0, b = 1, c = 0, flag = 0;

    printf("Digite um n�mero: ");
    scanf("%d", &num);

    while (c < num) {
        c = a + b;
        a = b;
        b = c;
    }

    if (c == num) {
        printf("%d pertence � sequ�ncia de Fibonacci.\n", num);
        flag = 1;
    } else {
        printf("%d n�o pertence � sequ�ncia de Fibonacci.\n", num);
    }

    return 0;
}

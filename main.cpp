#include <stdio.h>

int main() {
    int num, a = 0, b = 1, c = 0, flag = 0;

    printf("Digite um número: ");
    scanf("%d", &num);

    while (c < num) {
        c = a + b;
        a = b;
        b = c;
    }

    if (c == num) {
        printf("%d pertence à sequência de Fibonacci.\n", num);
        flag = 1;
    } else {
        printf("%d não pertence à sequência de Fibonacci.\n", num);
    }

    return 0;
}

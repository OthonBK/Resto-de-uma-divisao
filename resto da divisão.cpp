#include <stdio.h>

int main() {
    int dividendo, divisor, quociente, resto;

    printf("Digite o dividendo: ");
    scanf("%d", &dividendo);

    printf("Digite o divisor: ");
    scanf("%d", &divisor);

    quociente = dividendo / divisor;
    resto = dividendo % divisor;

    printf("O quociente da divisão é: %d\n", quociente);
    printf("O resto da divisão é: %d\n", resto);

    return 0;
}

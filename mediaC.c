#include <stdio.h>

int main() {
    double x, y, media;

    // Solicita e lê o primeiro número
    printf("Digite o primeiro numero: ");
    scanf("%lf", &x);

    // Solicita e lê o segundo número
    printf("Digite o segundo numero: ");
    scanf("%lf", &y);

    // Calcula a média
    media = (x + y) / 2;

    // Exibe a média
    printf("A media dos numeros %.2f e %.2f e: %.2f\n", x, y, media);

    return 0;
}
    
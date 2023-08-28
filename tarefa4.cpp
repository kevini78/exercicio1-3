#include <stdio.h>

int main() {
    double altura;

    printf("Digite a altura da pessoa em metros: ");
    scanf("%lf", &altura);

    if (altura > 1.8) {
        printf("A altura é maior do que 1.8 metros.\n");
    } else {
        printf("A altura é igual ou menor do que 1.8 metros.\n");
    }

    return 0;
}

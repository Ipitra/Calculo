#include <stdio.h>

int main() {
    char operador;
    double num1, num2, resultado;

    printf("Digite um operador (+, -, *, /): ");
    scanf(" %c", &operador);

    printf("Digite dois numeros: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operador) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %.2lf\n", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("Resultado: %.2lf\n", resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("Resultado: %.2lf\n", resultado);
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado: %.2lf\n", resultado);
            } else {
                printf("Erro! Divisao por zero nao e permitida.\n");
            }
            break;
        default:
            printf("Erro! Operador invalido.\n");
    }

    return 0;
}

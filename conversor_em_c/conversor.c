#include <stdio.h>

float celsiusParaFahrenheit(float c) {
    return (c * 1.8) + 32.0;
}

float celsiusParaKelvin(float c) {
    return c + 273.15;
}

float fahrenheitParaCelsius(float f) {
    return (f - 32.0) / 1.8;
}

float fahrenheitParaKelvin(float f) {
    return (f - 32.0) / 1.8 + 273.15;
}

float kelvinParaCelsius(float k) {
    return k - 273.15;
}

float kelvinParaFahrenheit(float k) {
    return (k - 273.15) * 1.8 + 32.0;
}

int main() {
    int opcao;
    float temp, resultado;

    printf("=== Conversor de Temperaturas ===\n");
    printf("1. Celsius -> Fahrenheit\n");
    printf("2. Celsius -> Kelvin\n");
    printf("3. Fahrenheit -> Celsius\n");
    printf("4. Fahrenheit -> Kelvin\n");
    printf("5. Kelvin -> Celsius\n");
    printf("6. Kelvin -> Fahrenheit\n");
    printf("=================================\n");
    printf("Escolha uma opcao (1-6): ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Informe a temperatura em Celsius: ");
            scanf("%f", &temp);
            resultado = celsiusParaFahrenheit(temp);
            printf("%.2f C = %.2f F\n", temp, resultado);
            break;
        case 2:
            printf("Informe a temperatura em Celsius: ");
            scanf("%f", &temp);
            resultado = celsiusParaKelvin(temp);
            printf("%.2f C = %.2f K\n", temp, resultado);
            break;
        case 3:
            printf("Informe a temperatura em Fahrenheit: ");
            scanf("%f", &temp);
            resultado = fahrenheitParaCelsius(temp);
            printf("%.2f F = %.2f C\n", temp, resultado);
            break;
        case 4:
            printf("Informe a temperatura em Fahrenheit: ");
            scanf("%f", &temp);
            resultado = fahrenheitParaKelvin(temp);
            printf("%.2f F = %.2f K\n", temp, resultado);
            break;
        case 5:
            printf("Informe a temperatura em Kelvin: ");
            scanf("%f", &temp);
            resultado = kelvinParaCelsius(temp);
            printf("%.2f K = %.2f C\n", temp, resultado);
            break;
        case 6:
            printf("Informe a temperatura em Kelvin: ");
            scanf("%f", &temp);
            resultado = kelvinParaFahrenheit(temp);
            printf("%.2f K = %.2f F\n", temp, resultado);
            break;
        default:
            printf("Erro: Opcao invalida. Por favor, reinicie o programa e escolha um numero de 1 a 6.\n");
            break;
    }

    return 0;
}

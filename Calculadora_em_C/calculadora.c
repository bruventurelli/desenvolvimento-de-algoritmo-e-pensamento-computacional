#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

// Declaração das 20 Funções
double somar(double a, double b) { return a + b; }
double subtrair(double a, double b) { return a - b; }
double multiplicar(double a, double b) { return a * b; }
double dividir(double a, double b) { return a / b; }
double potencia(double base, double expoente) { return pow(base, expoente); }
double raiz_quadrada(double a) { return sqrt(a); }
double raiz_cubica(double a) { return cbrt(a); }
double seno(double angulo) { return sin(angulo); }
double cosseno(double angulo) { return cos(angulo); }
double tangente(double angulo) { return tan(angulo); }
double logaritmo_natural(double a) { return log(a); }
double logaritmo_base10(double a) { return log10(a); }
double valor_absoluto(double a) { return fabs(a); }
double porcentagem(double total, double percentual) { return total * (percentual / 100.0); }
double media_aritmetica(double a, double b, double c) { return (a + b + c) / 3.0; }
double graus_para_radianos(double graus) { return graus * M_PI / 180.0; }
double radianos_para_graus(double radianos) { return radianos * 180.0 / M_PI; }
double area_circulo(double raio) { return M_PI * pow(raio, 2); }
double area_retangulo(double base, double altura) { return base * altura; }
double hipotenusa(double cateto1, double cateto2) { return sqrt(pow(cateto1, 2) + pow(cateto2, 2)); }

int main() {
    int opcao;
    double num1, num2, num3, resultado;

    do {
        printf("\n--- CALCULADORA C - 20 FUNCOES ---\n");
        printf("1. Soma\n2. Subtracao\n3. Multiplicacao\n4. Divisao\n");
        printf("5. Potenciacao\n6. Raiz Quadrada\n7. Raiz Cubica\n8. Seno\n");
        printf("9. Cosseno\n10. Tangente\n11. Logaritmo Natural (ln)\n12. Logaritmo Base 10\n");
        printf("13. Valor Absoluto\n14. Porcentagem\n15. Media Aritmetica (3 numeros)\n");
        printf("16. Graus para Radianos\n17. Radianos para Graus\n18. Area do Circulo\n");
        printf("19. Area do Retangulo\n20. Hipotenusa\n0. Sair\n");
        printf("----------------------------------\n");
        printf("Escolha uma operacao: ");
        
        if (scanf("%d", &opcao) != 1) {
            printf("Erro na leitura da opcao. Encerrando.\n");
            break;
        }

        switch (opcao) {
            case 1:
                printf("Digite dois numeros: ");
                scanf("%lf %lf", &num1, &num2);
                printf("Resultado: %.4f\n", somar(num1, num2));
                break;
            case 2:
                printf("Digite dois numeros: ");
                scanf("%lf %lf", &num1, &num2);
                printf("Resultado: %.4f\n", subtrair(num1, num2));
                break;
            case 3:
                printf("Digite dois numeros: ");
                scanf("%lf %lf", &num1, &num2);
                printf("Resultado: %.4f\n", multiplicar(num1, num2));
                break;
            case 4:
                printf("Digite dividendo e divisor: ");
                scanf("%lf %lf", &num1, &num2);
                if (num2 == 0) printf("Erro: Divisao por zero!\n");
                else printf("Resultado: %.4f\n", dividir(num1, num2));
                break;
            case 5:
                printf("Digite a base e o expoente: ");
                scanf("%lf %lf", &num1, &num2);
                printf("Resultado: %.4f\n", potencia(num1, num2));
                break;
            case 6:
                printf("Digite um numero: ");
                scanf("%lf", &num1);
                if (num1 < 0) printf("Erro: Raiz de numero negativo!\n");
                else printf("Resultado: %.4f\n", raiz_quadrada(num1));
                break;
            case 7:
                printf("Digite um numero: ");
                scanf("%lf", &num1);
                printf("Resultado: %.4f\n", raiz_cubica(num1));
                break;
            case 8:
                printf("Digite o angulo em radianos: ");
                scanf("%lf", &num1);
                printf("Resultado: %.4f\n", seno(num1));
                break;
            case 9:
                printf("Digite o angulo em radianos: ");
                scanf("%lf", &num1);
                printf("Resultado: %.4f\n", cosseno(num1));
                break;
            case 10:
                printf("Digite o angulo em radianos: ");
                scanf("%lf", &num1);
                printf("Resultado: %.4f\n", tangente(num1));
                break;
            case 11:
                printf("Digite um numero: ");
                scanf("%lf", &num1);
                if (num1 <= 0) printf("Erro: Logaritmo de numero menor ou igual a zero!\n");
                else printf("Resultado: %.4f\n", logaritmo_natural(num1));
                break;
            case 12:
                printf("Digite um numero: ");
                scanf("%lf", &num1);
                if (num1 <= 0) printf("Erro: Logaritmo de numero menor ou igual a zero!\n");
                else printf("Resultado: %.4f\n", logaritmo_base10(num1));
                break;
            case 13:
                printf("Digite um numero: ");
                scanf("%lf", &num1);
                printf("Resultado: %.4f\n", valor_absoluto(num1));
                break;
            case 14:
                printf("Digite o total e o percentual (%%): ");
                scanf("%lf %lf", &num1, &num2);
                printf("Resultado: %.4f\n", porcentagem(num1, num2));
                break;
            case 15:
                printf("Digite tres numeros: ");
                scanf("%lf %lf %lf", &num1, &num2, &num3);
                printf("Resultado: %.4f\n", media_aritmetica(num1, num2, num3));
                break;
            case 16:
                printf("Digite o valor em graus: ");
                scanf("%lf", &num1);
                printf("Resultado: %.4f radianos\n", graus_para_radianos(num1));
                break;
            case 17:
                printf("Digite o valor em radianos: ");
                scanf("%lf", &num1);
                printf("Resultado: %.4f graus\n", radianos_para_graus(num1));
                break;
            case 18:
                printf("Digite o raio do circulo: ");
                scanf("%lf", &num1);
                if (num1 < 0) printf("Erro: Raio negativo!\n");
                else printf("Resultado: %.4f\n", area_circulo(num1));
                break;
            case 19:
                printf("Digite a base e a altura: ");
                scanf("%lf %lf", &num1, &num2);
                if (num1 < 0 || num2 < 0) printf("Erro: Medidas nao podem ser negativas!\n");
                else printf("Resultado: %.4f\n", area_retangulo(num1, num2));
                break;
            case 20:
                printf("Digite os dois catetos: ");
                scanf("%lf %lf", &num1, &num2);
                if (num1 < 0 || num2 < 0) printf("Erro: Medidas nao podem ser negativas!\n");
                else printf("Resultado: %.4f\n", hipotenusa(num1, num2));
                break;
            case 0:
                printf("Encerrando a calculadora...\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}

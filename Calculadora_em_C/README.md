# Calculadora Modular em C - 20 Funções

Este repositório contém uma aplicação desenvolvida em linguagem C que funciona como uma calculadora científica e geométrica completa. O projeto aplica conceitos de modularização, tratamento de erros matemáticos e manipulação de entrada e saída.

## Funcionalidades
O código dispõe de um menu interativo com repetição contínua (`do-while`) apresentando 20 funções distribuídas da seguinte forma:

*   **Operações Básicas:** Soma, Subtração, Multiplicação, Divisão, Porcentagem e Média Aritmética.
*   **Avançadas e Exponenciais:** Potenciação, Raiz Quadrada, Raiz Cúbica e Valor Absoluto.
*   **Logaritmos:** Logaritmo Natural (ln) e Logaritmo na Base 10.
*   **Trigonometria e Conversões:** Seno, Cosseno, Tangente, Graus para Radianos e Radianos para Graus.
*   **Geometria plana:** Área do Círculo, Área do Retângulo e Cálculo de Hipotenusa.

## Tratamento de Erros
A aplicação avalia os dados de entrada antes de submetê-los à função matemática, validando cenários que ferem o domínio das equações, como:
*   Divisão por zero.
*   Raiz quadrada de números negativos.
*   Logaritmo de zero ou números negativos.
*   Inserção de medidas negativas em cálculos de área e catetos.

## Como Compilar e Executar
Como o programa faz uso extensivo da biblioteca `math.h`, é necessário referenciá-la explicitamente na compilação em ambientes baseados em Unix/Linux usando a flag `-lm`.

```bash
# Compilar o código
gcc calculadora.c -o calculadora -lm

# Executar a aplicação
./calculadora

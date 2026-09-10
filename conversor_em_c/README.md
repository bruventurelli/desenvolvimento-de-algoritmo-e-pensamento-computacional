# Conversor de Temperaturas em C

## Descrição da Atividade
Este projeto é um conversor de temperaturas desenvolvido em linguagem C. O objetivo principal do algoritmo é demonstrar o uso prático da estrutura de controle de fluxo `switch...case` para direcionar diferentes operações matemáticas com base na escolha do usuário, além de aplicar o conceito de modularização por meio de funções independentes para cada cálculo.

## Funcionamento do Programa
Ao executar o programa, o usuário é apresentado a um menu interativo com seis opções de conversão de temperatura. Após digitar o número correspondente à operação desejada, o programa solicita o valor da temperatura de origem. 

O fluxo é então direcionado através de uma estrutura `switch...case` para a função de cálculo correspondente. Caso o usuário insira um número fora do intervalo de 1 a 6, o bloco `default` é acionado, exibindo uma mensagem de erro e prevenindo falhas na execução.

## Opções de Conversão Implementadas
1. Celsius para Fahrenheit ($F = C \times 1.8 + 32$)
2. Celsius para Kelvin ($K = C + 273.15$)
3. Fahrenheit para Celsius ($C = (F - 32) / 1.8$)
4. Fahrenheit para Kelvin ($K = (F - 32) / 1.8 + 273.15$)
5. Kelvin para Celsius ($C = K - 273.15$)
6. Kelvin para Fahrenheit ($F = (K - 273.15) \times 1.8 + 32$)

## Instruções para Execução

**Pré-requisitos:** Ter um compilador C instalado (como o GCC).

1. Clone este repositório ou baixe o arquivo `conversor.c`.
2. Abra o terminal e navegue até a pasta onde o arquivo está salvo.
3. Compile o código com o comando:
   `gcc conversor.c -o conversor`
4. Execute o programa:
   - No Windows: `conversor.exe`
   - No Linux/Mac: `./conversor`

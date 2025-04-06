/*Escrever um algoritmo para determinar o consumo médio de um automóvel sendo fornecida a distância total percorrida pelo automóvel e o total de combustível gasto.*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(){
    float distancia, combustivel;

    printf("Digite a distância percorrida \n>:");
    scanf(" %f", &distancia);
    printf("Digite a quantidade de combustivel gasto \n>:");
    scanf(" %f", &combustivel);
    printf("O consumo médio de combustivel é: %0.01f", distancia/combustivel);
    return 0;
}

/*Escrever um algoritmo que leia o nome de um vendedor, o seu salário fixo e o total de vendas efetuadas por ele no mês (em dinheiro). Sabendo que este vendedor ganha 12% de comissão sobre suas vendas efetuadas, informar o seu nome, o salário fixo e salário no final do mês.*/

main(){
    char name[40];
    float salario, vendas;
    printf("Digite o nome do vendedor:\n>:");
    scanf(" %s", &name);
    printf("Digite qual o salário fixo do vendedor:\n>:");
    scanf(" %f", &salario);
    printf("Digite a quantidade de vendas feitas pelo vendedor(em reais):\n>:");
    scanf(" %f", &vendas);
    printf("O vendedor %s que recebe o sálario de %0.01f e execultou %0.01f de vendas tem o sálario final sendo %0.01f", name, salario, vendas, salario+(vendas*0.12));
}

/*Desenvolva um algoritmo que leia dois valores para as variáveis A e B, e efetue as trocas dos valores de forma que a variável A passe a possuir o valor da variável B e a variável B passe a possuir o valor da variável A. Apresentar como saída os valores das variáveis A e B trocados.*/

main(){
    int a, b, aux;
    printf("Digite um número inteiro para A:\n>:");
    scanf(" %d", &a);
    printf("Digite um número inteiro para B:\n>:");
    scanf(" %d", &b);
    aux = a;
    a = b;
    b = aux;
    printf("Os valores invertidos das váriaveis A e B são, %d e %d", a,b);
}


/*Elaborar um algoritmo que efetue a apresentação do valor da conversão em real (R$) de um valor lido em dólar (US$). O algoritmo deverá solicitar o valor da cotação do dólar e também a quantidade de dólares disponíveis com o usuário.*/

main(){
    float cotacao, quantidade;

    printf("Digite a cotação do dolar nesse exatomento:\n>:");
    scanf(" %f", &cotacao);
    printf("Digite a quantidade de dolar em sua posse:\n>:");;
    scanf(" %f", &quantidade);
    printf("O valor em real que você possuí é de R$%0.01f", quantidade*cotacao);
}

/*Crie um algoritmo que receba um valor que foi depositado e exiba o valor com rendimento após um mês. Considere fixo o juro da poupança em 0,70% a. m.*/

main(){
    float deposito;
    printf("Digite o valor depositado:\n>:");
    scanf(" %f", &deposito);
    printf("O valor com o juros atual é de: R$%0.01f", deposito*1.7);
}

/*Uma loja está vendendo seus produtos em 5 prestações sem juros. Faça um algoritmo que receba um valor de uma compra e mostre o valor das prestações.*/

main(){
    float preco;
    printf("Qual o valor da compra que será parcelada?\n>:");
    scanf(" %f", &preco);
    printf("O valor de cada prestação é de: R$%0.01f", preco/5);
}

/*Faça um algoritmo que receba o preço de custo de um produto e mostre o valor de venda. Sabe-se que o preço de custo receberá um acréscimo de acordo com um percentual informado pelo usuário.*/

main(){
    char produto[30];
    float valor, acrecimo;

    printf("Informe o nome do produto:\n>:");
    gets(produto);
    printf("Digite o custo do produto:\n>:");
    scanf(" %f", &valor);
    printf("informe o acrécimo em decimal do produto:\n>:");
    scanf(" %f", &acrecimo);
    printf("O valor para o clinte deve ser: R$%0.01f", valor+(valor*acrecimo));
}

/*O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do distribuidor e dos impostos (aplicados, primeiro os impostos sobre o custo de fábrica, e depois a percentagem do distribuidor sobre o resultado). Supondo que a percentagem do distribuidor seja de 30% e os impostos 45%. Escrever um algoritmo que leia o custo de fábrica de um carro e informe o custo ao consumidor do mesmo.*/

main(){
    float custo, imposto;

    printf("Escreva o custo de fábrica:\n>:");
    scanf(" %f", &custo);
    imposto = custo * 1.45;
    printf("O custo final será de: R$%0.01f", imposto * 1.3);
}

/*Escreva um algoritmo para calcular o IMC(Índice de Massa Corporal) de uma pessoa com base no peso e na altura fornecidos pelo usuário. O IMC é calculado dividindo-se o peso pelo quadrado da altura.*/

main(){
    float altura, peso;
    printf("Informe sua altura:\n>:");
    scanf(" %f", &altura);
    printf("Informe seu peso:\n>:");
    scanf(" %f", &peso);
    printf("Seu IMC é: %0.1f", peso/(altura*altura));
}

/*Desenvolva um algoritmo que calcule o tempo necessário para percorrer uma determinada distância com base na velocidade média fornecida pelo usuário. O tempo de viagem é calculado dividindo-se a distância pela velocidade.*/

main(){
    float velocidade, tempo, distancia;

    printf("Informe a velocidade média:\n>:");
    scanf(" %f", &velocidade);
    printf("Informe a distancia que será percorrida:\n>:");
    scanf(" %f", &distancia);
    printf("O tempo necessário para fazer essa viagem será de: %0.1f", distancia/velocidade);
}

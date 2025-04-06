/*Escrever um algoritmo que leia dois valores inteiro distintos e informe qual é o maior.*/

#include <stdio.h>
#include <string.h>
#include <conio.h>

void ex1(){
    int a, b;

    printf("Informe o valor de A:\n>:");
    scanf(" %d", &a);
    printf("Informe o valor de B:\n>:");
    scanf(" %d", &b);
    if(a > b){
        printf("A é maior que B pois %d é maior que %d", a, b);
    }
    if(a == b){
        printf("ambos são iguais pois %d é igual a %d", a, b);
    }
    else{
        printf("B é maior que A pois %d é maior que %d", b, a);
    }
}

/*Faça um algoritmo que receba um número e diga se este número está no intervalo entre 100 e 200.*/

void ex2(){
    int numero;

    printf("Escreva um número inteiro!\n>:");
    scanf(" %d", &numero);
    if(numero >= 100 && numero <= 200){
        printf("O número %d está entre 100 e 200", numero);
    }
    else{
        printf("O número %d não está entre 100 e 200", numero);
    }
}

/*Escrever um algoritmo que leia o nome e as três notas obtidas por um aluno durante o semestre. Calcular a sua média (aritmética), informar o nome e sua menção aprovado (media >= 7), Reprovado (media <= 5) e Recuperação (media entre 5.1 a 6.9).*/

void ex3(){
    char aluno[40];
    float nota1, nota2, nota3, media;

    printf("Digite o nome do aluno:\n>:");
    gets(aluno);
    printf("Insira as 3 notas do aluno\n>:");
    scanf(" %f", &nota1);
    scanf(" %f", &nota2);
    scanf(" %f", &nota3);

    media = (nota1 + nota2 + nota3)/3;

    if(media >= 7){
        printf("O aluno %s foi aprovado com a média %0.1f", aluno, media);
    }
    if(media <= 5){
        printf("O aluno %s foi reprovado com a média %0.1f", aluno, media);
    }
    if(media > 5 && media < 7){
        printf("O aluno %s foi reprovado com a média %0.1f mas poderá realizar recuperação!", aluno, media);
    }
}

/*Ler 80 números e ao final informar quantos número estão no intervalo entre 10 (inclusive) e 150 (inclusive).*/

void ex4(){
    int vetor[80];

    for(int i = 0; i < 80; i++){
        printf("Digite um valor inteiro\n>:");
        scanf(" %d", &vetor[i]);
    }

    for(int b = 0; b < 80; b++){
        if(vetor[b] >= 10 && vetor[b] <= 150){
            printf("Esse numero %d está entre 10 e 150\n", vetor[b]);
        }
        else{
            printf("Esse numero %d não está entre 10 e 150\n", vetor[b]);
        }
    }
}

/*Faça um algoritmo que receba a idade de 50 pessoas e mostre mensagem informando “maior de idade” e “menor de idade” para cada pessoa. Considere a idade a partir de 18 anos como maior de idade.*/

void ex5(){
    int idade[49];

    for(int i = 0; i < 50; i++){
        printf("Digite a idade\n>:");
        scanf(" %d", &idade[i]);
    }

    for(int b = 0; b < 50; b++){
        if(idade[b] >= 18){
            printf("A pessoa %d, que posssuí a idade %d é maior de idade\n", b, idade[b]);
        }
        else{
            printf("A pessoa %d, que posssuí a idade %d é menor de idade\n", b, idade[b]);
        }
    }
}

/*Escrever um algoritmo que leia o nome e o sexo de 30 pessoas e informe o nome e se ela é homem ou mulher. No final informe total de homens e de mulheres.*/

void ex6(){
    char name[30][40], sexo[30][10];

    for(int i = 0; i < 31; i++){
        printf("Digite o nome da %dº pessoa e seu respectivo sexo!\n>:");
        gets(name[i]);
        gets(sexo[i]);
    }
    for (int b = 0; b < 31; b++){
        printf("%s %s\n", name[b], sexo[b]);
    }
    
}

/*Escrever um algoritmo que leia os dados de N pessoas (nome, sexo, idade e saúde) e informe se está apta ou não para cumprir o serviço militar obrigatório. Informe os totais.*/

#define MAX 100

typedef struct 
{
    char nome[50], sexo, saude;
    int idade;
} Pessoa;


void ex7(){
    int n, i, aptos = 0, inaptos = 0;
    Pessoa pessoa[MAX];

    printf("Quantas pessoas você deseja cadastrar?\n>:");
    scanf(" %d", &n);

    for(i = 0; i < n; i++){
        printf("\nPessoa %d\n", i + 1);
        printf("Nome:\n>:");
        scanf(" %s", &pessoa[i].nome);
        printf("Sexo(M/F):\n>:");
        scanf(" %c", &pessoa[i].sexo);
        printf("Idade:\n::");
        scanf(" %d", &pessoa[i].idade);
        printf("A/O %c está saudável?(S/N)\n>:", pessoa[i].nome);
        scanf(" %c", &pessoa[i].saude);

        if((pessoa[i].sexo == 'M' || pessoa[i].sexo == 'm') && (pessoa[i].idade >= 18 && pessoa[i].idade <= 45) && (pessoa[i].saude == 'S' || pessoa[i].saude == 's')){
            printf("O canditado %s está apto ao serviço militar!\n", pessoa[i].nome);
            aptos++;
        }
        else{
            printf("O candidato %s não está apto ao serviço militar!\n", pessoa[i].nome);
            inaptos++;
        }
    }
    printf("A quantidade de pessoas aptas para o serviço militar são %d e a quantidade de pessoas inaptas são %d.", aptos, inaptos);
}

/*Faça um algoritmo que receba o preço de custo e o preço de venda de 40 produtos. Mostre como resultado se houve lucro, prejuízo ou empate para cada produto. Informe média de preço de custo e do preço de venda.*/


#define MAX 40

typedef struct
{
    float custo, venda;
    char nome[15];
} produto;


void ex8(){
    produto produto[MAX];
    int lucro = 0, prejuizo = 0;

    for(int i = 0; i <= 40; i++){
        printf("informe o nome do produto que você deseja cadastrar:\n>:");
        scanf(" %s", &produto[i].nome);
        printf("Informe o preço de custo do produto cadastrado:\n>:");
        scanf(" %f", &produto[i].custo);
        printf("Informe o preço de venda do produto cadastrado:\n>:");
        scanf(" %f", &produto[i].venda);

        if(produto[i].venda >= produto[i].custo){
            lucro++;
        }
        else{
            prejuizo++;
        }
    }
    printf("De todos os produtos cadastrados %d obteve lucro e %d teve prejuizo", lucro, prejuizo);
}

/*Faça um algoritmo que receba um número e mostre uma mensagem caso este número sege maior que 80, menor que 25 ou igual a 40.*/

void ex9(){
    int valor;

    printf("Digite um número inteiro!\n>:");
    scanf(" %d", &valor);

    if(valor > 80 || valor < 25 || valor == 40){
        printf("seu número é maior que 80, menor que 25 ou é exatamente 40");
    }
    else{
        printf("Teu número é: %d", valor);
    }
}

/*Faça um algoritmo que receba N números e mostre positivo, negativo ou zero para cada número.*/


#define MAX 100

typedef struct
{
    int valor;
} number;


void ex10(){
    number number[MAX];

    for(int i = 0; i < 100; i++){
        printf("Digite um valor inteiro, podendo ser positivo e negativo\n>:");
        scanf(" %d", &number[i].valor);

        if(number[i].valor > 0){
            printf("O valor selecionado, é maior que 0, ou seja, é positivo!\n");
        }
        if(number[i].valor == 0){
            printf("O valor selecionado é exatamente 0!\n");
        }
        if(number[i].valor < 0){
            printf("O valor selecionado é menor que 0, ou seja, é negativo!\n");
        }
    }
}
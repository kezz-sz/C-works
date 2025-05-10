#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

typedef struct 
{
    char name[40];
    int matricula;
    float nota[3], media;
} Alunos;

int main(){
    Alunos alunos[50];

    for(int i = 0; i <= 50; i++){
        alunos[i].media = 0;
        printf("Informe o nome do aluno:\n>:");
        scanf(" %s", &alunos[i].name);
        alunos[i].matricula = i;
        for(int b = 1; b < 4; b++){
            printf("Informe as notas tiradas na %dº prova:\n>:");
            scanf(" %f", &alunos[i].nota[b]);
            alunos[i].media = alunos[i].media + alunos[i].nota[b];
        }
        printf("A média do aluno %s com a matricula numero %d foi %0.01f\n", alunos[i].name, alunos[i].matricula, alunos[i].media/3);
    }
    return 0;
}

#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>

void toLowerCase(char str[]){
    for(int i = 0; i < strlen(str); i++){
        str[i] = tolower(str[i]);
    }
}

int main(){
    char response[10], again[1];
    float graus, kelvin, fahrenheit;
    printf("Você deseja saber a temperatura em kelvin, fahrenheit ou graus?\n>:");
    scanf(" %s", &response);
    toLowerCase(response);

    if(strcmp(response, "kelvin") == 0){
        printf("A temperatura utilizada será fahrenheit ou graus?\n>:");
        scanf(" %s", &response);
        toLowerCase(response);

        if(strcmp(response, "graus") == 0){
            printf("Informe a temperatura em graus:\n>:");
            scanf(" %f", &graus);
            printf("A sua temperatura em kelvin é: %0.01f", graus+273.15);
        }

        if(strcmp(response, "fahrenheit") == 0){
            printf("Informe a temperatura em fahrenheit:\n>:");
            scanf(" %f", &fahrenheit);
            printf("A sua temperatura em kelvin é: %0.01f", (fahrenheit - 32) / 1.8 + 273.15);
        }
    }

    if(strcmp(response, "fahrenheit") == 0){
        printf("A temperatura utilizada será graus ou kelvin?\n>:");
        scanf(" %s", response);
        toLowerCase(response);

        if(strcmp(response, "graus") == 0){
            printf("Informe a temperatura em graus:\n>:");
            scanf(" %f", &graus);
            printf("A sua temperatura em fahrenheit é: %0.01f", (graus * 9/5) + 32);
        }

        if(strcmp(response, "kelvin") == 0){
            printf("Informe a temperatura em kelvin:\n>:");
            scanf(" %f", &kelvin);
            printf("A sua temperatura em fahrenheit é: %0.01f", ((kelvin - 273.15) * 1.8) + 32);
        }
    }

    if(strcmp(response, "graus") == 0){
        printf("A temperatura utilizada será fahrenheit ou kelvin?\n>:");
        scanf(" %s", &response);
        toLowerCase(response);

        if(strcmp(response, "fahrenheit") == 0){
            printf("Informe a temperatura em fahrenheit:\n>:");
            scanf(" %f", &fahrenheit);
            printf("A sua temperatura em graus é: %0.01f", (fahrenheit - 32) / 1.8);
        }

        if(strcmp(response, "kelvin") == 0){
            printf("Informe a temperatura em kelvin:\n>:");
            scanf(" %f", &kelvin);
            printf("A sua temperatura em graus é: %0.01f", kelvin - 273.15);
        }
    }

    printf("\nDeseja fazer denovo?(S/N)\n>:");
    scanf(" %s", again);
    toLowerCase(again);
    
    if(strcmp(response, "s") == 0){
        main();
    }

    return 0;
}
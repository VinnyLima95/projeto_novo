#include <stdio.h>
#include<stdlib.h>
#include <string.h>

char *concatena(char *s1, char *s2);

int main() {
    char stringEntrada[100];
    char stringEntrada2[100];
    fgets(stringEntrada, 100, stdin);
    fgets(stringEntrada2, 100, stdin);
    char *resultado = concatena(stringEntrada,stringEntrada2);
    printf("%s\n",resultado);
}

char *concatena(char *s1, char *s2)
{
    char *concatenado = malloc(strlen(s1)+strlen(s2)+1);
    memcpy(concatenado,s1,strlen(s1));
    memcpy(concatenado+strlen(s1)-1,s2,strlen(s2));   
    return concatenado;
    

    
    //Salve salve
}
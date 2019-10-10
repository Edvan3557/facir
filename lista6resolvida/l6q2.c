#include<stdio.h>
void main(){
    char texto[50];
    int x;

    printf("digite uma frase:");
    gets(texto);
    x=0;
    while(texto[x] != '\0'){
    x++;
    }
    printf("O numero de caracteres e %d",x);
}

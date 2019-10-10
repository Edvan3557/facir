#include<stdio.h>
void main(){
    char texto[50];//variavel do tipo nome//
    int x;//variavel inteira numeros//

    printf("digite uma frase:"); //printa o que se pede
    gets(texto);//entrada de daddos//
    x=0;
    while(texto[x] != '\0'){//comando de repeticões//
    x++;//atribuicão//
    }
    printf("O numero de caracteres e %d",x);
}

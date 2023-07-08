#include <stdio.h>
#include <string.h>

int main(){
char a[200], b[200];
int i;

printf("Digite os valores a serem repetidos:\n ");
scanf("%s", a);

//"%[^\n]" conversão para leitura de caractere até '\n'
//ou seja, leitura de linha até nova linha
if (scanf("%[^\n]", b) == 1){
    for (i = 0; i < 10; i++){
        printf("%s %s\n", a, b);
    }
}
else {
    for (i = 0; i < 10; i++){
        printf("%s \n", a);
    }
}
return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char nome1[27],nome2[10001],alfabeto[] = {"abcdefghijklmnopqrstuvwxyz"};
    int n1,n2, j = 0,aux = 0;
    char temp;
    scanf("%s%*c",nome1);
    scanf("%s%*c",nome2);
    //printf("%c %c\n",alfabeto[0],alfabeto[4]);
    n1 = strlen(nome1);
    n2 = strlen(nome2);
    for(int i = 0; i < n2; i++){
        while(j < n1 && aux == 0){
            if(nome1[j] == nome2[i]){
                //temp = alfabeto[j];
                nome2[i] = alfabeto[j];
                j = 0;
                aux = 1;
            }
            ++j;
        }
        aux = 0;
        j = 0;
    }
    printf("%s\n",nome2);
    return 0;
}

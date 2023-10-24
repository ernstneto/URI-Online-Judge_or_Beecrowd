#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char s[2000001][222];

int cmpstr(const void *a, const void *b){
    return strcmp(a, b);
}

int main(){
    int n = 0;
    while(scanf("%[a-zA-Z]%*[^a-zA-Z]", s[n])!= EOF){
        for(int i = 0; s[n][i]; ++i){
            s[n][i] = tolower(s[n][i]);
        }
        ++n;
    }
    qsort(s, n, sizeof(s[0]), cmpstr);
    printf("%s\n", s[0]);
    for(int i = 1; i < n; ++i){
        if(strcmp(s[i],s[i-1])){
            printf("%s\n", s[i]);
        }
    }
    return 0;
}
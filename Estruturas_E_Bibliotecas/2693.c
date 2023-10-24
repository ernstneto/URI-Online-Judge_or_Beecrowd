#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//char nome[112345][112], regiao[112345][1];
//int distancia[112345];

typedef int MeuInteiro;
typedef unsigned long long ull;

typedef struct Aluno{
	MeuInteiro custo;
	char regiao, nome[100];
} Aluno;

Aluno alunos[1123456];

int cmp(const void* a, const void *b){
	Aluno x = (*(Aluno*)a), y = (*(Aluno*)b);
	if(x.custo != y.custo){
		return x.custo - y.custo;
	}
	if(x.regiao != y.regiao){
		return x.regiao - y.regiao;
	}
	return strcmp(x.nome, y.nome);
}

int main(){
	int n, i;
	while(scanf("%d", &n)!= EOF){
		for(i = 0; i < n; i++){
			scanf("%s %c %d", alunos[i].nome, &alunos[i].regiao, &alunos[i].custo);
		}
		qsort(alunos, i, sizeof(alunos[0]), cmp);
		for(i = 0; i < n; i++){
			printf("%s\n", alunos[i].nome);
		}
	}

	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct trie {
	struct trie *alfabeto[256];
	char *valor;
	char *cargo;
	char c;
	struct trie *voltar;
	int salario;
} trie;

void guardar(trie *td, char *cargo, int salario) {
	if (cargo[0] == '\0') {

		td->salario = salario;

		return;
	}

	if (td->alfabeto[cargo[0]] == NULL) {
		td->alfabeto[cargo[0]] = calloc(1, sizeof(trie));
		td->alfabeto[cargo[0]]->voltar = td;
		//td->alfabeto[cargo[0]]->c = cargo[0];
	}
	guardar(td->alfabeto[cargo[0]], cargo+1, salario);
}

int procurar(trie *td, char *cargo) {
	if (cargo[0] == '\0'){
		//printf("%d\n",td->salario);
		return td->salario;
	}
	if (td->alfabeto[cargo[0]] == NULL)
		return 0;

	return procurar(td->alfabeto[cargo[0]], cargo+1);
}

int main() {
	trie *root = calloc(1, sizeof(trie));
	char funcao[60];
	int *qualquer;
	int preco;
	char texto[100000];
	char palavra[600];
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i = 0; i < n; i++){
		scanf(" %s %d", funcao, &preco);
		guardar(root, funcao, preco);
	}
	int soma;
	for(int i = 0; i < m; i++){
		scanf(" %[^\n]",texto);
		while(strcmp(texto,".")!=0){
			char *pch;
			pch = strtok(texto," ");
			while(pch != NULL){
				strcpy(palavra,pch);
				//printf("%s\n", palavra);
				soma += procurar(root, palavra);
				pch = strtok(NULL," ");
			}
			scanf(" %[^\n]",texto);
		}
		printf("%d\n",soma);
		soma = 0;
	}
	return 0;
 }
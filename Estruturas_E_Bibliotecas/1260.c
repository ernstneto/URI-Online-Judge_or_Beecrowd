#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double total = 0;

typedef struct trie {
	struct trie *alfabeto[256];
	//char *cargo;
	char c;
	//struct trie *voltar;
	//int salario;
    char *planta;
    double valor;
} trie;

void guardar(trie *td, char *planta, char *gplanta) {
	if (planta[0] == '\0') {
		if (td->planta != NULL){
			
			free(td->planta);
			td->planta =calloc(1,strlen(gplanta)+1);
			td->valor += 1;
			//td->plata->gplanta+1;
		}
		else if(td->planta == NULL){
			td->planta =calloc(1,strlen(gplanta)+1);
			td->valor += 1;
		}
		
		//td->valor = malloc(strlen(planta)+1);
		strcpy(td->planta, gplanta);
		
		//td->salario = salario;
		//printf("%d\n",td->salario);
		return;
	}

	if (td->alfabeto[planta[0]] == NULL) {
		
		td->alfabeto[planta[0]] = calloc(1, sizeof(trie));
		//td->alfabeto[planta[0]]->c = planta[0];
	}
	guardar(td->alfabeto[planta[0]], planta+1, gplanta);
}
/*
int procurar(trie *td, char *planta, char *gplanta) {
	if (planta[0] == '\0'){
		//printf("%d\n",td->salario);
		return td->salario;
	}
	if (td->alfabeto[planta[0]] == NULL)
		return 0;

	return procurar(td->alfabeto[planta[0]], planta+1, gplanta);
}

int deletar(trie *td, char *chave) {
	if (chave[0] == '\0') {
		if (td->planta) {
			free(td->planta);
			return 1;
		} else {
			return 0;
		}
	}

	if (td->alfabeto[chave[0]] == NULL)
		return 0;

	deletar(td->alfabeto[chave[0]], chave+1);
}
*/
void deletartudo(trie *td) {
    //puts("b");
	int i;
/*
	if (td->planta) {
		//printachave(td);
		//printf(" -> ");
		//puts(td->planta);
	}
*/
	for (i = 0; i < 256; i++){
		if (td->alfabeto[i] != NULL)
            deletartudo(td->alfabeto[i]);
    }

    if(td->planta != NULL) {
        free(td->planta);
        td->planta = NULL;
    }

    free(td);
    td = NULL;
}

void printatudo(trie *td) {
    //puts("c");
    int i;

	if (td->planta) {
		//printf(" -> ");
		printf("%s %.4lf\n",td->planta, (td->valor/total)*100);
	}

	for (i = 0; i < 256; i++)
		if (td->alfabeto[i])
			printatudo(td->alfabeto[i]);
}


int main(){
    trie *root = calloc(1, sizeof(trie));
    int n;
    char folha[35];
    
    scanf("%d\n",&n);
    //printf("\n");
    int aux = 0;
    int i = 0;
    int tam;
    char *retorna;
    while(n){
        retorna = fgets(folha, 35, stdin);  
        //scanf("%[^\n]%*c", folha);
        if (retorna == NULL || folha[0] == '\n') {
            printatudo(root);
            deletartudo(root);
            total = 0;
            root = calloc(1, sizeof(trie));
            --n;
            if (retorna != NULL)
                printf("\n");
        }
        else{
            total++;
            tam = strlen(folha);
            folha[tam-1] = '\0';
            //puts("aa");
            guardar(root,folha, folha);
            ++i;
        }
    }
    

    return 0;
}
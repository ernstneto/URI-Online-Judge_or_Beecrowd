#include <stdio.h>
 
int main() {
    int N, M, L, i, j;
	int CM, CL, A, sM, sL;
	int Mar[100][100], Leo[100][100];

	while ( scanf("%d", &N) != EOF ) {
		scanf("%d %d", &M, &L);

		// Loop Marcos
		for (i = 1; i <= M; ++i) {
			for (j = 1; j <= N; ++j) {
				scanf("%d", &Mar[i][j]);
			}
		}

		// Loop Leonardo
		for (i = 1; i <= L; ++i) {
			for (j = 1; j <= N; ++j) {
				scanf("%d", &Leo[i][j]);
			}
		}

		scanf("%d %d", &CM, &CL);
		scanf("%d", &A);

		// Seleção carta Marcos
		for (i = 1; i <= M; ++i) {
			for (j = 1; j <= N; ++j) {
				if (i == CM) {
					if (j == A) {
						sM = Mar[i][j];
					}
				}
			}
		}

		// Seleção carta Leonardo
		for (i = 1; i <= L; ++i) {
			for (j = 1; j <= N; ++j) {
				if (i == CL) {
					if (j == A) {
						sL = Leo[i][j];
					}
				}
			}
		}

		if (sM > sL) {
			printf("Marcos\n");
		} else if (sM < sL) {
			printf("Leonardo\n");
		} else {
			printf("Empate\n");
		}
	}
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 
    return 0;
}
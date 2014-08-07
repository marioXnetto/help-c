#include <stdio.h>
#include <stdlib.h>

#define MAX 4

int main (){
	int mat [MAX][MAX], i, j;

	for (i=0; i<MAX; i++){
		for (j=0; j<MAX; j++){
			printf ("Informe valor [linha %d] [Coluna %d]\n", i+1, j+1);
			scanf ("%d", &mat[i][j]);
		}
	}

	printf ("\n");

	for (i=0; i<MAX; i++){
		for (j=0; j<MAX; j++){
			printf ("%d ", mat[i][j]);
		}
		printf ("\n");
	}

	printf ("\n");

	return 0;
}


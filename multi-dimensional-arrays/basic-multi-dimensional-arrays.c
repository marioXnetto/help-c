#include <stdio.h>
#include <stdlib.h>

int main (){
	int matriz [4][4], i, j;

	for (i=0; i<4; i++){
		for (j=0; j<4; j++){
			printf ("Informe valor [linha %d] [Coluna %d]\n", i+1, j+2);
			scanf ("%d", &matriz[i][j]);
		}
	}

	printf ("\n");

	for (i=0; i<4; i++){
		for (j=0; j<4; j++){
			printf ("%d ", matriz[i][j]);
		}
		printf ("\n");
	}

	printf ("\n");

	system ("pause");
	return 0;
}

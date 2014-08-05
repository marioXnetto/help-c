#include <stdio.h>
#include <stdlib.h>

#define MAX 4	

int main (){
	int mat [MAX][MAX], i, j, hig, low;

	printf ("Informe valor [linha 1] [Coluna 1]\n");
	scanf ("%d", &mat[0][0]);

	for (i=0; i<MAX; i++){
		for (j=0; j<MAX; j++){
			
			if ((i || j) != 0){
				printf ("Informe valor [linha %d] [Coluna %d]\n", i+1, j+1);
				scanf ("%d", &mat[i][j]);
			}

			//low
			if (mat[i][j] < low)
				low = mat[i][j];
			//hig
			if (mat[i][j] > hig) 
				hig = mat[i][j];

		}
	}

	for (i=0; i<MAX; i++){
		for (j=0; j<MAX; j++){
			printf ("%d ", mat[i][j]);
		}
		printf ("\n");
	}

	printf ("\n\nhig = %d\nlow = %d\n\n", hig, low);

	system ("pause");
	return 0;
}

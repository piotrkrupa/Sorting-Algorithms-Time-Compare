#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void bubble(int *tab, int size){
	int temp, i, j;
	float diff;
	clock_t start_t, end_t;

	srand( time( NULL ) );
	start_t = clock();
	for( i = 0; i < size-1; i++){
		for( j = 0; j < size-i-1; j++ ){
			if( tab[j] > tab[j+1] ){
				temp = tab[j];
				tab[j] = tab[j+1];
				tab[j+1] = temp;
			}
		}
	}
	end_t = clock();
	diff = (((float)end_t - (float)start_t) / 1000000.0F ) * 1000; 
	for( i = 0; i < size; i++){
		printf("%d ", tab[i]);
	}
	printf("\nSort time: %0.2f sec\n",diff); 
}


int main(){


	int i, size;
	int *tab;

	printf("Type size of table:");
	scanf_s("%d", &size);
	tab = (int*)malloc(size * sizeof(int));

	for( i = 0; i < size; i++){
		tab[i] = rand();
	}

	bubble(tab, size);


	system("PAUSE");
	return 0;
}
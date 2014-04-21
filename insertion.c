#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
	
	int i, j, n, aux;
	
	printf("Size of vector: ");
	scanf("%d", &n);
  
	int numbers[n];
	printf("Enter the numbers to be sorted\n");
	
	for(i=0; i<n; i++) {
		scanf("%d", &numbers[i]);
	}
	
	time_t tic = time(NULL);
	for(i=0; i<n; i++) {
		
		for(j=0; j<n; j++) {
			if(numbers[i] < numbers[j]) {
				aux = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = aux;
			}
		}
	}
	
	time_t tac = time(NULL);
	for(i=0; i<n; i++) {
		printf("%d ", numbers[i]);
	}
	printf("\n");
	
	/*printf("Elapsed: %f seconds\n", difftime(tac, tic));*/
	
	return 0;
}

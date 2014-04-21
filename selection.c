#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void swap(int *a, int *b) {
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
}

int main() {
	
	int i, j, n, iMin;
	
	printf("Size of vector: ");
	scanf("%d", &n);
  
	int numbers[n];
	printf("Enter the numbers to be sorted\n");
	
	for(i=0; i<n; i++) {
		scanf("%d", &numbers[i]);
	}
	
	for(j=0; j<n-1; j++) {
		
		iMin = j;
		for(i=j+1; i<n; i++) {
			if(numbers[i] < numbers[iMin]) {
				iMin = i;
			}
		}
		
		if(iMin != j) {
			swap(&numbers[j], &numbers[iMin]);
		}
	}
	
	for(i=0; i<n; i++) {
		printf("%d ", numbers[i]);
	}
	printf("\n");
	
	/*printf("Elapsed: %f seconds\n", difftime(tac, tic));*/
	
	return 0;
}
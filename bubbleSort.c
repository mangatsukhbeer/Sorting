#include <stdio.h>
#define MAX 100

void bubbleSort(int array[], int count){
	int i = 0;
	int j = 0;
	int tmp;
	for(i=0;i<count;i++){
		for(j=0;j<count - i-1; j++){
			if(array[j] > array[j+1]){
				tmp = array[j];
				array[j] = array[j+1];
				array[j+1] = tmp;
			}
		}
	}
}

int main(){
	int numbers[MAX];
	int total = 0;
	printf("Enter number of elements in the Unsorted array (upto 100) :");
	scanf("%d",&total);
	printf("Enter %d integers :\n", total);
	for(int i=0;i< total;i++){
		scanf("%d",&numbers[i]);
	}
	bubbleSort(numbers,total);
	printf("Printing Sorted array:\n");
	for(int i=0;i< total;i++){
		printf("%d\n",numbers[i]);
	}
	return 0;
}

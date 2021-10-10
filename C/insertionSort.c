#include <stdio.h>

int main(){
  
	int n=10, temp;
	int arr[] = {3,2,5,1,9,10,8,7,6,4};
  
	printf("Array before sorting:\n");
	for (int i = 0; i <= n - 1; i++) {
		printf("%d ", arr[i]);
	}

	// Implementation of Insertion Sort
	for (int i = 1; i < n; i++){
		int j = i;
		// Put the element in right position
		while (j > 0 && arr[j - 1] > arr[j]){
			temp = arr[j];
			arr[j] = arr[j - 1];
			arr[j - 1] = temp;
			j--;
		}
	}

	// Print the resulted array
	printf("\nArray after sorting:\n");
	for (int i = 0; i <= n - 1; i++){
		printf("%d ", arr[i]);
	}
	return 0;
}

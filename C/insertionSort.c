#include <stdio.h>

int main(){
  
	int n=10, temp;
	int arr[] = {3,2,5,1,9,10,8,7,6,4};
  
	printf("Array before sorting:\n");
	for (int i = 0; i <= n - 1; i++) {
		printf("%d ", arr[i]);
	}

	// Implementation of Insertion Sort
	// Traverse each element in array and shift it to its correct position
	for (int i = 1; i < n; i++){
		
		int j = i;
		
		// Shift the element to the left while it is greater than its adjacent(left) element
		while (j > 0 && arr[j - 1] > arr[j]){
			
			// shuffling with the elements greater than current element (to its left)
			temp = arr[j];
			arr[j] = arr[j - 1];
			arr[j - 1] = temp;
			j--;
			
		}
		// Element placed to its correct position
	}

	// Print the resulted array
	printf("\nArray after sorting:\n");
	for (int i = 0; i <= n - 1; i++){
		printf("%d ", arr[i]);
	}
	return 0;
}

public class ReverseArray {
	
	// Reversing array
    static void reverseArray(int arr[], int n) {
		 
		for(int i = 0, j = n - 1; i < j; i++, j--){
			int t = arr[i];
			arr[i] = arr[j];
			arr[j] = t;
		}
    }
    
    // printing array
    static void printArray(int arr[], int n){
    	
    	for(int i = 0; i < arr.length; i++)
    		System.out.print(arr[i] + " ");
    	System.out.println();	
    }

	// main method
    public static void main(String args[]) {
    
	int [] arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 	
	
	// print before reversing array: 1 2 3 4 5 6 7 8 9 10
	printArray(arr, arr.length);	
	reverseArray(arr, arr.length);
	// print after reversing array: 10 9 8 7 6 5 4 3 2 1
	printArray(arr, arr.length);
    }
}

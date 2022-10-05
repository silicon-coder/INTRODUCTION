// Java program to find maximum
// in arr[] of size n
import java.io.*;

class GFG {

	static int largest(int arr[], int n, int i)
	{
		// last index
		// return the element
		if (i == n - 1) {
			return arr[i];
		}

		// find the maximum from rest of the array
		int recMax = largest(arr, n, i + 1);

		// compare with i-th element and return
		return Math.max(recMax, arr[i]);
	}

	// Driver Code
	public static void main(String[] args)
	{
		int arr[] = { 10, 324, 45, 90, 9808 };
		int n = arr.length;
		System.out.println("Largest in given array is "
						+ largest(arr, n, 0));
	}
}


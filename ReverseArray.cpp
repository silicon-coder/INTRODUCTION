#include <iostream>
using namespace std;

void reverseArr(int arr[], int start, int end)
{
	while (start < end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}	

void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
}

int main()
{
	int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter " << i+1 << " element : ";
        cin >> arr[i];
    }
	int n = sizeof(arr) / sizeof(arr[0]);
    cout << "\nInput array is : " << endl;
	printArr(arr, n); // To print original array
	reverseArr(arr, 0, n-1);
    cout << "\n\nReversed array is : " << endl;
	printArr(arr, n); // To print the Reversed array
	return 0;
}

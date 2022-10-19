/*
Submitted by: Sneha Jaiswal
GitHub link: https://github.com/Sneha-jais
PROBLEM STATEMENT:
Given a sorted and rotated array A of N distinct elements which is rotated at some point, and
given an element key. The task is to find the index of the given element key in the array A.
***************Expected Time Complexity: O(log N).******************
Expected Auxiliary Space: O(1)
Input: n=9
       arr[]={5,6,7,8,9,10,1,2,3}
       key=10
Output: 5

*/


#include <bits/stdc++.h>
using namespace std;

int search_ind(int arr[],int low,int high,int key){
    
    if(low<=high){
        
    int mid=(low+high)/2;
    
    if(arr[mid]==key)
    return mid;
    
    //if first half array is sorted
    if(arr[low]<=arr[mid]){
        if(key>=arr[low] && key<=arr[mid])
          return search_ind(arr,low,mid-1,key);
        else
           return search_ind(arr,mid+1,high,key);
    }
    
    //if first is not sorted then second part definetly will be sorted
    else{
        if (key >= arr[mid] && key <= arr[high])
           return search_ind(arr, mid + 1, high, key);
        else
        return search_ind(arr, low, mid - 1, key);
     }
    
    
    }
    return -1;
    
}

int main()
{
int n;
cout<<"Enter number of elements:\n"; 	
cin>>n;
int arr[n];
cout<<"Enter elements:\n";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"Enter element you want to search:\n";	
int key;
cin>>key;

int temp = search_ind(arr, 0, n - 1, key);

if (temp!= -1)
cout << "Index of "<<key<<" is: " << temp<< endl;
else
cout << "Key not found";

	return 0;
}

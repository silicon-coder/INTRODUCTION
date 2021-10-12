#include <bits/stdc++.h>
using namespace std;


bool binary_search(int target, vector<int> arr){
	int start = 0, end= arr.size()-1;

	while(start <= end){
		int mid = start + (end-start)/2;

		if(arr[mid] == target)
			return true;
		else if(target > arr[mid])
			start = mid+1;
		else if(target < arr[mid])
			end = mid-1;
	}

	return false;
}


int main(){

	int n;
	cin>>n;

	vector<int> arr(n);

	for(int i=0; i<n; i++){
		cin>>arr[i];
	}

	int target; 
	cin>>target;

	cout<<"Is "<<target<<"present in the given array?\n";
	cout<<binary_search(target,arr) ? "Yes" : "No";
}

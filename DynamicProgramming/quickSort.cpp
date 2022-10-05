#include<bits/stdc++.h>
using namespace std; 

int partition(vector<int> &vec, int lo, int hi ){
	int pivot = vec[hi]; 
	int i = lo -1; 

	for(int j= lo; j<hi;j++){
		if(vec[j]<pivot){
			i++; 
			swap(vec[j],vec[i]); 
		}
	}
	swap(vec[i+1], vec[hi]);
	return i+1;
}

void quicksort(vector<int> &vec, int lo,int hi){
	if(lo<hi){
		int pi = partition(vec,lo,hi); 
		cout<<vec[pi]<<endl; 
		quicksort(vec,lo,pi-1); 
		quicksort(vec,pi+1,hi); 
	}
}


int main(){
	int n ; 
	cin>>n; 
	vector<int> vec(n); 
	for(int i=0;i<n;i++){
		cin>>vec[i]; 
	}

	quicksort(vec,0,n-1); 
	for(int i:vec){
		cout<<i<<" "; 
	}
	return 0; 
}
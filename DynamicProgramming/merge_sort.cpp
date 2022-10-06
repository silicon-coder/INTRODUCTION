#include<bits/stdc++.h> 
using namespace std;

void mergesort(vector<int> &vec, int lo, int mid, int hi){
	int s1 = mid-lo+1; 
	int s2 = hi-mid; 
	vector<int> lvec,rvec;
	for(int i=0;i<s1;i++){
		lvec.push_back(vec[lo+i]); 
	}
	for(int i = 0;i<s2; i++){
		rvec.push_back(vec[mid+1+i]); 
	}	

	int i =0 ,j= 0, k = lo; 

	while(i<s1 and j<s2){
		if(vec[i]<vec[j]){
			vec[k] = vec[i]; 
			i++; 
		}
		else{
			vec[k] = vec[j++]; 
		}
		k++; 
	}

	while(i<s1){
		vec[k] = vec[i];
		i++; 
		k++;  
	}
	while(j<s2){
		vec[k] = vec[j]; 
		j++; 
		k++; 
	}

}

void divide(vector<int> &vec, int lo, int hi) {
	if(lo<hi){
		int mid = (lo+hi-1)/2; 
		divide(vec,lo,mid);
		divide(vec,mid+1,hi);  
		mergesort(vec,lo,mid,hi); 
	}
}
int main(){

	int n; 
	cin>>n ; 
	vector<int> vec(n);
	for(int i=0 ;i<n;i++){
		cin>>vec[i]; 
	}

	divide(vec,0,n); 

	for(int i:vec){
		cout<<i<<" "; 
	}

	return 0; 
}
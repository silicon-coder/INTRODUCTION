#include<bits/stdc++.h> 
using namespace std;
int maxCoins(vector<int> &piggyBank){
	sort(piggyBank.begin(),piggyBank.end()); 
	int ans = 1*piggyBank[0]*piggyBank[1]; 
	int n = piggyBank.size(); 
	for(int i=1;i<n-1;i++){
		ans+= piggyBank[i-1] *piggyBank[i]*piggyBank[i+1]; 
	}
	ans+= piggyBank[n-2]*piggyBank[n-1]*1; 
	return ans;
}

int main(){
	int n; 
	cin>>n; 
	vector<int> vec(n); 
	for(int i=0;i<n;i++){
		cin>>vec[i];
	}

	cout<<maxCoins(vec)<<endl; 

	return 0; 
}
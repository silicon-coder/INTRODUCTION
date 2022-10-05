#include<bits/stdc++.h>
using namespace std; 
void getAllSubsequence(vector<int> &vec,int idx, vector<int> &v, vector<vector<int>> &vv){
	if(idx>=vec.size()){
		vv.push_back(v); 
		return; 
	}
	v.push_back(vec[idx]); 
	getAllSubsequence(vec,idx+2,v,vv); 
	v.pop_back(); 
	getAllSubsequence(vec,idx+1,v,vv); 
}

int main(){
	int n ; 
	cin>>n; 
	vector<int> vec(n); 
	for(int i =0; i<n;i++){
		cin>>vec[i]; 
	}
	vector<vector<int>> vv; 
	vector<int> v;
	getAllSubsequence(vec,0,v,vv); 
	for(auto i:vv){
		for(int j:i){
			cout<<j<<" "; 
		}
		cout<<endl; 
	}

	return 0; 
}
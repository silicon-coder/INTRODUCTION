#include<bits/stdc++.h>
using namespace std; 

void solve(){
		int n,m; 
	cin>>n>>m; 

	vector<int> vec(n); 
	for(int i=0; i<n; i++){
		cin>>vec[i]; 
	}

	unordered_map<int,int> mp; 
	for(int i=0;i<n;i++){
		mp[vec[i]]++; 
	}
	if(m<= mp.size()){
		cout<<"JANI"<<endl; 
	}
	else{
		cout<<"RAMYA"<<endl; 
	}
}

int main(){

	int t; 
	cin>>t; 
	while(t--){
		solve()
;	}


	return 0; 
}
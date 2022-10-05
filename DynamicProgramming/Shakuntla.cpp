	#include <bits/stdc++.h>
	using namespace std;

	int f(string &s){

		int ans = -1; 
		vector<int> v;
		int m= 0,w= 0;  
		for(int i=0; i<s.size(); i++){
			if(s[i] == 'W'){
				m =-1;
				v.push_back(w++); 
			}
			else if(s[i] == 'M'){
				w= 1; 
				v.push_back((m*(-1)));
				m++; 
			}
		}
		for(int i:v){
			cout<<i<<" ";
		}
		if(ans == 0){
			return -1;
		} 
		return ans; 

	}

	int main(){
		int t; 
		cin>>t; 
		while(t--){
			string s; 
			cin>>s; 
		cout<<f(s)<<endl; 
		}
		return 0; 

	}
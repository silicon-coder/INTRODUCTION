/*
Submitted by: Sneha Jaiswal
GitHub link: https://github.com/Sneha-jais
*/


#include<bits/stdc++.h>
using namespace std;
void TOH(int n, char source, char help, char des){

if(n==1){
cout<<"Move 1 disc from "<<source<<" to "<<des<<endl;
return;
}
TOH(n-1,source,des,help);
cout<<"Move "<<n<<" from "<< source<<" to "<<des<<endl;
TOH(n-1,help,source,des);

}
int main(){
char s,h,d;
int n;
cout<<"Enter number of rings\n";
cin>>n;
TOH(n, 's', 'h', 'd');
    return 0;
}

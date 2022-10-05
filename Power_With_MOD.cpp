#include<bits/stdc++.h>
using namespace std;
#define ll long long

string converting_to_binary(ll b);

ll power (ll a,string s1,ll m)
{
    ll ans=1;
    for(ll i=s1.size()-1;i>=0;i--)
    {
        if(s1[i]=='1')
        ans=((ans%m)*(a%m))%m;
        //cout<<ans<<endl;
        a=((a%m)*(a%m))%m;
    }
    return ans;
    
}

int main ()
{
    ll a,b,m,ans;
    cin>>a>>b>>m;
    string s;
    s=converting_to_binary(b);
    ans=power(a,s,m);
    cout<<ans<<endl;
}




string converting_to_binary(ll b)
{
    ll k=b;
    string s="",s1="";
    while(k>0)
    {
        char p=(k%2)+48;
        s+=p;
        k/=2;
    }
    
    for(ll i=s.size()-1;i>=0;i--)
    s1+=s[i];

    return s1;
}
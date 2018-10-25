#include<bits/stdc++.h>
#define ll          long long int
using namespace std;

ll gcd(ll a , ll b)
{
    if(b==0)
    return a;
    else return gcd(b,a%b) ;
}


int main()
{
   ll a,b,ans;
   cin>>a>>b;
   ans=gcd(a,b);
   cout<<ans;
   return 0;
}

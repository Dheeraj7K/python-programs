#include<iostream>
#define ll unsigned long long
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
#endif

ll n, fact=0;
cin>>n;
fact=n;
for(ll i=n-1; i>1;i--)
{
    fact=fact*i;
}
cout<<fact;
}

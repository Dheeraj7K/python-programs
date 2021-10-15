#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

void pairSum( int a[], int n, int k)
{
   
    
    int st=0;
    int en=n-1;
    
    while(st!=en)
    {
        if(a[st]+a[en]==k)
        {
            cout<<st+1<<" "<<en+1;
            exit(0);
        }
        if(a[st]+a[en]>k)
        {
            en--;
        }
        if(a[st]+a[en]<k)
        {
            st++;
        }
    
    }
    cout<<-1;
}
int main()
{

int n, k;
cin>>n>>k;
int a[n];
for(int i=0; i<n; i++)
{
    cin>>a[i];
}
//FIRST SORT THE ARRAY HERE
pairSum(a, n, k);


}

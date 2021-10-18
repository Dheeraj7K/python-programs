#include<bits/stdc++.h>
using namespace std;

void swap(int a[], int i, int j){
    int temp =a[i];
     a[i] =a[j];
     a[j]=temp;
}

void SelectionSort(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[i])
            {
                swap(arr, i, j);
            }
        }
    }
    for(int k=0; k<n; k++)
    {
        cout<<arr[k]<<" ";
    }
}
int main(){
#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
#endif

int n;
cin>>n;
int arr[n];
for(int i=0; i<n; i++)
{
    cin>>arr[i];
}
SelectionSort(arr, n);
}

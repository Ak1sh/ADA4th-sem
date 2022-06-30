#include<bits/stdc++.h>
#include <iostream>
#include<time.h>

using namespace std;
void input(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}
void insertion_sort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int j=i-1;
        int curr=arr[i];
        while(curr<arr[j] && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=curr;
    }
}
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    input(arr,n);
    insertion_sort(arr,n);
    print(arr,n);

    return 0;
}

//Tc : O(nlogn)
//Sc :O(1)
#include <iostream>
#include<time.h>
#include<bits/stdc++.h>
using namespace std;
void heapify(int arr[],int n,int i)
{
    int largest =i;
    int left=i*2+1;
    int right=i*2+2;
    if(left<n && arr[left]> arr[largest]) largest =left;
    if(right<n && arr[right]> arr[largest]) largest=right;
    if(largest!=i)
    {
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
}
void heapsort(int arr[],int n)
{
    for(int i=n/2-1;i>=0;i--)
    heapify(arr,n,i);
    
    for(int i=n-1;i>0;i--)
    {
        swap(arr[i],arr[0]);
        heapify(arr,i,0);
    }
}
void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
int main()
{

   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   cin>>arr[i];
    clock_t timeTaken = clock();
    heapsort(arr,n);
   clock_t end = clock();
    cout<<"Heap sort: "<<(double)(end-timeTaken)/CLOCKS_PER_SEC<<"clocks\n";
  
   printarray(arr,n);
    return 0;
}

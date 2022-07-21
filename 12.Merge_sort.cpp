
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int left,int mid,int right)
{
    int n1=mid-left+1;
    int n2=right-mid+1;
    int a[n1];
    int b[n2];
    for(int i=0;i<n1;i++)
    a[i]=arr[i];
    for(int i=mid+1;i<n2;i++)
    b[i]=arr[i];
    int it1=0,it2=0,k=0;
    while(it1<n1&& it2<n2)
    {
        if(a[it1]<=b[it2]) arr[k++]=a[it1++];
        else arr[k++]=b[it2++];
    }
    while(it1<n1)
    arr[k++]=a[it1];
    while(it2<n2)
    arr[k++]=b[it2];
}
void mergesort(int arr[],int left,int right)
{
   
    if(left<right)
    {
           int mid=(left+right)/2;
    mergesort(arr,left,mid);
    mergesort(arr,mid+1,right);
    merge(arr,left,mid,right); 
    }
    

}
int main()
{
  
  int arr[]={5,2,9,7,3}; 
   mergesort(arr,0,4);

   for(int i=0;i<5;i++)
   cout<<arr[i]<<" ";
    return 0;
}

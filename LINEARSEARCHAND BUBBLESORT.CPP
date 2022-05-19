//Linear search and bubble sort
#include<bits/stdc++.h>
using namespace std;
void insert(int *arr,int num)
{
   cout<<"Enter the numbers\n";
   for(int i=0;i<num;i++)
   {
       cin>>arr[i];
   }
}
void display(int *arr,int num)
{
    for(int i=0;i<num;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void linearsearch(int *arr,int num)
{
    int key,flag=0;
    cout<<"Enter the element to be searched";
    cin>>key;
    for(int i=0;i<num;i++)
    {
        int loc=i+1;
        if(key==arr[i])
        {
            cout<<"Element found in the location "<<loc<<endl;
            flag=-1;
            break;
        }
        else
        {
            flag=0;
        }
    }
    if(flag==0)
    {
        cout<<"Not found\n";
    }
}
void bubblesort(int *arr,int num)
{
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<num-i-1;j++)
        {
            int temp;
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main()
{
    int n,choice;
    cout<<"Enter the size of the array :";
    cin>>n;
    int num[n];
    while(1)
    {
        cout<<"\n1.Insert\n2.Display\n3.Linear search\n4.Bubble sort\n5.Exit\n";
        cin>>choice;
        switch(choice)
        {
            case 1:
            insert(num,n);
            break;
            case 2:
            display(num,n);
            break;
            case 3:
            linearsearch(num,n);
            case 4:
            bubblesort(num,n);
            break;
            case 5:
            exit(0);
            break;
            default:
            cout<<"Not found";
            break;
        }
    }
    return 0;
}

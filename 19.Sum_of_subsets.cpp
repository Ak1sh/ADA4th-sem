#include<bits/stdc++.h>
using namespace std;
void powerset(int arr[], vector<int> &ans, int index ,int n, int sum)
{
    if(index==n)
    {
        if(sum==0)
        {
            for(auto it:ans)
            cout<<it<<" ";
            cout<<endl;
        }
        
        return;
    }
    if(arr[index]<=sum){
    ans.push_back(arr[index]);
    powerset(arr,ans,index+1,n,sum-arr[index]);
    ans.pop_back();
    }
    
    powerset(arr,ans,index+1,n,sum);
}
int main()
{
   int arr[]={1,2,1};
   vector<int>ans;
   powerset(arr,ans,0,3,2);
    return 0;
}

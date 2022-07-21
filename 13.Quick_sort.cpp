#include<bits/stdc++.h>
#include <iostream>

using namespace std;

void quicksort(vector<int> &a, int left,int right)
{
    if(left>=right) return;
    int pt1=left;
    int pt2 =right;
    while(pt1<pt2)
    {
        while(a[pt1]<=a[right] && pt1<pt2)
        pt1++;
        while(a[pt2]>=a[right]&& pt1<pt2)
        pt2--;
        swap(a[pt1],a[pt2]);
    }
    swap(a[pt1],a[right]);
    quicksort(a,left,pt1-1);
    quicksort(a,pt1+1,right);
}

int main()
{
   vector<int> a={5,9,3,7,4};
   quicksort(a,0,4);
   for(auto it: a)
   cout<<it<<" ";

    return 0;
}

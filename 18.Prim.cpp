#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int n=5,m=6;
	vector<pair<int,int> > adj[n]; 


	adj[0].push_back({1,2});
	adj[0].push_back({3,6});
	adj[1].push_back({0,2});
	adj[1].push_back({2,3});
	adj[1].push_back({3,8});
	adj[1].push_back({4,5});
	adj[2].push_back({1,3});
	adj[2].push_back({4,7});
	adj[3].push_back({0,6});
	adj[3].push_back({1,8});
	adj[4].push_back({1,5});
	adj[4].push_back({2,7});
	
    int parent[n];
    int key[n];
    bool mst[n];
    
    for(int i=0;i<n;i++)
    {
        key[i]=INT_MAX;
        mst[i]=false;
        parent[i]=-1;
    }
    key[0]=0;
    for(int j=0;j<n-1;j++)
    {
        int mini=INT_MAX,u;
        for(int i=0;i<n;i++)
        if(mst[i]==false && key[i]<mini) mini=key[i], u=i;
        
        mst[u]=true;
        
        for(auto it:adj[u])
        {
            int v=it.first;
            int weight=it.second;
            if(mst[v]==false && key[v]>weight )  key[v]=weight, parent[v]=u;
        }
 
    }
    for(int i=1;i<n;i++)
    {
        cout<<parent[i]<<"-"<<i<<endl;
    }
   // int exclude;
   // cin>>exclude;
    // for(int i=1;i<n;i++)
   //{
    //    if(parent[i]!=exclude && i!=exclude)
    //    cout<<parent[i]<<"-"<<i<<endl;
   // }
    return 0;
}

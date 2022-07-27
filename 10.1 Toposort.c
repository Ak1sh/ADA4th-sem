#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define v 5
int s[6];
int top=-1;
bool dfs(int adj[][v],int start,int n,int visited[],int visal[]){
    visal[start]=1;
    visited[start]  = 1;
    for(int i=0;i<v;i++){
        if(adj[start][i] == 1 && visited[i] == 0)
        {
            if(dfs(adj,i,n,visited,visal)) return false;
            
        }
        else if(visal[i]==visited[i]) return true;
        
    }
    visal[start]=0;
    s[++top]=start;
    return false;
}

int main(){

   
    int adj[v][v],start,flag=0,a;
    printf("Enter adjacency matrix : \n");
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            scanf("%d",&adj[i][j]);
        }
    }
    int visal[v];
    int visited[v];
    for(int i=0;i<v;i++){
        visited[i] = 0;
        visal[i]=0;
    }
    for(int i=0;i<v;i++)
    {
        if(!visited[i])
        {
            a=dfs(adj,i,v,visited,visal);
        }
    }

    if(!a){
        while(top!=-1)
        {
            printf("%d ",s[top--]);
        }
       
    }
    else{
        printf("Cycle detected");
    }
    return 0;
}

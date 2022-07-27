#include<stdio.h>
#define v 5
void bfs(int adj[][v],int start,int n,int visited[]){
    int queue[n];
    int front = -1;
    int last = -1;
    queue[++last] = start;
    visited[start] = 1;
    while(front != last){
        start = queue[++front];
        printf("%d ",start);
        for(int i=0;i<n;i++){
            if(adj[start][i]==1 && visited[i] == 0){
                queue[++last] = i;
                visited[i] = 1;
            }
        }
    }
}

int main(){


    int adj[v][v],start;
    printf("Enter adjacency matrix : \n");
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            scanf("%d",&adj[i][j]);
        }
    }
    printf("Enter start state : ");
    scanf("%d",&start);
    int visited[v];
    for(int i=0;i<v;i++){
        visited[i] = 0;
    }
    bfs(adj,start,v,visited);
    return 0;
}



#include<bits/stdc++.h>
using namespace std;

	void warshall(int A[10][10],int n) {
	    int i,j,k;
	for ( k=0;k<n;k++)
	 for ( i=0;i<n;i++)
	  for ( j=0;j<n;j++)
	  {
	      int a=A[i][j];
	      int b=A[i][k]&&A[k][j];
	      A[i][j]=max(a,b);
	  }
	   
	}

   int main() {
	int p[10][10];
	int n;
	int i,j;
	
	    cout<<"\n Enter the Number of Vertices : ";
	    cin>>n;
	    cout<<"\n Enter the adjacency matrix:\n";
	for( i=0;i<n;i++)
	    {
	        for( j=0;j<n;j++)
	            cin>>p[i][j];
	}
	warshall(p,n);
	printf("\n Transitive closure: \n");
	for ( i=0;i<n;i++) {
	for ( j=0;j<n;j++)
	  cout<<p[i][j];
	cout<<"\n";
	
	}
	for(int i=0;i<n;i++)
	{
	    int flag=0;
	    if(p[i][i]==1){
	        printf("Cycle is there");
	        flag=0;
	        break;
	    }
	   
	}
	}

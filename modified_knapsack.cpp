#include <bits/stdc++.h>

using namespace std;

void knapSack(int W, int wt[], int val[], int n)
{
   int i, w;
   int K[W+1][n+1];
   for (w = 0; w <= W; w++)
   {
    for(i=0;i<=n;i++){
        if(i==0)
            K[w][i]=0;

        if(w<wt[i-1] && i!=0)
            K[w][i]=K[w][i-1];

        if(w>=wt[i-1] && i!=0)
            K[w][i]=max(K[w][i-1],K[w-wt[i-1]][i-1]+val[i-1]);

       }
   }
   cout << "\n" << "Maximum value obtained is : " << K[W][n] << "\n";
   i=n;
   int count=0;
  int j=W;
   while(i,j>0){
    if(K[j][i]!=K[j][i-1]){
        count++;
        i=i-1;
        j=j-wt[i-1];
    }
    else
        i=i-1;
   }
   cout<<count<<endl;
}
int main() {

  int wt[] = {1,2,4,5};
 int val[] = {5,2,3,6};
  int W=5;
  
  int n = 4;
                                 
  knapSack(W,wt,val,n);
}

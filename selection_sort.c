
#include<time.h>
#include<stdio.h>

void swap(int *ptr1,int *ptr2){
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
  
    for (i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;
  
 
        swap(&arr[min_idx], &arr[i]);
    }
}


void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){
    int n = 100;
    clock_t start,end;
    while(n <= 10000){
        int arr[n];
        for(int i=0;i<n;i++){
            arr[i] = n-i;
        }
        start = clock();
        selectionSort(arr,n);
        end = clock();
        //printArray(arr,n);
        n= n+100;
        printf("%f \n",(double)(end-start)/CLOCKS_PER_SEC);
    }
}

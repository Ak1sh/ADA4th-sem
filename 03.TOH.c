#include <stdio.h>
int towerofhanoi(int n,char from,char to, char aux)
{
    if(n==0)
    return;
    towerofhanoi(n-1,from,aux,to);
    printf("Move from disk no %d from rod %c to rod %c \n",n,from,to);
    towerofhanoi(n-1,aux,to,from);
}
int main()
{   
    int n=2;
    towerofhanoi(n,'a','c','b');

    return 0;
}

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    int fibb[n];
    fibb[0]=0;
    fibb[1]=1;
    int i;
    for(i=2;i<n;i++)
    {fibb[i]= fibb[i-1]+fibb[i-2];}
    printf("%d",fibb[n]);
    return 0;




}
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a[10],b[10],d,i,j;
    printf("enter number of days\n");
    scanf("%d",&d);
    printf("enter input\n");
    for(i=1;i<9;i++)
        scanf("%d",&a[i]);
    a[0]=0;
    a[9]=0;
    for(i=1;i<=d;i++)
    {
        for(j=1;j<9;j++)
        {
            if(a[j-1]==a[j+1])
                b[j]=0;
            else
                b[j]=1;
        }
        for(j=1;j<9;j++)
            a[j]=b[j];
    }
    for(i=1;i<9;i++)
        printf("%d",a[i]);
}
#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[10],num,i;
    printf("enter the number");
    scanf("%d",&num);

    for(i=0;num>0;i++)
    {
        arr[i]=num%2;
        num=num/2;
    }
    
    for(i=i-1;i>=0;i--)
    {
       printf("%d",arr[i]);
    }
    return 0;
}

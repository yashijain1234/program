#include<stdio.h>
int main()
{
    int num , d;
    int sum=0;
    printf("enter a number of your choice==>");
    scanf("%d",&num);
    int temp=num;
    while(temp!=0)
    {
        d=temp%10;
        sum+=d*d*d;
        temp/=10;
    }
    if(sum==num)
    {
        printf("number is armstrong=%d", sum);
    }
    else
    {
        printf("number is not armstrong=%d", sum); 
    }  

  // printf("no is armstrong=%d" , sum);
 return 0;
}
    

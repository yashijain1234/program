#include<stdio.h>
int main()
{
    int i , n, t1=0, t2=1 , swap=0;
    printf("enter the term to get the series\n");
    scanf("%d" , &n);
    printf("desired series==>\n");
    for(i=0;i<=n;i++)
    {
      printf("%d\t" , t1);
         swap=t1+t2;
         t1=t2;
         t2=swap;

    }
    return 0;
}
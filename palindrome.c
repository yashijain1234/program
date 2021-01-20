#include<stdio.h>
int main()
{
    int n;
    int rev=0 , d;
    printf("enter a number==>\n");
    scanf("%d", &n);
    int temp=n;
    while(temp!=0)
    {
     d=temp%10;
     rev=rev*10+d;
     temp/=10;
    }

    if(rev==n)
    {
        printf("number is palindrome=%d", rev);
    }
    else
    {
        printf("number is not palindrome=%d", rev); 
    }  
    
   // printf("reverse of a number=%d", rev);
     return 0;
}
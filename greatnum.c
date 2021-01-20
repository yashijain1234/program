#include<stdio.h>
int gnum(int , int );
int main()
{
    
    int num1 ,num2;
   // int result;
    printf("enter first number==>");
    scanf("%d" , &num1);
    printf("enter second number===>");
    scanf("%d" , &num2);
    int result= gnum(int , int );
    return 0;

}
int gnum(int num1 , int num2)
{
    if(num1>num2)
    {
        printf("greaest number is=%d" , num1);
    }
    else
    {
        printf("greatest number is=%d", num2);
    }
    return result;
    
    
}
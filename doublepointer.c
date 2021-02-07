#include<stdio.h>
int main()
{
    int num;
    int *p1=&num;
    int **p2=&p1;
    printf("enter the value of a variable==>");
    scanf("%d" , &num);
    printf("\nvalue of a variable==%d" , num);
     printf("\n address of a variable==>%d" , p1);
    printf("\n value of a single pointer  variable==>%d" , *p1);
    printf("\n value of a single pointer variable==>%d" , *p2);
    printf("\n address of a double--pointer variable==>%d" , &p2);
     printf("\nvalue of address stored in double-pointer variable==>%d" , **p2); 
     printf("\n%p" , *(*(&p2)));     //address of single pointer variable
     printf("\n%d" , *(*(&p2)));      // addres is same but %d showing in decimal format and %p in hexadecimal of single pointer variable
     printf("\n%p" , **(&p2));      //  pta ha single pointer ka usig hexadecimal by %p
     printf("\n%p" , *(*&p2));       //  pta ha single pointer ka usig hexadecimal by %p
     printf("\n%d" , *(*&p2));        //  pta ha single pointer ka usig hexadecimal by %d
     printf("\n%p" , **&p2);     //address of single pointer variable



     


     return 0;

}
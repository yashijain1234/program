#include<stdio.h>
int main()
{
    int i , j, temp=0;
    int n;
    int arr[20];
    printf("enter the size of an array\n");
    scanf("%d" , &n);
    printf("enter the elemnets of an array\n");
    for(i=0;i<n;i++)
    {
        scanf( "%d" , &arr[i]);
    }
    printf("array before swaping\n");
     for(i=0;i<n;i++)
    {
        printf( "%d\t" , arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i] > arr[j] )
            {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
             }
        }
    }
     printf("\narray after swaping");
     printf("\n");
      for(i=0;i<n;i++)
    {
        printf( "%d\t" , arr[i]);
    }


return 0;
}
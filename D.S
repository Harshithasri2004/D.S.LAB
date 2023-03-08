#include<stdio.h>
int main()
{
    int arr[20],size,i,j,temp;
    printf("Enter the size of array");
    scanf("%d",&size);
    printf("Enter the elements of the array,,,,,");
    for(i=0;i<size;i++)
    {
        printf("\n Enter the %d element",i+1);
        scanf("%d", &arr[i]);
    }
    if(i=0,i<size)
    printf("/n sorted array is,,,,,,");
    for(i=0;i<size;i++)
    printf("%d",arr[i]);
    return 0;
}

#include<stdio.h>
void main()
{
    int i,n, arr[10], key, j;
    printf("Enter the size of array");
    scanf("%d",&n);
    
    printf("Enter the array-----");
    for(i=0;i<n;i++)
    {
        printf("\n Enter the %d element=",i+1);
        scanf("%d",& arr[i]);
    }
    
    // Start for the code of Insertion Sort
    for(i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        while(key < arr[j] && j>=0)
        {
            arr[j+1]= arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
     // End of he code for insertion sort
    
    printf("Sorted array is ---------");
    for (i=0;i<n;i++)
    printf("\t%d",arr[i]);
}
\*
output
Enter the size of array5
Enter the array-----
 Enter the 1 element=6
 Enter the 2 element=2
 Enter the 3 element=4
 Enter the 4 element=8
 Enter the 5 element=3
 24333Sorted array is ---------	2	3	4	6	8 
 */

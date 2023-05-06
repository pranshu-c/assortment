#include <stdio.h>

main() 
{
    int arr[5] = {1, 2, 3, 4, 5},i,j,num_positions,last_element;
    
    printf("Original Array=");
    for(i = 0; i < 5; i++) 
	{
        printf("%d ",arr[i]);
    }
    num_positions=2;
    
    for(i=0;i<num_positions;i++) 
	{
     last_element=arr[4];
        for(j=3;j>=0;j--)
		{
            arr[j+1]=arr[j];
        }
    
    arr[0]=last_element;
    }

    printf("\nRotated Array: ");
    for(i=0;i<5;i++)
	{
        printf("%d ",arr[i]);
    }
    
}


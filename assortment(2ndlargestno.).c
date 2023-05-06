#include<stdio.h>

main()
{
	int n,i,max=0,max2=0;
	
	printf("enter the size of array=");
	scanf("%d",&n);
	
	int arr[n];
	
	printf("enetr the elements of array=");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max2=max;
			max=arr[i];
		}
		if(arr[i]!=max && arr[i]>max2)
		{
			max2=arr[i];
		}
		
	}
	printf("2nd largest no.=%d",max2);
}

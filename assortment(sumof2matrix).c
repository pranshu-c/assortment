#include<stdio.h>

main()
{
	int a[100][100],b[100][100],sum[100][100],i,j,r,c;
	
	printf("enter the no. of rows=");
	scanf("%d",&r);
	printf("enter the no. of columns=");
	scanf("%d",&c);
	
	
   printf("enter the 1st matrix=\n");
   for(i=0;i<r;i++)
   {
   	for(j=0;j<c;j++)
   	{
   	   scanf("%d",&a[i][j]);
    }
   }
   
   printf("enter the 2nd matrix=\n");
   for(i=0;i<r;i++)
   {
   	for(j=0;j<c;j++)
   	{
   	   scanf("%d",&b[i][j]);
    }
   }
   
   printf("the 1st matrix=\n");
   for(i=0;i<r;i++)
   {
   	for(j=0;j<c;j++)
   	{
   	   printf("%d ",a[i][j]);
    }
    printf("\n");
   }
   
   printf("the 2nd matrix=\n");
   for(i=0;i<r;i++)
   {
   	for(j=0;j<c;j++)
   	{
   	   printf("%d ",b[i][j]);
    }
    printf("\n");
   }
   
   for(i=0;i<r;i++)
   {
   	for(j=0;j<c;j++)
   	{
   	  sum[i][j]=a[i][j]+b[i][j];
    }
    
   }
   
   printf("the sum of both the matrix=\n");
   for(i=0;i<r;i++)
   {
   	for(j=0;j<c;j++)
   	{
   	   printf("%d ",sum[i][j]);
    }
    printf("\n");
    
   }
   
   
}


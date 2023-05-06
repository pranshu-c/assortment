#include <stdio.h>

main()
 {
    int arr[100][100],r,c,i,j,sum=0;

    printf("Enter the number of rows=");
    scanf("%d",&r);
    printf("Enter the number of columns=");
    scanf("%d",&c);
    printf("Enter the matrix elements:\n");
    
    for(i=0;i<r;i++)
	 {
        for(j=0;j<c;j++) 
		{
            printf("a[%d][%d]=",i,j);
			scanf("%d", &arr[i][j]);
        }
    }

    for(i=0;i<r;i++) 
	{
      for(j=0;j<c;j++) 
		{
          if(i==j)
		   { 
              sum=sum+arr[i][j];
           }
        }
    }
     printf("The sum of diagonal elements of the matrix is= %d\n", sum);
}



#include<stdio.h>//program to find maximum and minimum value from a n*n matrix
int main()
{

  int i,j,max,min,n;
  printf("enter the number which should be the order of the matrix");
  scanf("%d",&n);
  int arr[n][n];
  printf("enter the elements of the matrix");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      scanf("%d",&arr[i][j]);
    }
  }
  printf("3*3 matrix is: ");
  max=min=arr[0][0];
   for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("%d \t",arr[i][j]);
    }
    printf("\n");
  }
   for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if(arr[i][j]>=max)
      {
        max=arr[i][j];
      }
      else if(arr[i][j]<=min)
      {
        min=arr[i][j];
      }
    }
  }

  printf("maximum value in the given array elements is : %d \n",max);
  printf("minimum value in the given array elements is : %d",min);
  return 0;
}




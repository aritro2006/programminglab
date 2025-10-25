#include <stdio.h>
#define row 3
#define col 3
int main()
{
  int a[row][col],b[row][col],sum[row][col],i,j,d;
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
printf("Enter the values into pockets a[%d][%d]",i,j);
  scanf("%d",&a[i][j]);
}
}
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
printf("Enter the value into pockets b[%d][%d]",i,j);
scanf("%d",&b[i][j]);
}
}
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
printf(" %d ",a[i][j]);
}
printf("\n");
  }
  printf("\n");
  for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
printf(" %d ",b[i][j]);
}
printf("\n");
  }
  printf("The sum is:");
  for(i=0;i<row;i++)
  {
  	for(j=0;j<col;j++)
  	{
  		sum[i][j]=a[i][j]+b[i][j];
	  }
  }
   printf("\n");
  for(i=0;i<row;i++)
  {
  	for(j=0;j<col;j++)
  	{
  		printf(" %d ",sum[i][j]);
	  }
	  printf("\n");
  }
  for(i=0;i<row;i++)
  {
  	d+=sum[i][i];
  }
  printf("The sum of the diagonal elements of the array is:%d",d);
  return 0;
}

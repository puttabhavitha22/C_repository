#include<stdio.h>
int main()
{
	int row,col;
	printf("Enter the row and col:");
	scanf("%d %d",&row,&col);
	int arr[row][col];
	printf("Enter the elements:");
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	int top=0,left=0,right=col-1,bottom=row-1;
	while(top<=bottom && left<=right)
	{
		for(int i=left;i<=right;i++)
		{
			printf("%d ",arr[top][i]);
		}
		top++;
		for(int i=top;i<=bottom;i++)
		{
			printf("%d ",arr[i][right]);
		}
		right--;
		for(int i=right;i>=left;i--)
		{
			printf("%d ",arr[bottom][i]);
		}
		bottom--;
		for(int i=bottom;i>=top;i--)
		{
			printf("%d ",arr[i][left]);
		}
		left++;
	}
	printf("\n");
	return 0;
}

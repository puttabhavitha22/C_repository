#include<stdio.h>
void print(int begin,int end)
{
	if(begin>end)
	{
		return ;
	}
	printf("%d ",begin);
	print(++begin,end);
}


int main()
{
	print(1,100);
	printf("\n");
	return 0;
}



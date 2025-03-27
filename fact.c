/*#include<stdio.h>
int main()
{
	int num,ret=1;
	printf("Enter the number:");
	scanf("%d",&num);
	for(int i=1;i<=num;i++)
	{
		ret=ret*i;
	}
	printf("factorial of %d is %d\n",num,ret);
	return 0;
}*/
#include<stdio.h>
int fact(int num)
{
	if(num==1)
	{
		return 1 ;
	}
	else
	{
	return num * fact(num-1);
	}
}
int main()
{
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	int ret=fact(num);
	printf("factorial of %d is %d\n",num,ret);
	return 0;
}

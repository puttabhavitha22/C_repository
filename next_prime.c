#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
        int flag=0;
	for(int i=num;i<100;i++)
	{
		flag=0;
		for(int j=2;j<i;j++)
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			printf("%d\n",i);
			break;
		}
	}
	return 0;
}


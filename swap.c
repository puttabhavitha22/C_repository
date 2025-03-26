#include<stdio.h>
/*int main()
{
	int a,b;
	printf("Enter the a and b:");
	scanf("%d %d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After Swapping : a=%d b=%d",a,b);
	return 0;
}*/
int main()
{
	int a,b;
	printf("Enter the number:");
	scanf("%d %d",&a,&b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("After the swap a=%d b=%d\n",a,b);
	return 0;
}

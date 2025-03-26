 #include<stdio.h>
#include<string.h>
int main()
{
	char str[20],ret[20];
	printf("Enter the string:");
	scanf("%[^\n]",str);
	int len=strlen(str)-1;
	int i=0;
	while(len>=0)
	{
		ret[i]=str[len];
		len--;
		i++;
	}
	ret[i]='\0';
	printf("Reversed string=%s\n",ret);
	return 0;
}
#include<stdio.h>
#include<string.h>
/*int rev(char *str,int len)
{
	if(len<0)
	{
		return 0;
	}
	printf("%c",str[len]);
	rev(str,--len);
}
int main()
{
	char str[20];
	printf("Enter the string:");
	scanf("%s[^\n]",str);
	int len=strlen(str)-1;
	rev(str,len);
	 printf("\n");
	return 0;
}*/


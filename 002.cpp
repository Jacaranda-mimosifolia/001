#include<stdio.h>
int main()
{
	int a;
	printf("a=");
	scanf("%d",&a);
	if (a>0&&a<10)//与：&&等于python中的 and 
	{
		printf("1:a=%d",a);
	}
	else if (a>20||a>10)//或：||等于python中的 or 
	{
		printf("2:a=%d",a);
	}
	else
	{
		printf("请重新输入"); //非：!与python中一致 
	}
}

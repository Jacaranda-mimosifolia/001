#include<stdio.h>
int main()
{
	int a;
	printf("a=");
	scanf("%d",&a);
	if (a>0&&a<10)//�룺&&����python�е� and 
	{
		printf("1:a=%d",a);
	}
	else if (a>20||a>10)//��||����python�е� or 
	{
		printf("2:a=%d",a);
	}
	else
	{
		printf("����������"); //�ǣ�!��python��һ�� 
	}
}

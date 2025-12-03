#include<stdio.h>
int main()
{
	int a;
	printf("enter a value");
	scanf("%d",&a);
	int b;
	printf("enter b value");
	scanf("%d",&b);
	int c;
	printf("enter c value");
	scanf("%d",&c);
	int average;
	average=a+b+c/3;
	printf("the average of a,b,c is %d",average);
	scanf("%d,%d,%d",&a,&b,&c);
	return 0;
	
}

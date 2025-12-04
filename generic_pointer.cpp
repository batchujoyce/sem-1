#include<stdio.h>
int main()
{	void *p;
    int a=10;
	float b=4.5; 
	
	p=&a;
	printf("%d\n",*(int*)p);
	
	p=&b;
	printf("%5f",*(float*)p);
	return 0;
}

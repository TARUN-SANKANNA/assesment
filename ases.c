#include<stdio.h>
int sum(int a, int b)
{
	sum=a+b;
	return 1;
}
int pro(int a, int b)
{
	return a*b;
}
int main()
{
	int x,y;
	printf("enter two numbers");
	scanf("%d %d",&x,&y);
	sum(a,b);
	pro(a,b);
	printf("sum is %d",sum);
	printf("product is %d",pro);
        return 0;

}

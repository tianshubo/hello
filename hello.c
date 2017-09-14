#include <stdio.h>
int jin(int n, int x, int a[])
{
	int s=0,i;
	for(i=n; i>0; i--)
	   s=(s+a[i])*x;
	s+=a[0];
	return s;
}
int main()
{
	int a[100]={0},x,n;
	scanf("%d%d",&n,&x);
	for(int i = 0; i <= n; i++)
	   scanf("%d", &a[i]);
	printf("%d\n", jin(n, x, a));
	return 0;
}

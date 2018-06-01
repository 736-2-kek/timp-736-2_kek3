#include<stdio.h>
#include<math.h>
int main()
{
	int n, x, i, k;
	k=0;
	scanf("%d",&n);
	for(i=1; i<=n; i++ )
		{
		scanf("%d",&x);
		k=k+(((i+1)%2)*x*x*x);
		}	
	printf("%d\n",k);
	return 0;
}



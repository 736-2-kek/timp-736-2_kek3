#include<stdio.h>
int main()
{
	int n, x, i, k;
	k=0;
	scanf("%d",&n);
	for(i=0; i<n; i++ )
		{
		scanf("%d",&x);
		if (x>=0)
		k++;
		}
	printf("%d\n",k);
	return 0;
}


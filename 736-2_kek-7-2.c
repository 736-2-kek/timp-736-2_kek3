#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,*mass,k,l,st,f,j;
    scanf("%d", &n);
    mass = (int*) malloc(n* sizeof(int));
    for(i=0; i<n; i++)
    {
    scanf("%d", &k);
    mass[i]=k;
    }
    for(st=n/2;st>0;st=st/2)
    {
        for(i=st;i<n;i++)
        {
            f = mass[i];
        for(j=i;j>=st;j-=st)
        {
            if (f < mass[j-st])
				{
				mass[j] = mass[j-st];
				}
			else break;	
        }
    mass[j] = f;   
        }
	}
	for(i=0;i<n;i++)
    {
    printf("%d ", mass[i]);
    }
    free(mass);
    return 0;
    
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,*mass,k,l;
    scanf("%d", &n);
    mass = (int*) malloc(n* sizeof(int));
    for(i=0; i<n; i++)
    {
    scanf("%d", &k);
    mass[i]=k;
    }
    double f = 1.2473309;
    int st = n/f;
    while (st >= 1)
	{
        for(i=0;i+st<n;i++)
        {
            if (mass[i] > mass[i + st])
				{
				l=mass[i];
				mass[i] = mass[i+st];
				mass[i+st] = l;
				}
        }
	st = st/f;
	}
	for(i=0;i<n;i++)
    {
    printf("%d ", mass[i]);
    }
    free(mass);
    return 0;
    
}

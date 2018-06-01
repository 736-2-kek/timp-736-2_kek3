#include <stdio.h>
#include <stdlib.h>
void pros(int *mass, int root, int last)
{
  int max; 
  int done = 0; 
  while ((root * 2 <= last) && (!done)) 
  {
    if (root * 2 == last)     
      max = root * 2;  
    else if (mass[root * 2] > mass[root * 2 + 1])
      max = root * 2;
    else
      max = root * 2 + 1;
    if (mass[root] < mass[max]) 
    {
      int t = mass[root]; 
      mass[root] = mass[max];
      mass[max] = t;
      root = max;
    }
    else 
      done = 1; 
  }
}
void sort(int *mass, int n) 
{
 for (int i = (n / 2) - 1; i >= 0; i--) 
 pros(mass, i, n); 
 for (int i = n - 1; i >= 1; i--) 
 {
 int t = mass[0]; 
 mass[0] = mass[i]; 
 mass[i] = t; 
 pros(mass, 0, i - 1); 
 }
}
int main()
{
    int n,i,k,*mass;
    scanf("%d", &n);
    mass = (int*) malloc(n* sizeof(int));
    for(i=0; i<n; i++)
    {
        scanf("%d", &k);
        mass[i]=k;
    }
    sort(mass, n);
    for(i=0; i<n; i++)
    {
        printf("%d ", mass[i]);
    }
    printf("\n");	
    free(mass); 
    return 0;
}


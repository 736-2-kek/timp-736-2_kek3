#include <stdio.h>
#include <stdlib.h>
void sort(int *mass, int left, int right)
{
  int a;
  int l = left; 
  int r = right; 
  a = mass[left];
  while (left < right) 
  {
    while ((mass[right] >= a) && (left < right))
      right--; 
    if (left != right) 
    {
      mass[left] = mass[right]; 
      left++;  
    }
    while ((mass[left] <= a) && (left < right))
      left++; 
    if (left != right) 
    {
      mass[right] = mass[left]; 
      right--;
    }
  }
  mass[left] = a; 
  a = left;
  left = l;
  right = r;
  if (left < a) 
    sort(mass, left, a - 1);
  if (right > a)
    sort(mass, a + 1, right);
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
    sort(mass, 0, n-1);
    for(i=0; i<n; i++)
    {
    printf("%d ", mass[i]);
    }
    printf("\n");	
    free(mass); 
    return 0;
}

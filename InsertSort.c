#include <stdio.h>
void printarray(int ar[], int n)
{
	int i;
	for (i = 0;i < n; i++)
		printf("%d ",ar[i]);
	printf("\n");	
}
void insertsort(int ar[], int len)
{
	int i;
	for (i=1; i< len;i++)
	{
		int key = ar[i];
		int k = i-1;
		while (ar[k] > key)
		{
			ar[k+1] = ar[k];
			k--;
			if ( k == -1)
				break;
		}
		ar[k+1] = key;
	}
 } 
int main()
{
	int ar[] = {12,11,13,5,6};
	int n = sizeof(ar) / sizeof(ar[0]);
	insertsort(ar, n);
	printarray(ar, n);
	return 0;
}

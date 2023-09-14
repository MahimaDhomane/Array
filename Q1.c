#include <stdio.h>

int main(void) {
	int i,T;
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
	    int n;
	    scanf("%d",&n);
	    int A[n],j;
	    for(j=0;j<n;j++)
	    {
	        scanf("%d",&A[j]);
	    }
	    int c=0;
	    for(j=0;j<n;j++)
	    {
	        if(A[j]%2!=0)
	        {
	            c++;
	        }
	    }
	    if(c%2==0)
	    {
	        printf("YES\n");
	    }
	    else
	    {
	        printf("NO\n");
	    }
	}
	return 0;
}


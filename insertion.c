#include <stdio.h>
//searching for the right element
int main()
{
	int t;
//	scanf("%d",&t);
//	while(t>0)
	{
		int n;
		scanf("%d",&n);
		int a[n],key;
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
		key=a[0];
//		int temp;
		for(int i=0;i<n;i++)
		{
			key=a[i];
			for(int j=0;j<i;j++)
				if(key<a[j])
				{
					a[i]=a[i]^a[j];
					a[j]=a[i]^a[j];
					a[i]=a[i]^a[j];

				}
		}
		for(int i=0;i<n;i++)
			printf("%d ",a[i]);
		printf("\n");
		t--;
	}
	return 0;
}
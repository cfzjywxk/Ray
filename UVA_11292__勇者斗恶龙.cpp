#include <stdio.h>
#include <stdlib.h>

#define maxn 20010

int dragon[maxn];
int worrior[maxn];
int cmp ( const void *a , const void *b )
{
	return *(int *)a - *(int *)b;
}
int main()
{
	freopen("D:\\input.txt", "r", stdin);
	//////////////////////////////////////////////////////////////////////////
	int i, j;
	int n, m;

	while (1)
	{
		scanf("%d %d", &n, &m);
		if (n == 0 && m == 0)
			break;
		for (i = 0; i < n; i++)
		{
			scanf("%d", &dragon[i]);
		}
		for (i = 0; i < m; i++)
		{
			scanf("%d", &worrior[i]);
		}
		qsort(dragon, n, sizeof(dragon[0]), cmp);
		qsort(worrior, m, sizeof(worrior[0]), cmp);
		int cost = 0;
		bool flag = false;
		j = 0;
		for (i = 0; i < n; i++)
		{
			while (j < m)
			{
				if (worrior[j] >= dragon[i])
				{
					cost += worrior[j];
					j++;
					if (i == n - 1)
					{
						flag = true;
					}
					break;
				}
				j++;
			}
			if (j == m)
				break;
		}
		if (flag)
			printf("%d\n", cost);
		else
			printf("Loowater is doomed!\n");
	}
	


	//////////////////////////////////////////////////////////////////////////
	return 0;
}
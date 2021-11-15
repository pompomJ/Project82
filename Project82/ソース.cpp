#include <stdio.h>

int main()
{
	int max, i;

	/* 予めデータを用意しておく。*/
	int a[] = { 12, 34, 54, 53, 23, 89, 33 };

	/* 配列の先頭の要素を仮の最大値とする。*/
	max = a[0];

	/* 配列を末尾の要素まで繰り返しチェックする。*/
	for (i = 0; i < 7; i++)
	{
		/* 仮の最大値を更新する。*/
		if (a[i] > max)
		{
			max = a[i];
		}
	}

	printf("最大値は %d\n", max);

	return 0;
}
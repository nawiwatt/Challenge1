#include<stdio.h>
#include<math.h>
int i;
float Total(int x, int y);
float Totalsq(int x, int y, float z, float zz);

int main() {
	int a, b, N;
	float c, e, f, Sd;
	scanf("%d%d", &a, &b);

	if (a > b) {
		N = a - b + 1;
	}
	else N = b - a + 1;

	c = Total(a, b);
	e = c / N;
	printf("\nAverage = %.1f", e);
	f = Totalsq(a, b, e, N);
	Sd = sqrt(f / (N - 1));
	printf("\nSD = %.2f", Sd);
	return 0;
}


float Total(int x, int y) {
	int total = 0;
	if (x < y)
	{
		for (i = x;i <= y;i++)
		{
			total = total + i;
			printf("%d ", i);
		}
	}
	else for (i = x;i >= y;i--)
	{
		total = total + i;
		printf("%d ", i);
	}
	return total;
}



float Totalsq(int x, int y, float z, float zz) {
	float total = 0;
	float g;
	if (x < y)
	{
		for (i = x;i <= y;i++)
		{
			g = pow(i - z, 2);
			total = total + g;
		}
	}
	else
	{
		for (i = x;i >= y;i--)
		{
			g = pow(i - z, 2);
			total = total + g;
		}
	}
	return total;
}
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<math.h>

int main()
{
	int x;
	long y=11;
	int i = 1;
	double ans = 0;
	printf("Input x: ");
    int r = scanf("%d", &x);
	while (i <= y) {
		ans = ans + i * pow(x, y -= i);
		i = i ++;
	}
	printf("Answer =  %f\n", ans);
	return 0;
}

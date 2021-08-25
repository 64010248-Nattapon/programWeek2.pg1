#include<stdio.h>
#include <cstdlib>
int main() {
	int a, b, gcd = 1, lcm;
	printf("Enter first number :");
	scanf_s("%d", &a);
	printf("Enter second number :");
	scanf_s("%d", &b);

	int x = abs(a), y = abs(b);
	while (y != 0)
	{
		int t = y;
		y = x % y;
		x = t;
	}
	gcd = x;
	lcm = (a * b) / gcd;
	printf("\nThe greatest common divisor is %d\n", abs(gcd));
	printf("The least common multiple is %d", abs(lcm));
	return 0;
}
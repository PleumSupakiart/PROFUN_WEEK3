#include <stdio.h>
int main()
{
	int N;
	printf("Enter integer : ");
	scanf_s("%d", &N);

	if (N >= 0 && N <= 10000)
	{
		int i = N % 10;
		if (i == 0)
		{
			printf("0:Zero");
		}
		if (i == 1)
		{
			printf("1:One");
		}
		if (i == 2)
		{
			printf("2:Tow");
		}
		if (i == 3)
		{
			printf("3:Three");
		}
		if (i == 4)
		{
			printf("4:Four");
		}
		if (i == 5)
		{
			printf("5:Five");
		}
		if (i == 6)
		{
			printf("6:Six");
		}
		if (i == 7)
		{
			printf("7:Seven");
		}
		if (i == 8)
		{
			printf("8:Eight");
		}
		if (i == 9)
		{
			printf("9:Nine");
		}
	}


	return 0;
}
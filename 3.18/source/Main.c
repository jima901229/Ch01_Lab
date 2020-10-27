#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	float a, b;
		printf("enter sales to dollars(-1 to 100):\n");
		scanf_s("%f", &a);
		if (a == -1)
			return 0;
		b = 200 + ((a*9)/100);
		printf("sales to dollars(-1 to 100) :%f\n", a);
		printf("salary is:%f\n", b);



	system("pause");
	return 0;
}

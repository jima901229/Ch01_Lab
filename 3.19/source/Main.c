#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	float a, b,d,f,c;
	printf("Enter loan principal(-1 to end):\n");
	scanf_s("%f", &a);
	if (a == -1)
		return 0;
	printf("enter insert rate:\n");
	scanf_s("%f", &b);
	printf("Enter term of loan in day:\n");
	scanf_s("%f", &c);	
	d = a * b*(c/365);
	printf("the insert charge is:%f\n", d);
		





	system("pause");
	return 0;

}
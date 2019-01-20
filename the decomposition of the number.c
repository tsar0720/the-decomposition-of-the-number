#include <stdio.h>

void print_number_factors(int x)
{
	printf("Number factors: ");
	int divisor = 2;
	while(x != 1)
	{
		if(x%divisor == 0)
		{
			printf("%d ", divisor);
			x /= divisor;
		}
		else
			divisor +=1;
	}
	printf("\n");
}

void main(void){
	//Разложение числа на множетели
	print_number_factors(90);


}
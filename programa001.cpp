/** / PROGRAMA 001 /**/
#include <stdio.h>

main(void){
	float price;
	float quantity;
	printf("How much gas?\n");
	scanf("%f", &quantity);
	printf ("type of gas pumped:premium\n");
	printf ("price of premium gas per gallon:$2.75 \n");
	price=2.75*quantity;
	printf ("your total cost is:$ %f\n",price);
}

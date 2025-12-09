#include <stdio.h>

int main(){
	
	float price1,price2,price3,discount1,discount2,discount3,Vat;
	scanf("%f",&price1);
	discount1 = price1*0.95;
	printf("%f\n",discount1);
	
	scanf("%f",&price2);
	discount2 = (price1+price2)*0.85;
	printf("%f\n",discount2);
	
	scanf("%f",&price3);
	discount3 = (price1+price2+price3)*0.70;
	printf("%f\n",discount3);

	Vat = discount3*(1.07);
	printf("%f\n",Vat);
	return 0;
	
}


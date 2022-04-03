/*
 * main.c
 *
 *  Created on: 2 abr. 2022
 *      Author: Keila Ceñal
 */

#include "functions.h"



int main(){
	setbuf(stdout, NULL);
	int option,
		optFlights,
		optPayment,
		flag=0;
	float km=0,
		aaPrice,
		latamPrice,
		priceDebitLatam,
		priceDebitAA,
		priceCreditLatam,
		priceCreditAA,
		priceBtcLatam,
		priceBtcAA,
		difference;
	char op;
	do{
		option= MainMenu();
		switch(option){
			case 1:
				printf("ingrese la cantidad de kilometros: ");
				scanf("%f", &km);
				system("pause");
			break;
			case 2:
				optFlights= MenuFlights();
				if(optFlights==1){
					aaPrice=EnterPrice(optFlights);
					flag=1;
				}else{
					latamPrice=EnterPrice(optFlights);
					flag=2;
				}
				if(flag==1){
					latamPrice=EnterPrice(2);
				}else{
					aaPrice=EnterPrice(1);
				}

				system("pause");
			break;
			case 3:
				priceDebitLatam=DebitPayment(latamPrice);
				priceDebitAA=DebitPayment(aaPrice);
				priceCreditLatam=CreditPayment(latamPrice);
				priceCreditAA=CreditPayment(aaPrice);
				priceBtcLatam=BtcPayment(latamPrice);
				priceBtcAA=BtcPayment(aaPrice);
				printf("el precio con debito de latam es $%.2f y el de aerolineas argentinas es $%.2f \n", priceDebitLatam, priceDebitAA);
				printf("el precio con credito de latam es $%.2f y el de aerolineas argentinas es $%.2f \n", priceCreditLatam, priceCreditAA);
				printf("el precio con bitcoins de latam es $%.5f y el de aerolineas argentinas es $%.5f \n", priceBtcLatam, priceBtcAA);
				system("pause");
			break;
			case 4:

			break;
			case 5:

			break;
		}
	  }while(option!=6);

	printf("gracias!");
	return 0;
}

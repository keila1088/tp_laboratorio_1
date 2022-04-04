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
	float km=7090,
		aaPrice=162965,
		latamPrice=159339,
		priceDebitLatam,
		priceDebitAA,
		priceCreditLatam,
		priceCreditAA,
		priceBtcLatam,
		priceBtcAA,
		unitPriceLatam,
		unitPriceAA,
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
				optFlights= MenuFlights(aaPrice, latamPrice);
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
				unitPriceLatam=CalcPriceXkm(latamPrice, km);
				unitPriceAA=CalcPriceXkm(aaPrice, km);
				if(latamPrice>aaPrice){
					difference=latamPrice-aaPrice;
				}else{
					difference=aaPrice-latamPrice;
				}
				printf("CALCULOS REALIZADOS \n");
				system("pause");
			break;
			case 4:
				ShouldResults(latamPrice, aaPrice, priceDebitLatam, priceDebitAA, priceCreditLatam, priceCreditAA, priceBtcLatam, priceBtcAA, unitPriceLatam, unitPriceAA, difference, km);
				system("pause");
			break;
			case 5:
				priceDebitLatam=DebitPayment(159339);
				priceDebitAA=DebitPayment(162965);
				priceCreditLatam=CreditPayment(159339);
				priceCreditAA=CreditPayment(162965);
				priceBtcLatam=BtcPayment(159339);
				priceBtcAA=BtcPayment(162965);
				unitPriceLatam=CalcPriceXkm(159339, 7090);
				unitPriceAA=CalcPriceXkm(162965, 7090);
				difference=162965-159339;
				ShouldResults(159339, 162965, priceDebitLatam, priceDebitAA, priceCreditLatam, priceCreditAA, priceBtcLatam, priceBtcAA, unitPriceLatam, unitPriceAA, difference, 7090);
				system("pause");
			break;
		}
	  }while(option!=6);

	printf("gracias!");
	return 0;
}



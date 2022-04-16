/*
 * main.c
 *
 *  Created on: 2 abr. 2022
 *      Author: Keila Ceñal
 */

#include "menuAndValidation.h"
#include "operations.h"

/**
 *
 * @return
 */
int main(){
	setbuf(stdout, NULL);
	int option,
		optFlights,
		flagKm=0,
		flagPrice=0,
		flag=0;
	float km=0,
		aaPrice=0,
		latamPrice=0,
		priceDebitLatam,
		priceDebitAA,
		priceCreditLatam,
		priceCreditAA,
		priceBtcLatam,
		priceBtcAA,
		unitPriceLatam,
		unitPriceAA,
		difference;
	char exit;
	do{
		option= MainMenu(km);
		switch(option){
			case 1:
				km=EnterAndValidate();
				flagKm=1;
				system("pause");
			break;
			case 2:
				optFlights= MenuFlights(aaPrice, latamPrice);
				if(optFlights==1){
					aaPrice=EnterAndValidatePrice(optFlights);
					flag=1;
				}else{
					latamPrice=EnterAndValidatePrice(optFlights);
					flag=2;
				}
				if(flag==1){
					latamPrice=EnterAndValidatePrice(2);
				}else{
					aaPrice=EnterAndValidatePrice(1);
				}
				flagPrice=1;
				system("pause");
			break;
			case 3:
				if(flagKm==1 && flagPrice==1){
					priceDebitLatam=DebitPayment(latamPrice);
					priceDebitAA=DebitPayment(aaPrice);
					priceCreditLatam=CreditPayment(latamPrice);
					priceCreditAA=CreditPayment(aaPrice);
					priceBtcLatam=BtcPayment(latamPrice);
					priceBtcAA=BtcPayment(aaPrice);
					unitPriceLatam=CalcPriceXkm(latamPrice, km);
					unitPriceAA=CalcPriceXkm(aaPrice, km);
					difference=latamPrice-aaPrice;
					printf("CALCULOS REALIZADOS \n");
				}else if(flagKm==1 && flagPrice==0){
					printf("Error. para realizar los calculos debe ingresar tambien el precio de los vuelos. \n");
				}else if(flagKm==0 && flagPrice==1){
					printf("Error. para realizar los calculos debe ingresar tambien los Km \n");
				}else{
					printf("Error. para realizar los calculos debe ingresar los km y precios de vuelos o pulsar 5: carga forzada de datos.\n");
				}
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
			case 6:
				exit='y';
			break;
			default:
				printf("opcion invalida. ingrese un numero de la lista: \n");
		}
		fflush(stdin);
	  }while(exit!='y');

	printf("gracias!");
	return 0;
}



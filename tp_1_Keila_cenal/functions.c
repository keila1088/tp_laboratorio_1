/*
 * functions.c
 *
 *  Created on: 2 abr. 2022
 *      Author: Keila Ceñal
 */

#include "functions.h"

int MainMenu(){
	int option;

	printf("1- Ingresar kilometros \n");
	printf("2- ingresar precio de vuelos \n");
	printf("3- Calcular todos los costos \n");
	printf("4- Informar Resultados \n");
	printf("5- Carga forzada de datos \n");
	printf("6- finalizar \n");
	printf("seleccione la opcion deseada: \n");
	scanf("%d", &option);

	return option;
}

int MenuFlights(){
	int opt;
	printf("1- Precio por Aerolineas Argentinas \n");
	printf("2- Precio por Latam \n");
	printf("Seleccione la aerolinea deseada: ");
	scanf("%d", &opt);

	return opt;
}

float EnterPrice(int opAir){
	float price;
	if(opAir==1){
		printf("ingresar el precio para Aerolineas Argentinas: ");
		scanf("%f", &price);
	}else{
		printf("ingresar el precio para Latam: ");
		scanf("%f", &price);
	}

	return price;
}

float DebitPayment(float price){
	float priceDebit;
	priceDebit=price-((price*10)/100);
	return priceDebit;
}

float CreditPayment(float price){
	float priceCredit;
	priceCredit=price+((price*25)/100);
	return priceCredit;
}

float BtcPayment(float price){
	float priceBtc;
	priceBtc=price/4606954.55;
	return priceBtc;
}



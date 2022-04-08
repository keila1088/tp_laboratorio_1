/*
 * operations.c
 *
 *  Created on: 8 abr. 2022
 *      Author: keila.cenal
 */

#include "operations.h"


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

float CalcPriceXkm(float price, float km){
	float unitPrice;
	unitPrice= price/km;
	return unitPrice;
}

/*
 * operations.c
 *
 *  Created on: 8 abr. 2022
 *      Author: keila.cenal
 */

#include "operations.h"


/**
 *
 * @param price
 * @return
 */
float DebitPayment(float price){
	float priceDebit;
	priceDebit=price-((price*10)/100);
	return priceDebit;
}

/**
 *
 * @param price
 * @return
 */
float CreditPayment(float price){
	float priceCredit;
	priceCredit=price+((price*25)/100);
	return priceCredit;
}

/**
 *
 * @param price
 * @return
 */
float BtcPayment(float price){
	float priceBtc;
	priceBtc=price/4606954.55;
	return priceBtc;
}

/**
 *
 * @param price
 * @param km
 * @return
 */
float CalcPriceXkm(float price, float km){
	float unitPrice;
	unitPrice= price/km;
	return unitPrice;
}

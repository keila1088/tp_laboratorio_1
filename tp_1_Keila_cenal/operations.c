/*
 * operations.c
 *
 *  Created on: 8 abr. 2022
 *      Author: keila.cenal
 */

#include "operations.h"


/**
 * funcion que calcula el precio neto de un vuelo con un descuento sobre
 * el precio bruto por medio de pago
 * @param price
 * @return
 */
float DebitPayment(float price){
	float priceDebit;
	priceDebit=price-((price*10)/100);
	return priceDebit;
}

/**
 * funcion que calcula el precio neto de un vuelo con un interes sobre
 * el precio bruto por medio de pago
 * @param price
 * @return
 */
float CreditPayment(float price){
	float priceCredit;
	priceCredit=price+((price*25)/100);
	return priceCredit;
}

/**
 * funcion que calcula el precio neto de un vuelo para abonar con bitcoins
 * @param price
 * @return
 */
float BtcPayment(float price){
	float priceBtc;
	priceBtc=price/4606954.55;
	return priceBtc;
}

/**
 * funcion que recibe como parametro un precio bruto y kilometros especificos y
 * devuelve el valor del precio unitario por kilometro
 * @param price
 * @param km
 * @return
 */
float CalcPriceXkm(float price, float km){
	float unitPrice;
	unitPrice= price/km;
	return unitPrice;
}

/*
 * functions.h
 *
 *  Created on: 2 abr. 2022
 *      Author: Keila ce�al
 */

#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int MainMenu();
int MenuFlights(float, float);
float EnterPrice(int);
float DebitPayment(float);
float CreditPayment(float);
float BtcPayment(float);
float CalcPriceXkm(float, float);
void ShouldResults(float, float, float, float, float, float, float, float, float, float, float, float);

#endif /* FUNCTIONS_H_ */

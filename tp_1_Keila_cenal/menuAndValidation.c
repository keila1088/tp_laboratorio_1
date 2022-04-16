/*
 * functions.c
 *
 *  Created on: 2 abr. 2022
 *      Author: Keila Ceñal
 */

#include "menuAndValidation.h"


/**
 * funcion para mostrar menu principal
 * @param km
 * @return option
 */
int MainMenu(float km){
	int option;

	printf("1- Ingresar kilometros km=%.2f \n", km);
	printf("2- ingresar precio de vuelos \n");
	printf("3- Calcular todos los costos \n");
	printf("4- Informar Resultados \n");
	printf("5- Carga forzada de datos \n");
	printf("6- finalizar \n");
	printf("seleccione la opcion deseada: \n");
	scanf("%d", &option);

	return option;
}

/**
 * submenu con opciones para ingreso de precio por aerolinea.
 * @param priceAA
 * @param priceLatam
 * @return opt
 */
int MenuFlights(float priceAA, float priceLatam){
	int opt;
	printf("Ingresar precio de vuelos: Aerolineas Argentinas: $%.2f // Latam: $%.2f \n", priceAA, priceLatam);
	printf("1- Precio por Aerolineas Argentinas \n");
	printf("2- Precio por Latam \n");
	printf("Seleccione la aerolinea deseada: ");
	scanf("%d", &opt);

	return opt;
}

/**
 * funcion para mostrar en pantalla los calculos realizados.
 * @param latamPrice
 * @param aaPrice
 * @param priceDebitLatam
 * @param priceDebitAA
 * @param priceCreditLatam
 * @param priceCreditAA
 * @param priceBtcLatam
 * @param priceBtcAA
 * @param unitPriceLatam
 * @param unitPriceAA
 * @param difference
 * @param kms
 */
void ShouldResults(float latamPrice, float aaPrice, float priceDebitLatam, float priceDebitAA, float priceCreditLatam,
					float priceCreditAA, float priceBtcLatam, float priceBtcAA,
					float unitPriceLatam, float unitPriceAA, float difference, float kms){
	printf("KMs Ingresados: %.2f km \n", kms);
	printf("\n");
	printf("Precio Aerolineas Argentinas: $%.2f \n", aaPrice);
	printf("a) Precio con tarjeta de debito: $%.2f \n", priceDebitAA);
	printf("b) Precio con tarjeta de credito: $%.2f \n", priceCreditAA);
	printf("c) Precio pagando con bitcoins: %.5f BTC \n", priceBtcAA);
	printf("d) Precio Unitario: $%.2f \n", unitPriceAA);
	printf("\n");
	printf("Precio Latam: $%.2f \n", latamPrice);
	printf("a) Precio con tarjeta de debito: $%.2f \n", priceDebitLatam);
	printf("b) Precio con tarjeta de credito: $%.2f \n", priceCreditLatam);
	printf("c) Precio pagando con bitcoins: %.5f BTC \n", priceBtcLatam);
	printf("d) Precio Unitario: $%.2f \n", unitPriceLatam);
	printf("\n");
	printf("La diferencia de precio es: $%.2f \n", difference);
	printf("\n");
}

/**
 * funcion que devuelve los kilometros ingresados y valida que sean correctos
 * @return km
 */
float EnterAndValidate(){
	float km;
	int aux;
	printf("ingrese los kilometros del vuelo: \n");
	aux= scanf("%f", &km);
	while(km<=0 || aux==0){
		fflush(stdin);
		printf("ERROR! ingresar nuevamente los kilometros: \n");
		scanf("%f", &km);
		aux=km;
	}
	return km;
}

/**
 * funcion para ingresar el precio por aerolinea que devuelve el mismo segun
 * la opcion que haya traido por parametro
 * @param opAir
 * @return price
 */
float EnterAndValidatePrice(int opAir){
	fflush(stdin);
	float price=0;
		if(opAir==1){
			printf("ingresar el precio para Aerolineas Argentinas: ");
			scanf("%f", &price);
		}else{
			printf("ingresar el precio para Latam: ");
			scanf("%f", &price);
		}
		while(price <1){
			fflush(stdin);
			printf("ERROR EN EL PRECIO. Reingrese: ");
			scanf("%f", &price);
		}


	return price;
}

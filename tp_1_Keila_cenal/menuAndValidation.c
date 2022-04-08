/*
 * functions.c
 *
 *  Created on: 2 abr. 2022
 *      Author: Keila Ceñal
 */

#include "menuAndValidation.h"

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

int MenuFlights(float priceAA, float priceLatam){
	int opt;
	printf("Ingresar precio de vuelos: Aerolineas Argentinas: $%.2f // Latam: $%.2f \n", priceAA, priceLatam);
	printf("1- Precio por Aerolineas Argentinas \n");
	printf("2- Precio por Latam \n");
	printf("Seleccione la aerolinea deseada: ");
	scanf("%d", &opt);

	return opt;
}

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

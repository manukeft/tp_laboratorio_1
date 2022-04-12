/*
 * informar.c
 *
 *  Created on: 12 abr 2022
 *      Author: manu
 */

#include <stdio.h>
#include <stdlib.h>
#include "pedirDatos.h"
#include "hacerCalculos.h"
#include "informar.h"

void informarResultadosAerolineas(float kilometrosIngresados, float precio, float precioConDescuento, float precioConAumento, float precioConBitcoin, float precioPorKilometro)
{
    printf("\nKMs Ingresados: %.2f\n\n", kilometrosIngresados);

    if(precio >= 1)
    {
        printf("Precio Aerolineas Argentinas: $%.2f\na) Precio con tarjeta de debito: $%.2f\nb) Precio con tarjeta de credito: $%.2f\nc) Precio pagando con bitcoin: %f BTC\nd) Mostrar precio unitario: $%.2f\n\n", precio, precioConDescuento, precioConAumento, precioConBitcoin, precioPorKilometro);
    }
    else
    {
        printf("No se ingreso ningun vuelo de Aerolineas Argentinas\n\n");
    }
}

void informarResultadosLatam(float precio, float precioConDescuento, float precioConAumento, float precioConBitcoin, float precioPorKilometro)
{
    if(precio > 0)
    {
        printf("Precio Latam: $%.2f\na) Precio con tarjeta de debito: $%.2f\nb) Precio con tarjeta de credito: $%.2f\nc) Precio pagando con bitcoin: %f BTC\nd) Mostrar precio unitario: $%.2f\n\n", precio, precioConDescuento, precioConAumento, precioConBitcoin, precioPorKilometro);
    }
    else
    {
        printf("No se ingreso ningun vuelo de Latam\n\n");
    }
}


void informarDiferenciaPrecio(float diferenciaPrecio)
{
    if(diferenciaPrecio != 0)
    {
        printf("La diferencia de precio es de: $%.2f\n\n", diferenciaPrecio);
    }
}

void forzarCarga(float kilometrosForzados, float precioAerolineasForzado, float precioLatamForzado)
{
    float precioConDescuentoAerolineas;
    float precioConAumentoAerolineas;
    float precioConBitcoinAerolineas;
    float precioPorKilometroAerolineas;
    float precioConDescuentoLatam;
    float precioConAumentoLatam;
    float precioConBitcoinLatam;
    float precioPorKilometroLatam;
    float diferenciaPrecioEmpresas;

    realizarCalculos(kilometrosForzados, precioAerolineasForzado, &precioConDescuentoAerolineas, &precioConAumentoAerolineas, &precioConBitcoinAerolineas, &precioPorKilometroAerolineas);
    realizarCalculos(kilometrosForzados, precioLatamForzado, &precioConDescuentoLatam, &precioConAumentoLatam, &precioConBitcoinLatam, &precioPorKilometroLatam);
    diferenciaPrecioEmpresas = diferenciaPrecio(precioAerolineasForzado, precioLatamForzado);

    informarResultadosAerolineas(kilometrosForzados, precioAerolineasForzado, precioConDescuentoAerolineas, precioConAumentoAerolineas, precioConBitcoinAerolineas, precioPorKilometroAerolineas);

    informarResultadosLatam(precioLatamForzado, precioConDescuentoLatam, precioConAumentoLatam, precioConBitcoinLatam, precioPorKilometroLatam);

    informarDiferenciaPrecio(diferenciaPrecioEmpresas);
}

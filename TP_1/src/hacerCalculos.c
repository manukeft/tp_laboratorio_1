/*
 * hacerCalculos.c
 *
 *  Created on: 12 abr 2022
 *      Author: manu
 */

#include <stdio.h>
#include <stdlib.h>
#include "pedirDatos.h"
#include "hacerCalculos.h"
#include "informar.h"

int realizarCalculos(float kilometros, float precio, float* precioConDescuento, float* precioConAumento, float* precioConBitcoin, float* precioPorKilometro)
{
    int retorno = 0;
    float porcentajeDescuento = 0.9;
    float porcentajeAumento = 1.25;
    float precioBitcoin = 4767328.10;

    if(precioConDescuento != NULL && precioConAumento != NULL && precioConBitcoin != NULL && precioPorKilometro != NULL)
    {
        *precioConDescuento = (precio * porcentajeDescuento);
        *precioConAumento = (precio * porcentajeAumento);
        *precioConBitcoin = (precio / precioBitcoin);
        *precioPorKilometro = (precio / kilometros);

        retorno = 1;
    }

    return retorno;
}

float diferenciaPrecio(float precioAerolineas, float precioLatam)
{
    float resultado;

    resultado = precioAerolineas - precioLatam;

    return resultado;
}

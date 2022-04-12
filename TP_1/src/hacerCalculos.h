/*
 * hacerCalculos.h
 *
 *  Created on: 12 abr 2022
 *      Author: manu
 */

#ifndef HACERCALCULOS_H_
#define HACERCALCULOS_H_

/** \brief Realiza los calculos correspondientes y asigna los resultados a las variables
 *
 * \param kilometros float Son los kilometros ingresados por el usuario
 * \param precio float Es el precio ingresado por el usuario
 * \param precioConDescuento float* Puntero al espacio de memoria donde se dejara el precio con descuento
 * \param precioConAumento float* Puntero al espacio de memoria donde se dejara el precio con aumento
 * \param precioConBitcoin float* Puntero al espacio de memoria donde se dejara el precio con Bitcoin
 * \param precioPorKilometro float* Puntero al espacio de memoria donde se dejara el precio por kilometro
 * \return int Retorna 1 si se realizaron los calculos o retorna 0 si no
 *
 */
int realizarCalculos(float kilometros, float precio, float* precioConDescuento, float* precioConAumento, float* precioConBitcoin, float* precioPorKilometro);

/** \brief Calcula de diferencia de precios ingresados entre las dos aerolineas
 *
 * \param precioAerolineas float Es el precio de Aerolineas ingresado por el usuario
 * \param precioLatam float Es el precio de Latam ingresado por el usuario
 * \return float Retorna la diferencia de precio
 *
 */
float diferenciaPrecio(float precioAerolineas, float precioLatam);

#endif /* HACERCALCULOS_H_ */

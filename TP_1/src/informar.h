/*
 * informar.h
 *
 *  Created on: 12 abr 2022
 *      Author: manu
 */

#ifndef INFORMAR_H_
#define INFORMAR_H_

/** \brief Informa los resultados obtenidos en los calculos de Aerolineas Argentinas
 *
 * \param kilometrosIngresados float Son los kilometros ingresados por el usuario
 * \param precio float Es el precio del vuelo de Aerolineas Argentinas ingresado por el usuario
 * \param precioConDescuento float Es el precio del vuelo con un descuento del 10%
 * \param precioConAumento float Es el precio del vuelo con un recargo del 25%
 * \param precioConBitcoin float Es el precio del vuelo en BTC
 * \param precioPorKilometro float Es el precio por kilometro que estaria pagando el usuario
 * \return void
 *
 */
void informarResultadosAerolineas(float kilometrosIngresados, float precio, float precioConDescuento, float precioConAumento, float precioConBitcoin, float precioPorKilometro);

/** \brief Informa los resultados obtenidos en los calculos de Latam
 *
 * \param precio float Es el precio del vuelo de Latam ingresado por el usuario
 * \param precioConDescuento float Es el precio del vuelo de Latam con un descuento del 10%
 * \param precioConAumento float Es el precio del vuelo de Latam con un aumento del 25%
 * \param precioConBitcoin float Es el precio del vuelo de Latam en BTC
 * \param precioPorKilometro float Es el precio por kilometro que estaria pagando el usuario
 * \return void
 *
 */
void informarResultadosLatam(float precio, float precioConDescuento, float precioConAumento, float precioConBitcoin, float precioPorKilometro);

/** \brief Informa la diferencia de precio entre las dos aerolineas
 *
 * \param diferenciaPrecio float Es la diferencia de precio de vuelos entre las dos aerolineas
 * \return void
 *
 */
void informarDiferenciaPrecio(float diferenciaPrecio);

/** \brief Calcula e informa con unos datos forzados
 *
 * \param kilometrosForzados float Son los kilometros hardcodeados
 * \param precioAerolineasForzado float Es el precio de Aerolineas Argentinas hardcodeado
 * \param precioLatamForzado float Es el precio de Latam hardcodeado
 * \return void
 *
 */
void forzarCarga(float kilometrosForzados, float precioAerolineasForzado, float precioLatamForzado);

#endif /* INFORMAR_H_ */

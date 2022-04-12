/*
 * pedirDatos.h
 *
 *  Created on: 12 abr 2022
 *      Author: manu
 */

#ifndef PEDIRDATOS_H_
#define PEDIRDATOS_H_

/** \brief Solicita un numero entero al usuario, valida y devuelve un resultado
 *
 * \param pResultado int* Puntero entero al espacio de memoria donde se dejara el resultado de la funcion
 * \param mensaje char* Es el mensaje a ser mostrado
 * \param mensajeError char* Es el mensaje de error a ser mostrado
 * \param minimo int Es el numero minimo a ser aceptado
 * \param maximo int Es el numero maximo a ser aceptado
 * \param reintentos int Es la cantidad de reintentos que tiene el usuario para errar
 * \return int Retorna 1 si se obtuvo el numero y se valido correctamente o retorna 0 si no
 *
 */
int menu(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos);

/** \brief Solicita un numero flotante al usuario, lo valida entre parametros y devuelve un resultado
 *
 * \param pResultado float* Puntero flotante al espacio de memoria donde se dejara el resultado de la funcion
 * \param mensaje char* Es el mensaje a ser mostrado
 * \param mensajeError char* Es el mensaje de error a ser mostrado
 * \param minimo float Es el numero minimo a ser aceptado
 * \param maximo float Es el numero maximo a ser aceptado
 * \param reintentos int Es la cantidad de reintentos que tiene el usuario para errar
 * \return int Retorna 1 si se obtuvo el numero flotante y se valido correctamente o retorna 0 si no
 *
 */
int utn_getNumeroFlotante(float* pResultado, char* mensaje, char* mensajeError, float minimo, float maximo, int reintentos);

/** \brief Solicita una letra entre la 'a' y la 'b' al usuario, valida y devuelve un resultado
 *
 * \param pResultado char* Puntero caracter al espacio de memoria donde se dejara el resultado de la funcion
 * \param mensaje char* Es el mensaje a ser mostrado
 * \param mensajeError char* Es el mensaje de error a ser mostrado
 * \param minimo char Es es caracter minimo a ser aceptado
 * \param maximo char Es el caracter maximo a ser aceptado
 * \param reintentos int Es la cantidad de reintentos que tiene el usuario para errar
 * \return int Retorna 1 si se obtuvo el caracter y se valido correctamente o retorna 0 si no
 *
 */
int submenu(char* pResultado, char* mensaje, char* mensajeError, char minimo, char maximo, int reintentos);

#endif /* PEDIRDATOS_H_ */

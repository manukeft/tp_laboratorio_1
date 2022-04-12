/*
 ============================================================================
 Name        : TP_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "pedirDatos.h"
#include "hacerCalculos.h"
#include "informar.h"

int main(void)
{
	setbuf(stdout, NULL);

	int opcion;
	int respuesta;
	char opcionEntreEmpresas;
	float kmIngresados;
	float precioAerolineasIngresado;
	float precioConDescuentoAerolineas;
	float precioConAumentoAerolineas;
	float precioConBitcoinAerolineas;
	float precioPorKilometroAerolineas;
	float precioLatamIngresado;
	float precioConDescuentoLatam;
	float precioConAumentoLatam;
	float precioConBitcoinLatam;
	float precioPorKilometroLatam;
	float diferenciaPrecioEmpresas;
	int flag1 = 0;
	int flag2 = 0;
	int flag3 = 0;

	do
	{
		respuesta = menu(&opcion, "Seleccione una opcion:\n\n1) Ingresar kilometros\n2) Ingresar precio de vuelos\n3) Calcular todos los costos\n4) Informar resultados\n5) Carga forzada de datos\n6) Salir\n\n", "\nNo es una opcion valida\n\n", 1, 6, 3);
		if(respuesta == 1)
		{
			switch(opcion)
			{
			case 1:
				if(flag1 == 0)
				{
					utn_getNumeroFlotante(&kmIngresados, "\nIngrese la cantidad de km: \n", "\nError. Ingrese una cantidad valida mayor a 0 y menor a 15000\n\n", 0, 15000, 3);
					flag1 = 1;
					system("pause");
				}

				break;

			case 2:
				if(flag1 == 1)
				{
					do
					{
						respuesta = submenu(&opcionEntreEmpresas, "\nSeleccione una opcion:\n\na) Ingresar precio de Aerolineas\nb) Ingresar precio de Latam\n", "Error. No es una opcion valida.\n\n", 'a', 'b', 3);
						if(respuesta == 1)
						{
							switch(opcionEntreEmpresas)
							{
							case 'a':
								utn_getNumeroFlotante(&precioAerolineasIngresado, "\nIngrese el precio del vuelo de Aerolineas\n\n", "\nError. Ingrese un precio valido entre 1 y 2000000\n", 1, 2000000, 3);
								break;

							case 'b':
								utn_getNumeroFlotante(&precioLatamIngresado, "Ingrese el precio del vuelo de Latam\n", "Error. Ingrese un precio valido entre 1 y 2000000\n", 1, 2000000, 3);
								break;
							}
						}
					}
					while(opcionEntreEmpresas != 'a' && opcionEntreEmpresas != 'b');

					flag2 = 1;

					system("pause");

					break;
				}
				else
				{
					printf("Antes de ingresar los precios, ingrese los kilometros\n\n");
				}

				break;

			case 3:
				if(flag2 == 1)
				{
					if(precioAerolineasIngresado > 0 || precioLatamIngresado > 0)
					{
						realizarCalculos(kmIngresados, precioAerolineasIngresado, &precioConDescuentoAerolineas, &precioConAumentoAerolineas, &precioConBitcoinAerolineas, &precioPorKilometroAerolineas);
						realizarCalculos(kmIngresados, precioLatamIngresado, &precioConDescuentoLatam, &precioConAumentoLatam, &precioConBitcoinLatam, &precioPorKilometroLatam);
						diferenciaPrecioEmpresas = diferenciaPrecio(precioAerolineasIngresado, precioLatamIngresado);
						printf("\nLos calculos se realizaron con exito\n\n");
					}
					else
					{
						printf("No se ingreso ningun precio de vuelo\n\n");
					}

					flag3 = 1;

					system("pause");
					break;
				}
				else if(flag1 == 0)
				{
					printf("Antes de calcular primero debe ingresar los kilometros y los precios\n\n");
				}
				else
				{
					printf("Antes de calcular debe ingresar el precio de los vuelos\n\n");
				}

				break;

			case 4:
				if(flag3 == 1)
				{
					informarResultadosAerolineas(kmIngresados, precioAerolineasIngresado, precioConDescuentoAerolineas, precioConAumentoAerolineas, precioConBitcoinAerolineas, precioPorKilometroAerolineas);

					informarResultadosLatam(precioLatamIngresado, precioConDescuentoLatam, precioConAumentoLatam, precioConBitcoinLatam, precioPorKilometroLatam);

					informarDiferenciaPrecio(diferenciaPrecioEmpresas);
					break;
				}
				else if(flag1 == 0)
				{
					printf("Antes de informar los resultados primero debe ingresar los kilometros, el precio de los vuelos y calcular los costos\n\n");
				}
				else if(flag2 == 0)
				{
					printf("Antes de informar los resultados primero tiene que ingresar el precio de los vuelos y calcular los costos\n\n");
				}
				else
				{
					printf("Antes de informar los resultados primero debe calcularlos\n\n");
				}

				break;

			case 5:
				forzarCarga(7090, 162965, 159339);
				break;

			default:
				break;

			}
		}
	}
	while(opcion != 6);

	return EXIT_SUCCESS;
}

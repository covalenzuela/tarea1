/*
 * ejercicio 5.c
 * 
 * Copyright 2018 ConstanzaValenzuela <constanzavalenzuela@constanzavalenzuela-Aspire-A515-51G>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>

int main()
{
	char nombre_dino;
	float peso, longitud, libras, pies;
	
	printf ("Ingrese nombre del dinosaurio: ");
	scanf ("%s", &nombre_dino);
	printf ("Ingrese libras: ");
	scanf ("%f", &libras);
	printf ("Ingrese pies: ");
	scanf ("%f", &pies);
	peso= (libras * 0.45);
	printf ("Peso: %.2f\n", peso);
	longitud= (pies * 0.3048);
	printf ("Longitud: %.4f", longitud);
	
	return 0;
}


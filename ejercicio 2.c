/*
 * ejercicio 2.c
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
	int numero, cuadrado, cubo;
	
	printf ("Ingrese número: ");
	scanf ("%d", &numero);
	cuadrado= numero*numero;
	cubo= numero*numero*numero;
	printf ("El cuadrado del número es: %d\n", cuadrado);
	printf ("EL cubo del número es: %d", cubo);
	
	return 0;
}


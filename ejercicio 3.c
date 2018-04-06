/*
 * ejercicio 3.c
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
	float cateto1, cateto2, hipotenusa;
	
	printf ("Ingrese cateto 1: ");
	scanf ("%f", &cateto1);
	printf ("Ingese cateto 2: ");
	scanf ("%f", &cateto2);
	hipotenusa= (cateto1*cateto1) + (cateto2*cateto2);
	printf ("La hipotenusa al cuadrado es: %f", hipotenusa);
	
	return 0;
}


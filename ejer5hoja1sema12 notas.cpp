// ConsoleApplication2.cpp : main project file.

#include "stdafx.h"
#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include <iomanip>
using namespace std;
using namespace System;


void reporte(int *n, float *notas)
{
	int desaprobado = 0;
	int aprobado = 0;
	int cero = 0;
	int dos = 0;

	for (int i = 0; i < *n; i++)
		if (notas[i] == 0)
			cero++;
	for (int i = 0; i < *n; i++)
		if (notas[i] == 2)
			dos++;
	for (int i = 0; i < *n; i++)
		if (notas[i] >= 13)
			aprobado++;
	for (int i = 0; i < *n; i++)
		if (notas[i] < 13)
			desaprobado++;

	cout << "cantidad de personas que obtuvieron 00 : " << cero << endl;
	cout << "cantidad de personas que obtuvieron 02 : " << dos << endl;
	cout << "cantidad de personas que aprobaron : " << aprobado << endl;
	cout << "cantidad de personas que desaprobaron : " << desaprobado << endl;
}
	

int main()
{

	//ingreso de numero de alumnos
	int n;
	cout << "ingresa cantidad de alumnos "; cin >> n;
	while (n <= 0 || n > 40)
	{
		cout << "ingresa cantidad de alumnos "; cin >> n;
	}
	//declaracion de va
	float*notas;
	notas = new float[n];

	//ingreso de notas
	for (int i = 0; i < n; i++)

	{

		cout << "nota del alumno " << i + 1 << " es: "; cin >> notas[i];
	}

	reporte(&n, notas);
	_getch();
}
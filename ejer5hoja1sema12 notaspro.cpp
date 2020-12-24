/ Ejercicio 5 de la hoja 1 semana 12
#include"stdafx.h"
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
using namespace System;
void IngresarDatos(int *N, float *notas)
{
	for (int i = 0; i < *N; i++)
	{
		cout << "Ingrese la nota de la persona " << i + 1 << ": ";
		cin >> notas[i];
	}
}
void SalidaDatos(int *N, float *notas)
{
	for (int i = 0; i < *N; i++)
	{
		cout << "La nota de la persona " << i + 1 << "es: " << notas[i] << endl;
	}
}
void Nota(int *N, float *notas)
{
	int contador1 = 0;
	int contador2 = 0;
	for (int i = 0; i < *N; i++)
	{
		if (notas[i] == 0)
		{
			contador1++;
		}
		if (notas[i] == 2)
		{
			contador2++;
		}
	}
	cout << "El numero de personas que saco nota 0 es: " << contador1 << endl;
	cout << "El numero de personas que saco nota 2 es: " << contador2 << endl;
}
void AyD(int *N, float *notas)
{
	int contador3 = 0;
	int contador4 = 0;
	for (int i = 0; i < *N; i++)
	{
		if (notas[i] == 0 || notas[i] < 13)
		{
			contador3++;
		}
		if (notas[i] >= 13)
		{
			contador4++;
		}
	}
	cout << "La cantidad de alumnos desaprobados es: " << contador3 << endl;
	cout << "La cantidad de alumnos aprobados es: " << contador4 << endl;
}
int main()
{
	int N;
	cout << "Ingrese el numero de alumnos: ";
	cin >> N;
	while (N > 40)
	{
		cout << "Vuelva a ingresar el numero de alumnos: ";
		cin >> N;
	}
	float *notas;
	notas = new float[N];
	IngresarDatos(&N, notas);
	SalidaDatos(&N, notas);
	Nota(&N, notas);
	AyD(&N, notas);
	delete[] notas;
	_getch();
}
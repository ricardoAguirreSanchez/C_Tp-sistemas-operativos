/*
 ============================================================================
 Name        : guia_ejercicio_2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include "archivo.h"

//se debe poder abrir (definir la forma: read/write/append), cerrar un archivo,
//leer una linea determinada, exponer una operación que reciba una función y la
//ejecute por cada línea del archivo; exponer otra operación que dada una lista
//y una función, itere la lista y escriba sobre el archivo abierto lo que devuelve
//dicha función (string).

int main(void) {
	//1.- Creo el archivo
	FILE * archivo = txt_open_file("prueba_archivo.txt","w");
	//controlo que este bien
	if (!archivo){
		puts("Error al crear el archivo");
		return EXIT_SUCCESS;
	}
	//primera carga
	txt_carga_inicial(archivo);
	txt_close_file(archivo);


	//2.- Leo el archivo
	archivo = txt_open_file("prueba_archivo.txt","r");
	//controlo que este bien
	if (!archivo){
		puts("Error al ver el archivo");
		return EXIT_SUCCESS;
	}
	txt_read_all(archivo);
	txt_close_file(archivo);


//	//3.- Leo la linea 5
//	archivo = txt_open_file("prueba_archivo.txt","r");
//	//controlo que este bien
//	if (!archivo){
//		puts("Error al leer una linea espeficia del archivo");
//		return EXIT_SUCCESS;
//	}
//	txt_read_especific_line(archivo,4);
//	txt_close_file(archivo);


	return EXIT_SUCCESS;
}

/*
 * archivo.h
 *
 *  Created on: 31/3/2018
 *      Author: utnso
 */

#ifndef ARCHIVO_H_
#define ARCHIVO_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <commons/collections/list.h>

typedef struct Persona{
	char* localidad;
	char* nombre;
	int edad;
	long telef;
	long dni;
	long saldo;
}t_Persona;


/*Condicion
"r":Abre un archivo para leer. El archivo debe existir
"w":Crea nuevo archivo, si existe lo sobreescribe como vacio
"r+":Abre un archivo para actualizar tanto la lectura como la escritura. El archivo debe existir.
"w+":Crea un archivo vacío para leer y escribir
"w+b": crea un archivo para leer y escribir, si ya existe lo "limpia"
"r+b": crea un archivo para leer y escribir, si ya existe lo usa sin "Limpiarlo"*/
//Abre un archivo
FILE* txt_open_file(char* path, char* condicion);

//Carga inicial
void txt_carga_inicial(FILE* file);

//Cierra el archivo
void txt_close_file(FILE* file);

//Lee todos los datos
void txt_read_all(FILE* file);

//Lee una linea especifica
void txt_read_especific_line(FILE* file, int line);

t_list* txt_save_in_list(FILE* archivo);

void txt_order_list(t_list* lista);

void txt_save_in_file(t_list* lista_personas);

void txt_clear_list(t_list* lista_personas);

#endif /* ARCHIVO_H_ */

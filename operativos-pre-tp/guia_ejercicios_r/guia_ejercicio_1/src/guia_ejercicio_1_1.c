///*
// ============================================================================
// Name        : guia_ejercicios.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C, Ansi-style
// ============================================================================
// */
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//
//char* string_concat(char* nombre1, char* nombre2){
//	char * resultado = malloc(strlen(nombre1) + strlen(nombre2) + 1 );
//	strcpy(resultado,nombre1);
//	strcat(resultado,nombre2);
//	resultado[strlen(resultado)] = '\0';
//	return resultado;
//}
//
//
//int main(void) {
//	char* nombre1 = malloc(sizeof(char)*5 + 1);
//	strcpy(nombre1,"Hola ");
//	nombre1[strlen(nombre1)] = '\0';
//	char* nombre2 = malloc(sizeof(char)*7 + 1);
//	strcpy(nombre2,"Ritchie");
//	nombre2[strlen(nombre2)] = '\0';
//	char* resultado = string_concat(nombre1,nombre2);
//	printf("Saludo del ejercicio 1: %s", resultado);
//
//
//	free(nombre1);
//	free(nombre2);
//	free(resultado);
//	return 0;
//}

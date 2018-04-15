/*
 ============================================================================
 Name        : c.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "archivo.h"
#include "cliente.h"

void exit_gracefully(int return_nr) {
  exit(return_nr);
}

int main(int argc, char** argv) {

	//Conecta como cliente al coordinador
	int sockfd = conectar_coodinador();
	saludo_inicial_coordinador(sockfd);

	//TODO:conecta como cliente al planificador
//	int sockfd = conectar_planificador();
//	saludo_inicial_planificador(sockfd);

	//2.- lee el archivo linea por linea
	if(argc > 2){
		puts("Ingreso 2 o mas parametros");
		exit_gracefully(-1);
	}
	FILE* file = txt_open_file(argv[1],"r");
	if (file == NULL){
		txt_close_file(file);
		puts("Error al abrir el archivo ");
		exit_gracefully(-1);
	}
	char* line = malloc(sizeof(char)*256);
	while (fgets(line, 256, file)) {
		//3.- se queda esperando permiso para envia la linea "parseada" al coordinador
		printf("%s", line);
	}
	free(line);
	sleep(50);
	txt_close_file(file);
	close(sockfd);
	return EXIT_SUCCESS;
}

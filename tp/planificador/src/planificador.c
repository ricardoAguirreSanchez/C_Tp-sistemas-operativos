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
#include "cliente.h"

int main(void) {

	int sockfd = conectar_coodinador();
	saludo_inicial_coordinador(sockfd);
	sleep(500);
	return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>
#include "funcionalidad_instancia.h"
#include "cliente.h"

int main(void) {

	CANT_ENTRADA = 0;
	TAMANIO_ENTRADA = 0;
	get_parametros_config();
	//TODO: leer los archivos .txt creador a partir del dump
	//TODO: crea/cargar mis estructuras administrativas
	int sockfd = conectar_coodinador();
	saludo_inicial_coordinador(sockfd);

	//REcibo datos de entrada
	recibo_datos_entrada(sockfd);
	//Envio mis datos
	envio_datos(sockfd);

	// TODO:espero q el coordinador me de una tarea para hacer
    // recibo_sentencia(sockfd);
    // envio_resultado(sockfd);

	//while para q no termine
	while(1){
		/*nada*/
	}
	//Por ahora libero la memoria que me quedo (solo hasta agregar funcionalidad posta)
	free(ALGORITMO_REEMPLAZO);
	free(PUNTO_MONTAJE);
	free(NOMBRE_INSTANCIA);
	//


	return EXIT_SUCCESS;
}

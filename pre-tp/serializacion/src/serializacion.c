#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Agregar typedef struct me permite evitar tener que escribir cada vez que quiera una instancia
//de la estructura como struct Alumno y usar solo la definicion de ABAJO q en este caso por coinicidencia 
//tambien esta Alumno pero pudo ser t_Alumno (mejor)
typedef struct Alumno{
  int32_t id_mensaje; //5bytes
  int32_t legajo; //5bytes
  char* nombre; //1bytes por char
  char* apellido; //1byte por char
}  Alumno;


int main(int argc, char *argv[])
{
	Alumno * alu = malloc(sizeof(struct Alumno));
	alu->id_mensaje= 1;
	alu->legajo = 2;
	alu->nombre = malloc(sizeof(char)*5);
	strcpy(alu->nombre, "Juan");

	alu->apellido = malloc(sizeof(char)*5);
	strcpy(alu->apellido, "Pere");

	printf("Enviado es :%i %i %s %s\n", alu->id_mensaje, alu->legajo, alu->nombre, alu->apellido );

	char *bufferEnvio = malloc((sizeof(int32_t)*2) + (sizeof(char)*20));
	memcpy(bufferEnvio, &(alu->id_mensaje), sizeof(int32_t));
	memcpy(bufferEnvio + sizeof(int32_t), &(alu->legajo), sizeof(int32_t));
	memcpy(bufferEnvio + (sizeof(int32_t))*2, (alu->nombre),sizeof(char)*5);
	memcpy(bufferEnvio + (sizeof(int32_t)*2) + (sizeof(char)*5), (alu->apellido), (sizeof(char)*5));

	printf("antes de usar el aluRecibido\n");
	//send() -> reciv() -> llena el bufferRecibo

	Alumno * aluRecibido = malloc(sizeof(struct Alumno));
	aluRecibido->nombre = malloc(sizeof(char)*5);
	aluRecibido->apellido = malloc(sizeof(char)*5);

	memcpy(&(aluRecibido->id_mensaje), bufferEnvio, sizeof(int32_t));
	memcpy(&(aluRecibido->legajo), bufferEnvio + sizeof(int32_t),sizeof(int32_t));
	memcpy((aluRecibido->nombre), bufferEnvio + (sizeof(int32_t)*2), (sizeof(char)*5));
	memcpy((aluRecibido->apellido), bufferEnvio + (sizeof(int32_t)*2) + (sizeof(char)*5), (sizeof(char)*5));

	printf("Recibo es :%i %i %s %s\n", aluRecibido->id_mensaje, aluRecibido->legajo, aluRecibido->nombre, aluRecibido->apellido);

	free(alu->nombre);
	free(alu->apellido);
	free(alu);

	free(aluRecibido->nombre);
	free(aluRecibido->apellido);
	free(aluRecibido);

	free(bufferEnvio);

	//para que no termine la ejecucion
//	while(1){};
	//


	return 0;
}

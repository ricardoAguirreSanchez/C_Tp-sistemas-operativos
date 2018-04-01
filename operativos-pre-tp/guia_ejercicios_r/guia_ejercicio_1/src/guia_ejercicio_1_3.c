///*
// * guia_ejercicio_3.c
// *
// *  Created on: 31/3/2018
// *      Author: utnso
// */
//
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
///*
//*   Separa el mail en un usuario y un dominio.
//*   Ejemplo:
//*   char* mail = "ritchie@ansic.com.ar";
//*   char* user, dominio;
//*   mail_split(mail, &user, &dominio);
//*   =>
//*   user = "ritchie"
//*   dominio = "ansic.com.ar"
//*/
//void mail_split(char* mail, char** user, char** dominio){
//	strcpy(user[0],strsep(&mail,"@"));
//	user[0][strlen(user[0])] = '\0';
//	strcpy(dominio[0],strsep(&mail,"@"));
//	dominio[0][strlen(dominio[0])] = '\0';
//}
//
//
//
//
//int main(void) {
//	char* mail = malloc(sizeof(char)*40 + 1);
//	strcpy(mail,"ritchie@ansic.com.ar");
//	mail[strlen(mail)] = '\0';
//
//	char* usuario = malloc(sizeof(char)*30 + 1);
//	char* dominio = malloc(sizeof(char)*30 + 1);
//
//
//	mail_split(mail,&usuario,&dominio);
//
//	printf("Usuario: %s\n", usuario);
//	printf("Dominio: %s\n", dominio);
//
//
//	free(mail);
//	free(usuario);
//	free(dominio);
//	return 0;
//
//
//}

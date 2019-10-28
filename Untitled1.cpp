/*Proyecto Integrador @2019
Desarrollo de Software
Emiliano
Dante
Karold*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>

struct persona{
	char nombre[30];
	int numero;
	int depto;
	int puesto;
	float sueldo;
};
persona regEmpleados;
FILE* empleados;
int i , num , numRegs , opcion, opcion2;
char desea , seguro;


int main(){
	do{
		printf("***Menu de funciones***\n1-Crear\n2-Expansion\n3-Altas\n4-Bajas\n5-Cambios\n6-Consultas\n7-Catalogo\n8-Nomina\n9-Salir\n");
		puts("Opcion:");
		scanf("%d",&opcion);
		switch(opcion){
			case 1:{
				//crear();
				break;
			}
			case 2:{
				//expansion();
				break;
			}
			case 3:{
				//altas();
				break;
			}
			case 4:{
				//bajas();
				break;
			}
			case 5:{
				//cambios();
				break;
			}
			case 6:{
				//consultas();
				break;
			}
			case 7:{
				//catalogo();
				break;
			}
			case 8:{
				//nomina();
				break;
			}
			case 9:{
				puts("Programa cerrado exitosamente\n");
				break;
			}
			default:
				printf("Letra erronea\n");
				
		}	
	}while(opcion !=9);
	return(0);
}

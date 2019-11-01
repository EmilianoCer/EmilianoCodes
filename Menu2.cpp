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
persona regEmpleado;
FILE* empleados;
int i , num , numRegs , opcion, opcion2;
char desea , seguro;
struct temp;

void crear(FILE*empleados,persona regEmpleado);
void cambios();
void altas();
int main(){
	do{
		system("cls");
		printf("***Menu de funciones***\n1-Crear\n2-Expansion\n3-Altas\n4-Bajas\n5-Cambios\n6-Consultas\n7-Catalogo\n8-Nomina\n9-Salir\n");
		puts("Opcion:");
		scanf("%d",&opcion);
		switch(opcion){
			case 1:{
				crear(empleados,regEmpleado);
				break;
			}
			case 2:{
				//expansion();
				break;
			}
			case 3:{
				altas();
				break;
			}
			case 4:{
				//bajas();
				break;
			}
			case 5:{
				cambios();
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
void crear(FILE*empleados, persona regEmpleado){
	empleados=fopen("C:\\Integradora\\AREMDI.dat","w+b");
	if(empleados==NULL){
		puts("Archivo no encontrado");
	}
	else{
		puts("Cuantos registros se crearan?");
		scanf("%d",&numRegs);
		regEmpleado.numero=0;
		regEmpleado.nombre;
		regEmpleado.depto=0;
		regEmpleado.puesto=0;
		regEmpleado.sueldo=0;
		for(i=1;i<=numRegs;i++){
			fwrite(&regEmpleado,sizeof(persona),1,empleados);
		}
	}
	fclose(empleados);
	
}

void altas(){
	FILE*empleado;
	long int nb,nr;
	empleado=fopen("C:\\Integradora\\AREMDI.dat","r+b");
	if(empleado=NULL){
		puts("Archivo no encontrador");
	}
	else{
		do{
			puts("Ingrese los siguientes datos:\n*Numero");
			scanf("%d",&regEmpleado.numero);
			puts("Nombre:");
			fflush(stdin);
			gets(regEmpleado.nombre);
			puts("Depto:");
			scanf("%d",&regEmpleado.depto);
			puts("Puesto:");
			scanf("%d",&regEmpleado.puesto);
			puts("Sueldo:");
			scanf("%f",&regEmpleado.sueldo);
			fseek(empleado,0,SEEK_END);
			nb=ftell(empleado);
			nr=nb/sizeof(struct persona);
			rewind(empleado);
			fwrite(&regEmpleado,sizeof(struct persona),1,empleado);
		
		}while(desea=='S');
	}
}
void cambios(){
	int numt;
	long int nb, nr;
	FILE* empleado;
	persona temp;
	empleado=fopen("C:\\Integradora\\AREMDI.dat","r+b");
	do{
		fseek(empleado,0,SEEK_END);
		nb=ftell(empleado);
		nr=nb/sizeof(struct persona);
		rewind(empleado);
		printf("Ingrese el numero de trabajador: \n");
		scanf("%d",&numt);
		for(int y=0;y<=nr;y++){
			fread(&temp,sizeof(struct persona),1,empleado);
			if(numt==temp.numero){
				printf("%d\n",regEmpleado.numero);
				printf("%s\n",regEmpleado.nombre);
				printf("%d\n",regEmpleado.depto);
				printf("%d\n",regEmpleado.puesto);
				printf("%f\n",regEmpleado.sueldo);
				printf("Que deseas modificar?:\n1-Nombre\2-Depto\3-Puesto\n4-Sueldo\n");
				scanf("%d",&opcion2);
				while(opcion2>0&&opcion2<=5){
					switch(opcion2){
						case 1:{
							
							puts("Ingrese el nuevo nombre del trabajador\n");
							gets(temp.nombre);
							
							break;
						}
						case 2:{
							
							puts("Ingrese el nuevo depto del trabajador\n");
							scanf("%d",&temp.depto);
							
							break;
						}
						case 3:{
							
							puts("Ingrese el nuevo puesto del trabajador\n");
							scanf("%d",&temp.puesto);
							
							break;
						}
						case 4:{
							
							puts("Ingrese el nuevo sueldo del trabajador\n");
							scanf("%f",&temp.sueldo);
							
							break;
						}
					}
				}
				//Reemplazamos los nuevos datos
				fseek(empleados,-1*sizeof(struct persona),SEEK_CUR);
				fwrite(&temp,sizeof(persona),1,empleado);
					break;
			}
		}
		puts("Desea volver a hacer el proceso?: \n");
		scanf(" %c",&desea);
	}while(desea=='S');
		fclose(empleados);
}



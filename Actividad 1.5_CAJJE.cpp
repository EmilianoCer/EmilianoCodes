#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<MILIBRERIA.h>
#include<windows.h>

int main(){
	//Variables para todo caso
	int opc;
	//Variables caso 1
	//Variables 1er programa
	char frase[80];
	int caracteres_contados;
	//Variables del 2do programa
	char carac;
	int veces_repetidos;
	//Variables del 3er programa
	int numero_vocales;
	//Variables 2do caso
	//Variables 1er programa
	int validacion_curp;
	//Variables 3er caso
	//Variables 1er programa
	char nombre[30], apellido[30];
	//Variables 4to caso
	char contrasenia[30];
	char curp[19];
	
	printf("---Menu---\n\n1°Programas para caracteres\n2°Programas para curp\n3°Funciones de cadena de caracteres\n4°Contrasenia\n\n");
	scanf("%d",&opc);
	switch(opc){
	
		case 1:{
			int opc2;
			printf("\n--------------------------------\n");
			printf("\n1°Determinar la longitud de una cadena de caracteres\n\n2°Determinar la cantidad de letras vocal de una frase\n\n3°Determinar las veces que un caracter se repite en una cadena\n");
			scanf("%d",&opc2);
			switch(opc2){
				case 1:{
					printf("\n-----------------------\n");
					puts("Ingrese la frase");
					fflush(stdin);
					gets(frase);
					caracteres_contados=numero_de_caracteres(frase);
					printf("\nLos caracteres contados son %d",caracteres_contados);
					break;
					}
				case 2:{
					printf("\n-----------------------\n");
					puts("Ingrese la frase");
					fflush(stdin);
					gets(frase);
					numero_vocales=vocales(frase);
					printf("\nEl total de vocales en la frase es de: %d\n",numero_vocales);
					break;
					}	
				case 3:{
					printf("\n-----------------------\n");
					puts("Ingrese la frase");
					fflush(stdin);
					gets(frase);
					puts("Ingresa el caracter a contar");
					scanf(" %c",&carac);
					veces_repetidos=veces_repetidas(frase,carac);
					printf("\nVeces repetidas: %d\n",veces_repetidos);
					break;
					}
			}
			break;
		}
		case 2:{
			int opc3;
			printf("\n--------------------------------\n");
			printf("\n1°Validar una CURP\n2°Dada la CURP, mostrar la fecha de nacimiento de la persona\n3°Dada la CURP, determinar el sexo de la persona\n4°Dada la CURP, mostrar el estado de nacimiento de la persona\n");
			scanf(" %d",&opc3);
			switch(opc3){
				case 1:{
					printf("\n--------------------------------\n");
					puts("Ingrese su curp porfavor:");
					fflush(stdin);
					gets(curp);
					lacurp(curp);
					break;
				}
				case 2:{
					printf("\n--------------------------------\n");
					puts("Ingrese su curp porfavor:");
					fflush(stdin);
					gets(curp);
					anio_curp(curp);
					break;
				}
				case 3:{
					printf("\n--------------------------------\n");
					puts("En dado caso, lamentamos la molestia de haber asumido su genero");
					puts("Ingrese su curp porfavor:");
					fflush(stdin);
					gets(curp);
					sexo_curp(curp);
					break;
				}
				case 4:{
					printf("\n--------------------------------\n");
					puts("Ingrese su curp porfavor:");
					fflush(stdin);
					gets(curp);
					estado_curp(curp);
					break;
				}
			}
			break;
		}
		
		case 3:{
			int opc4;
			printf("\n--------------------------------\n");
			printf("\n1°Convertir una frase a mayusculas\n2°Concatenar Nombre y apellidos en una sola cadena\n3°Determinar el número de espacios en blanco de una cadena\n");
			scanf("%d",&opc4);
			switch(opc4){
				case 1:{
					printf("\n--------------------------------\n");
					puts("Ingrese la frase");
					fflush(stdin);
					gets(frase);
					frase_mayuscula(frase);
					break;
				}
				case 2:{
					printf("\n--------------------------------\n");
					puts("Ingresa tus nombres:");
					fflush(stdin);
					gets(nombre);
					puts("Ingresa tus apellidos:");
					fflush(stdin);
					gets( apellido);
					concatenar_nombre(nombre,apellido);
					break;
				}
				case 3:{
					printf("\n--------------------------------\n");
					puts("Ingrese la frase");
					fflush(stdin);
					gets(frase);
					numero_de_espacios(frase);
					
					break;
				}	
			}
			
			break;
		}
		case 4:{
			printf("\n--------------------------------\n");
			puts("Validaciond de contraseña");
			puts("Ingrese su contrasenia:");
			fflush(stdin);
			gets(contrasenia);
			validar_contra(contrasenia);
			break;
		}
	}
	return(0);
}

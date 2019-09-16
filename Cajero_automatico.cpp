/* MI libreria con terminacion .cpp
Emiliano Cervantes @ 2019
Usuario:Respiraciondelsol
Contraseña:1234
*/
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<windows.h>
#include"mis_funciones.cpp"

int main(){
	//Variables para todo
	int opc,regreso_validacion;
	long int nuevo_saldo;
	char cuenta[50]={"Respiraciondelsol"};
	char nip[20]={"1234"};	
	char cuenta2[50];
	char nip2[20];
	char opc2;
		
		//Inicio validacion cuenta
		puts("Ingresa tu cuenta:");
		fflush(stdin);
		gets(cuenta2);
		puts("Ingresa tu nip:");
		fflush(stdin);
		gets(nip2);
		regreso_validacion=validacion_cuenta(cuenta2,nip2);
		
		if(regreso_validacion==1){
			printf("\nIngreso al sistema [fallido]:\nIngrese sus datos correctamente\n");
		}
		else{
			//Inicio del cajeor automatico
			printf("\nTu saldo inicial es de 5000 pesos mexicanos\n");
			nuevo_saldo=5000;
			//Utilize un do para mejor 
			//comodidad del menu
			do{
			printf("---Menu---\n1°Consultar saldo\n2°Retirar\n3°Depositar\n4°Salir\n");
			scanf("%d",&opc);
			switch(opc){
				
				case 1:{
					//Funcion 1
					saldo_total(nuevo_saldo);
					puts("Desea Hacer otro movimiento?(Y/N)");
					scanf(" %c",&opc2);
					if(opc2=='Y'){
					system("cls");
					}
				break;
				}
				
				case 2:{
					//Funcion 2
					nuevo_saldo=retiro(nuevo_saldo);
					printf("\nTu Actual saldo es de %d\n",nuevo_saldo);
					puts("Desea Hacer otro movimiento?(Y/N)");
					scanf(" %c",&opc2);
					if(opc2=='Y'){
					system("cls");
					}
					break;
				}
				
				case 3:{
					//Funcion 3
					nuevo_saldo=deposito(nuevo_saldo);
					printf("\nTu Actual saldo es de %d\n",nuevo_saldo);
					puts("Desea Hacer otro movimiento?(Y/N)");
					scanf(" %c",&opc2);
					if(opc2=='Y'){
					system("cls");
					}
					
					break;
				}
				
				case 4:{
					//Salida
					printf("\nGracias por probar el programa\n");
					break;
				}
				
				default:
					//Por si la tecla es erronea
					printf("\nNo se encontro una opcion para su numero\n");
					puts("Desea Hacer otro movimiento?(Y/N)");
					scanf(" %c",&opc2);
					if(opc2=='Y'){
					system("cls");
					}
				
			}
			//Condicion que compara dentro de cada case
		}while(opc2!='N'&&opc2!='n'&&opc!=4);
	}
	
	return(0);
}

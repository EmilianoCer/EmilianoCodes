/*Cervantes Alatorre Juan José Emiliano
@2019 Trabajo extra-Archivos de Texto
Desarrollo de Software
Programacion II
3°C
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

//Inicio de la funcion principal
int main(){
	//Declaracion de variables
	int num1 , num2 , resultado;
	FILE* pointer , *pointer2;
	char carac;
	//Apertura de archivo en escritura y lectura
	pointer = fopen("C:\\resultados\\sumas.txt" , "w+a");
	//Validacion #1 del archivo
	if(pointer!=NULL){
		//Saludo e instrucciones
		printf("---Programa #2---\n***Suma de numeros enteros***\n¡Para cerrar el programa solo ingresa dos '0' cuando se requiera\nY se te mostraran los resultados de tus calculos\n");
		//Ingreso de dos primeros numeros para validarlos 
		puts("Ingrese dos numeros enteros: \n");
		scanf("%d %d" , &num1 , &num2);
		//Inicio del while que valida que ambos numeros sean diferente de 0
		while(num1!=0||num2!=0){
			//Proceso de suma y escritura en archivo
				resultado = num1 + num2;
				printf("%d + %d = %d\n" , num1 , num2 , resultado);
				fprintf(pointer , "%d + %d = %d\n" , num1 , num2 , resultado);
				puts("Ingrese otros dos numeros enteros: \n");
				scanf("%d %d" , &num1 , &num2);
		}
		//Cerrar archivo
		fclose(pointer);
		//Abrir archivo para lectura
		pointer2= fopen("C:\\resultados\\sumas.txt" , "r+");
		//Inicio de resultados
		printf("*************************\nEstos son tus resultados\n*************************\n");
		//Validacion #2
		if(pointer2!=NULL){
			//Inicio de while para escribir los resultados
			while(!feof(pointer2)){
				carac=fgetc(pointer2);
				printf("%c",carac);
			}
		}

		else{
		puts("No pude :C");
		}
		//Fin validacion 2
		//Cerrar segundo archivo
		fclose(pointer2);
	}
	else{
		puts("Archivo no encontrado");
	}
	//Fin validacion 1
	
	return(0);
}

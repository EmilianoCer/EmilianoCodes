/*Emiliano Cervantes 
Programacion II
Desarrollo de software
Actividad 2.2
@2019
*/

//Librerias principales
#include<stdio.h>

//Struct principal para la informacion de cada concursante
struct basketball{
	char name[30];
	float height;
	int age;
	
};

//Prototipos de funciones y structs
struct basketball read();
int validation(struct basketball data);
void show_data(struct basketball data2);


//Función principal
int main(){
	//Declaracion de variables de cada tipo
	basketball take_read,sel[10];
	int cont,take_validation;
	FILE* pointer;
	cont=0;
	//Inicio del programa en pantalla
	puts("Selective basketball\n");
	//Lectura de datos y validacion con dos funciones
	do{
		printf("*************************(%d)\n",cont);
		take_read=read();
		take_validation=validation(take_read);
		//Validacion y asignacion de datos al arreglo
		if(take_validation==1){
			sel[cont]=take_read;
			cont++;
		}
	}while(cont<10);
	//Imprimir en pantalla a los concursantes seleccionados
	puts("\n*************************\nLuckys:\n");
	for(cont=0;cont<10;cont++){
		show_data(sel[cont]);
		printf("\n-------------------------\n");
	}
	//Apertura del archivo mediante modo de apertura w
	pointer=fopen("E:\\dataC.txt","w");
	cont=0;
	//Validacion del puntero y a su vez imprimir en el archivo
	//Valida si lo que apunta el puntero no es nulo
	if(pointer!=NULL){
		printf("\n*************************\nThe file has been created\n*************************\n");
		fprintf(pointer,"Accepted contestans:\n");
		do{
			fprintf(pointer,"\n-------------------------\n");
			fprintf(pointer,"Name: %s\n",sel[cont].name);
			fprintf(pointer,"Height: %.2f\n",sel[cont].height);
			fprintf(pointer,"Age: %d\n",sel[cont].age);
		cont++;
		}while(cont<10);
	}
	//Si es nulo te lanza un mensaje de error
	else{
		puts("File could not be created\n");
	}
	
	
	return(0);
}

//Desarrollo de funciones
//Desarrollo del struct que guarda  los datos
struct basketball read(){
	struct basketball choosen;
	printf("Enter your name:\n");
	fflush(stdin);
	gets(choosen.name);
	printf("Enter your height:\n");
	scanf("%f",&choosen.height);
	printf("Enter your age:\n");
	scanf("%d",&choosen.age);
	return(choosen);
}
//Desarrollo de la funcion que valida los datos
int validation(struct basketball data){
	int count;
	count=0;
	if(data.height>=1.70&&data.height<=2.20&&data.age>=18&&data.age<=22){
	count++;	
	}
	return(count);
	
}

//Funcion que muestra los datos en pantalla
void show_data(struct basketball data2){
	printf("These are the %s data\n",data2.name);
	printf("Name:%s\n",data2.name);
	printf("Height:%.2f\n",data2.height);
	printf("Age:%d\n",data2.age);
}

#include<stdlib.h>
#include<string.h>
#include<stdio.h>
struct registro{
	int numero;
	char nombre[40];
	float depto;
	char puesto[20];
	float sueldo;
};
int main(){
	FILE *Empleados;
	struct persona regEmpleado;
	int totEmp, totEmpDep, DeptoProceso, empleados,regempleado;
	float totSueldos, totSueldosDep;
	char seguro;
	Empleados=fopen("C:\\Integradora\\AREMDI.dat","r+b");
	if(Empleados==NULL){
 		puts("Archivo no disponible");
	 }else{
         Empleados=fopen("C:\\Integradora\\AREMDI.dat","r+b");
	 }
	 do{
	  printf("\nIngrese su registro");
	 scanf("%d",&regempleado);
	 fseek(*Empleados,-1,*40);
	 fscanf(*Empleados,regEmpleados);
				printf("%d",regEmpleado.numero);
				puts(regEmpleado.nombre);
				puts(regEmpleado.depto);
				puts(regEmpleado.puesto);
				pust("\nesta seguro?   S/N");
	 			gets(seguro);
		if(seguro==s){
			regEmpleado.numero=0
			regEmpleado.nombre=""
			regEmpleado.depto=0
			regEmpleado.puesto=0
			regEmpleado.sueldo=0
			fseek(*Empleados,-1,*40);
		}
	 
}while(desea=N);
	 fclose(FILE *Empleados);
}

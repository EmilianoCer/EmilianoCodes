#include<stdlib.h>
#include<string.h>
#include<stdio.h>
struct registro{
	int numero;
	char nombre[40];
	char depto;
	char puesto[20];
	float sueldo;
};
int main(){
	FILE *Empleados;
	struct persona regEmpleado;
	int totEmp, totEmpDep, DeptoProceso, empleados,regempleado;
	float totSueldos, totSueldosDep;
	Empleados=fopen("C:\\Integradora\\AREMDI.dat","r+b");
	if(Empleados==NULL){
 		puts("Archivo no disponible");
	 }else{
         Empleados=fopen("C:\\Integradora\\AREMDI.dat","r+b");
	 }
	 totEmp=0;
	 totSueldos=0;
	 fscanf(*Empleados,regEmpleados);
	 while(NOT(EOF(empleados))){
	 	totEmpDep=0;
	 	totSueldosDep=0;
	 	DeptoProceso=regEmpleado.depto;
	 	while(regEmpleado.depto==DeptoProceso&&NOT(eof(empleados))){
	 			printf("\nregistro:\n");
				scanf("%d",&regEmpleado.numero);
 				puts("\nnombre:\n");
				gets(regEmpleado.nombre);
 				puts("\ndepartamento:\n");
				gets(regEmpleado.depto);
				puts("\npuesto:\n");
				gets(regEmpleado.puesto);
				printf("\nsueldo:\n");
				scanf("%f",&regEmpleado.sueldo);
 				fwrite(&regEmpleado,sizeof(struct registro),1,Empleados);
 				totEmpDep=totEmpDep+1;
 				totSueldosDep=totSueldosDep+regEmpleado.sueldo;
 				scanf("%d",empleados);
 				scanf("%d",regempleado);
		 }
	 	printf("%d",totEmpDep);
	 	printf("%f",totSueldosDep);
	 	totEmp=totEmp+totEmpDep;
	 	totSueldos=totSueldos+totSueldosDep;
	 }
	 printf("%d",totEmp);
	 fprintf(*Empleados,"%d",totEmp);
	 printf("%d",totSueldos);
	 fprintf(*Empleados"%d",totSueldos);
	 fclose(FILE *Empleados);
	 system("pause");
}


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
	int totEmp, totEmpDep, DeptoProceso;
	float bruto, inpuesto,neto,totbruto,totbrutodep,totimpuesto,totimpuestodep,totneto,totnetodep,salmin;
	Empleados=fopen("C:\\Integradora\\AREMDI.dat","r+b");
	if(Empleados==NULL){
 		puts("Archivo no disponible");
	 }else{
         Empleados=fopen(""C:\\Integradora\\AREMDI.dat","r+b");
	 }
	 printf("\ningrese salario minimo quincenal\n");
	 scanf("%f",&salmin);
	 //imprimir encabezado
 	fscanf(*Empleados,regEmpleado);
	 while(NOT(EOF(empleados))){
	 	totEmpDep=0;
	 	totbrutodep=0;
	 	totlmpuestodep=0;
	 	totnetodep=0;
	 	DeptoProceso=regEmpleado.depto;
	 	while(regEmpleado.depto==DeptoProceso&&NOT(eof(empleados))){
	 		bruto=regEmpleado.sueldo/2;
	 		if(bruto>salmin){
	 			impuesto=(bruto-salmin)*0.05;
			 }else{
			 	impuesto=0;
			 }
				neto=bruto-impusto;
				printf("%d",regEmpleado.numero);
				puts(regEmpleado.nombre);
				puts(regEmpleado.depto);	
				printf("%f",bruto); 
				printf("%f",impuesto); 
				printf("%f",neto); 
				fscanf(*Empleados,regEmpleado);
		 }
	 	printf("%d",totEmpDep);
	 	printf("%f",totbrutodep);
	 	printf("%f",totimpuestodep);
	 	printf("%f",totnetodep);
	 	totEmp=totEmp+totEmpDep;
	 	totbruto=totbruto+totbrutodep;
	 	totimpuesto=totimpuesto+totimpuestodep;
	 	totneto=totneto+totnetodep;
	 }
	 printf("%d",totEmp);
	 printf("%f",totbruto);
	 printf("%f",totimpuesto);
	 printf("%f",totneto);
	 fclose(FILE *Empleados);
	 system("pause");
}

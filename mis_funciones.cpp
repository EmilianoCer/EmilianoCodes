/* MI libreria con terminacion .cpp
Emiliano Cervantes @ 2019*/
#include<stdio.h>
#include<string.h>

//Prototipos de manera "profesional"
void saldo_total(int);
int validacion_cuenta(char*,char*);
int retiracion(int);
long int deposito(int);



//Desarrollo del deposito
long int deposito(int saldo){
	long int o;
	long long dinero_depositado;
	printf("\nCuanto dinero desea depositar?\n");
	scanf("%ld",&dinero_depositado);
	//Puse 1000000 porque si le agregas un cero de mas te da un numero erroneo
	if(dinero_depositado<0||dinero_depositado>1000000){
		printf("\nCantidad denegada, no puedes depositar una cantidad negativa ,0 o mayor a 1000000\n");
		return(saldo);
	}
	else{
		o=saldo+dinero_depositado;
		return(o);
	}
}

/*Desarrollo del retiro Tenia mis dudas al 
momento de hacer lacondicion
algunos bancos solo permiten retirar
8000 pesos al dia
*/
int retiro(int saldo){
	int o,dinero_retirado;
	printf("\nCuanto dinero desea retirar?\n");
	scanf("%d",&dinero_retirado);
	if(dinero_retirado>saldo){
		printf("\nNo puedes retirar mas del fondo que tienes\n");
		return(saldo);
	}
	if(dinero_retirado<=0){
		printf("\nNo puedes retirar una cantidad negativa\n");
		return(saldo);
	}
	else{
		o=saldo-dinero_retirado;
		return(o);
	}
}




//Desarrollo de mostrar el saldo
void saldo_total(int saldo){
	printf("El saldo es de %d\n",saldo);
}

//Desarrollo de la validacion del ingreso de la cuenta
int validacion_cuenta(char*cuenta3,char*nip3){
	int i=0;
	char cuenta[50]={"Respiraciondelsol"};
	char nip[20]={"1234"};
	if(strcmp(cuenta3,cuenta)==1||strcmp(nip,nip3)==1){
			i++;
		}

	return(i);
}

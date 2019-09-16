#include<stdio.h>
#include<ctype.h>
#include<string.h>


void validar_contra(char *cad){
	int nc=0,i=0,o=0;
	while(cad[i]!=NULL){
		nc++;
		i++;
		if(cad[i]>='A'&&cad[i]<='Z'){
			o++;
		}
	}
	if(nc<=20&&nc>0&&o==1){
		printf("\nSu contraseña es correcta\n");
	}
	else{
		printf("\nContraseña incorrecta\n");
	}
	
}
void numero_de_espacios(char*cad){
	int me=0,i=0;
	while(cad[i]!=NULL){
		if(cad[i]==' '){
			me-=-1;
		}
		i-=-1;
	}
	printf("\nEl numero de espacios es %d\n",me);
	
	
}
void concatenar_nombre(char *cad, char*cad2){
	char nombre_concatenado[80];
	strcpy(nombre_concatenado,cad);
	strcat(nombre_concatenado,cad2);
	puts(nombre_concatenado);
}
void frase_mayuscula(char *cad){
	int i=0;
	while(cad[i]!=NULL){
		printf(" %c",toupper(cad[i]));
		i++;
	}
}
void estado_curp(char *cad){
	if(cad[11]=='A'&&cad[12]=='G'){
		printf("\nUsted pertenece al estado de Aguascaliente\n ");
	}
	if(cad[11]=='B'&&cad[12]=='C'){
		printf("\nUsted pertenece al estado de Baja California\n ");
	}
	if(cad[11]=='B'&&cad[12]=='S'){
		printf("\nUsted pertenece al estado de Baja California Sur \n");
	}
	if(cad[11]=='C'&&cad[12]=='M'){
		printf("\nUsted pertenece al estado de Campeche\n");
	}
	if(cad[11]=='C'&&cad[12]=='S'){
		printf("\nUsted pertenece al estado de Chiapas\n ");
	}
	if(cad[11]=='D'&&cad[12]=='F'){
		printf("\nUsted pertenece al Dsitrito Federal\n ");
	}
	if(cad[11]=='C'&&cad[12]=='O'){
		printf("\nUsted pertenece al estado de Coahuila\n ");
	}
	if(cad[11]=='C'&&cad[12]=='L'){
		printf("\nUsted pertenece al estado de Colima ");
	}
	if(cad[11]=='D'&&cad[12]=='G'){
		printf("\nUsted pertenece al estado de Durango ");
	}
	if(cad[11]=='G'&&cad[12]=='T'){
		printf("\nUsted pertenece al estado de Guanajuato ");
	}
	if(cad[11]=='G'&&cad[12]=='R'){
		printf("\nUsted pertenece al estado de Guerrero\n ");
	}
	if(cad[11]=='H'&&cad[12]=='G'){
		printf("\nUsted pertenece al estado de Hidalgo\n ");
	}
	if(cad[11]=='J'&&cad[12]=='C'){
		printf("\nUsted pertenece al estado de Jalisco\n");
	}
	if(cad[11]=='E'&&cad[12]=='M'){
		printf("\nUsted pertenece al estado de Mexico\n ");
	}
	if(cad[11]=='M'&&cad[12]=='I'){
		printf("\nUsted pertenece al estado de Michoacan\n ");
	}
	if(cad[11]=='M'&&cad[12]=='O'){
		printf("\nUsted pertenece al estado de Morelos\n ");
	}
	if(cad[11]=='N'&&cad[12]=='A'){
		printf("\nUsted pertenece al estado de Nayarit\n ");
	}
	if(cad[11]=='N'&&cad[12]=='L'){
		printf("\nUsted pertenece al estado de Nuevo Leon\n ");
	}
	if(cad[11]=='O'&&cad[12]=='A'){
		printf("\nUsted pertenece al estado de Oaxaca\n ");
	}
	if(cad[11]=='P'&&cad[12]=='U'){
		printf("\nUsted pertenece al estado de Puebla\n ");
	}
	if(cad[11]=='Q'&&cad[12]=='T'){
		printf("\nUsted pertenece al estado de Queretaro\n ");
	}
	if(cad[11]=='Q'&&cad[12]=='R'){
		printf("\nUsted pertenece al estado de Quintana Roo\n ");
	}
	if(cad[11]=='S'&&cad[12]=='L'){
		printf("\nUsted pertenece al estado de San Luis Potosi ");
	}
	if(cad[11]=='S'&&cad[12]=='I'){
		printf("\nUsted pertenece al estado de Sinaloa\n ");
	}
	if(cad[11]=='S'&&cad[12]=='O'){
		printf("\nUsted pertenece al estado de Sonora\n ");
	}
	if(cad[11]=='T'&&cad[12]=='B'){
		printf("\nUsted pertenece al estado de Tabasco\n");
	}
	if(cad[11]=='T'&&cad[12]=='M'){
		printf("\nUsted pertenece al estado de Tamaulipas\n ");
	}
	if(cad[11]=='T'&&cad[12]=='L'){
		printf("\nUsted pertenece al estado de Tlaxcala\n ");
	}
	if(cad[11]=='V'&&cad[12]=='E'){
		printf("\nUsted pertenece al estado de Veracruz\n");
	}
	if(cad[11]=='Y'&&cad[12]=='U'){
		printf("\nUsted pertenece al estado de Yucatan\n ");
	}
	if(cad[11]=='Z'&&cad[12]=='A'){
		printf("\nUsted pertenece al estado de Zacatecas\n ");
	}
	
	
}
void sexo_curp(char *cad){
	if(cad[10]=='H'){
		printf("\nUsted es un hombre\n");
	}
	if(cad[10]=='M'){
		printf("\nUsted es una mujer\n");
	}
	
}
void anio_curp(char *cad){
	printf("\nUsted nacio el %c%c de",cad[8],cad[9]);
	if(cad[6]=='0'&&cad[7]=='1'){
		printf(" Enero");
	}
	if(cad[6]=='0'&&cad[7]=='2'){
		printf(" Febrero");
	}
	if(cad[6]=='0'&&cad[7]=='3'){
		printf(" Marzo");
	}
	if(cad[6]=='0'&&cad[7]=='4'){
		printf(" Abril");
	}
	if(cad[6]=='0'&&cad[7]=='5'){
		printf(" Mayo");
	}
	if(cad[6]=='0'&&cad[7]=='6'){
		printf(" Junio");
	}
	if(cad[6]=='0'&&cad[7]=='7'){
		printf(" Julio");
	}
	if(cad[6]=='0'&&cad[7]=='8'){
		printf(" Agosto");
	}
	if(cad[6]=='0'&&cad[7]=='9'){
		printf(" Septiembre");
	}
	if(cad[6]=='1'&&cad[7]=='0'){
		printf(" Octubre");
	}
	if(cad[6]=='1'&&cad[7]=='1'){
		printf(" Noviembre");
	}
	if(cad[6]=='1'&&cad[7]=='2'){
		printf(" Diciembre");
	}
	printf(" del %c%c",cad[4],cad[5]);
}
void lacurp(char*cad){
	int i=0,n=0;
	while(cad[n]!=NULL){
		if(cad[n]!=NULL){
		i++;
	}
		n++;
	}
	if(i==18){
		printf("\nSu CURP es valida\n");
	}
}
int vocales(char *cad){
	int vocaless=0,k=0;
	while(cad[k]!=NULL){
		if(cad[k]=='a'||cad[k]=='e'||cad[k]=='i'||cad[k]=='o'||cad[k]=='u'||cad[k]=='A'||cad[k]=='E'||cad[k]=='I'||cad[k]=='O'||cad[k]=='U'){
		vocaless++;
		}
		k-=-1;
	}
	return(vocaless);
}
int numero_de_caracteres(char *cad){
	int mc=0,i=0;
	while(cad[i]!=NULL){
		mc-=-1;
		i-=-1;
	}
	return(mc);	
}
int veces_repetidas(char *cad,char Caracter){
	int i=0,num_repe=0;
	while(cad[i]!=NULL){
		if(cad[i]==Caracter){
			num_repe-=-1;
		}
		i-=-1;
	}
	return(num_repe);
}




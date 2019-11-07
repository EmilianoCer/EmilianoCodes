#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
	FILE *fp , *fp2;
	char cambio , sustituto , contenedora;
	char ruta[60];
	puts("Ingresa la ruta de donde quiere trabajar porfavor\n");
	gets(ruta);
	fp = fopen(ruta,"r+");
	fp2 = fopen("C:\\resultados\\salida_NEW.txt","w+");
	if(fp!=NULL&&fp2!=NULL){
		printf("Ingrese el caracter que desea cambiar\n");
		scanf(" %c",&cambio);
		printf("Ingrese el caracter sustituto\n");
		scanf(" %c",&sustituto);
		while(!feof(fp)){
			contenedora=fgetc(fp);
			if(contenedora==cambio){
				fputc(sustituto,fp2);
			}
			else{
				fputc(contenedora,fp2);
			}
		}
	}
	return(0);
}

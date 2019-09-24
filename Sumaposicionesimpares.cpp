/*
Cervantes Alatorre
Juan José Emiliano @2019
Sumar posiciones impares array
*/
#include<stdio.h>	
int main(){
	int N,acumulador=0;
	int array[100];
	scanf("%d",&N);
	
	for(int i=0;i<N;i++){
		scanf("%d",&array[i]);
	}
	for(int i=1;i<=N;i+=2){
		acumulador=acumulador+array[i];
		
	}
	printf("\b|%d",acumulador);
	
	
	
	return(0);
}

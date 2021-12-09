#include <stdio.h>
#include <ctype.h>
#include "scanner.h"

int get_token(){
	int estado_inicial = 0;
    char caracter = getchar();
    if (caracter != EOF){
    	
    	while(isspace(caracter)){
    		caracter = getchar();
    	}
		if(caracter == ','){
    		buffer[0] = ',';
    		return SEP;
		}else{
			do{
				buffer[estado_inicial] = caracter;
				estado_inicial++;
				caracter = getchar();
			}while(isString(caracter));;
			ungetc(caracter,stdin);
			return CAD;
		}
	}
	return FDT;
}

int isString(char caracter){
	if(caracter == ',' || caracter == EOF || isspace(caracter)){
		return 0;
	}return 1;
}
    	
    

#include "scanner.h"

int get_token(char* buffer){
	int estado_inicial = 0;
    char caracter = getchar();
    while (caracter != EOF){
    	if(caracter == SEP){
    		buffer[0]=caracter;
    		buffer[1]='\0';
    		return SEP;
		}else if(caracter == FDT){
			return FDT;
		}else {
			do{
				buffer[estado_inicial] = caracter;
				estado_inicial++;
				caracter = getchar();
			}while(!isspace(caracter));
			buffer[estado_inicial]='\0';
			ungetc(caracter,stdin);
			return CAD;
		}
	}
}
    	
    

#include "scanner.h"
#include "scanner.c"

int main(int argc, const char *argv[]){
	int token;
	do
	{ 
	    token = get_token();
		switch (token){
		case SEP:
		    printf("Separador: %c\n",buffer[0]);
		    break;
		case CAD:
		    printf("Cadena: %s\n", buffer);
			break;
		case FDT:
		    printf("Fin de texto");
			break;
		}
		
	} while (token != FDT);
	
} 


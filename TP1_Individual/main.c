#include "scanner.h"

int main(){
	char buffer [100];
	int token = get_token(buffer);
	do
	{ 
	
		switch (token)
		{
		case CAD:
		    printf("Cadena: %s\n",buffer);
			break;
		case SEP:
		    printf("Separador: %s/n",buffer);
		    break;
		case FDT:
		    printf("Fin de texto");
			break;
		}
		
	} while (token != FDT);
	
	return 0;
	
}
    


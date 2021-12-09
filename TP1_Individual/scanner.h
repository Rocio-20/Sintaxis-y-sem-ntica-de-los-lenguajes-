#ifndef SCANNER_H_INCLUDED
#define SCANNER_H_INCLUDED


enum token{SEP,CAD,FDT};


int get_token();
int isString(char caracter);

char buffer [200];


#endif

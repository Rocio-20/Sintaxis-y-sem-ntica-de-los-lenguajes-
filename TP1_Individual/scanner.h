#ifndef SCANNER_H_INCLUDED
#define SCANNER_H_INCLUDED

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


enum token{SEP,CAD,FDT};


int get_token(char *buffer);


#endif // SCANNER_H_INCLUDED

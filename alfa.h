#ifndef _ALFA_H
#define _ALFA_H
#define MAX_LONG_ID 100
#define MAX_TAMANIO_VECTOR 64


/* otros defines */
typedef struct
{
char lexema[MAX_LONG_ID+1];
int tipo; 
int valor_entero;
int es_direccion;
int etiqueta;
} tipo_atributos;
#endif

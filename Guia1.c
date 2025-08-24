// Guia 1 - C Básica

/*
gcc -Wall -Wextra -pedantic -c Guia1.c -o Guia1.o
gcc -Wall -Wextra -pedantic Guia1.o -o Guia1
*/

#include <stdio.h> // Incluye la biblioteca stdio.h
#include <stdint.h>

/*
int main() { // main es el punto de entrada
printf("Hola Orga!\n"); // imprime en pantalla
return 0; // devuelve un 0 al SO
}
*/

int main() {
char c = 100;
short s = -8712;
int i = 123456;
long l = 1234567890;
printf("char(%lu): %d \n", sizeof(c),c);
printf("short(%lu): %d \n", sizeof(s),s);
printf("int(%lu): %d \n", sizeof(i),i);
printf("long(%lu): %ld \n", sizeof(l),l);

int8_t ocho = 1;
int16_t dieci = 2;
int32_t trenti = 3;
int64_t sesen = 4;

printf("Tamaños de biblioteca stdint: \n");
printf("int8_t: %lu \n", sizeof(ocho));
printf("int16_t: %lu \n", sizeof(dieci));
printf("int32_t: %lu \n", sizeof(trenti));
printf("int64_t: %lu \n", sizeof(sesen));

float efe = 0.1f;
double doble = 0.1;
printf("como Float: %.20f \n", efe);
printf("como Double: %.20lf \n", doble);

int efe_int = (int) efe;
int doble_int = (int) doble;
printf("Float, como Int: %d \n", efe_int);
printf("Double, como int: %d \n", doble_int);

int mensaje_secreto[] = {116, 104, 101, 32, 103, 105, 102, 116, 32, 111,
102, 32, 119, 111, 114, 100, 115, 32, 105, 115, 32, 116, 104, 101, 32,
103, 105, 102, 116, 32, 111, 102, 32, 100, 101, 99, 101, 112, 116, 105,
111, 110, 32, 97, 110, 100, 32, 105, 108, 108, 117, 115, 105, 111, 110};
size_t length = sizeof(mensaje_secreto) / sizeof(int);
char decoded[length];
for (int i = 0; i < length; i++) {
decoded[i] = (char) (mensaje_secreto[i]); // casting de int a char
}
for (int i = 0; i < length; i++) {
printf("%c", decoded[i]);
}

return 0;
}

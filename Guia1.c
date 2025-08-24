// Guia 1 - C Básica

/*
gcc -Wall -Wextra -pedantic -c Guia1.c -o Guia1.o
gcc -Wall -Wextra -pedantic Guia1.o -o Guia1
*/

#include <stdio.h> // Incluye la biblioteca stdio.h
#include <stdint.h>
#include <stdbool.h>

/*
int main() { // main es el punto de entrada
printf("Hola Orga!\n"); // imprime en pantalla
return 0; // devuelve un 0 al SO
}
*/

int main() {
/*
char c = 100;
short s = -8712;
int i = 123456;
long l = 1234567890;
printf("char(%lu): %d \n", sizeof(c),c);
printf("short(%lu): %d \n", sizeof(s),s);
printf("int(%lu): %d \n", sizeof(i),i);
printf("long(%lu): %ld \n", sizeof(l),l);
*/
//Ej 4

int8_t ocho = 1;
int16_t dieci = 2;
int32_t trenti = 3;
int64_t sesen = 4;

printf("Tamaños de biblioteca stdint: \n");
printf("int8_t: %lu \n", sizeof(ocho));
printf("int16_t: %lu \n", sizeof(dieci));
printf("int32_t: %lu \n", sizeof(trenti));
printf("int64_t: %lu \n", sizeof(sesen));

//Ej 5

float efe = 0.1f;
double doble = 0.1;
printf("como Float: %.20f \n", efe);
printf("como Double: %.20lf \n", doble);

int efe_int = (int) efe;
int doble_int = (int) doble;
printf("Float, como Int: %d \n", efe_int);
printf("Double, como int: %d \n", doble_int);

// Ej 6
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

//Ej 7

int a = 5;
int b = 3;
int c = 2;
int d = 1;

int dos = a + b * c / d; //esperado = 10
int tres = a % b; //esperado = 2
bool cuatro_a = a == b; //esperado = False
bool cuatro_b = a != b; //esperado = True
int cinco_a = a & b; //esperado = 1
int cinco_b = a | b; //esperado = 7
int seis = ~a; //esperado = ni idea, 2^n - 5, n siendo la cantidad de bytes
int siete_a = a && b; //esperado = error
int siete_b = a || b; //esperado = error
int octo = a << 1; //esperado = 10
int nueve = a >> 1; //esperado = 2

printf("\n \n Ejercicio 7: \n \n");
printf("A: a + b * c / d = %d\n", dos);
printf("B: a mod b = %d\n", tres);
printf("C_1: a == b = %d\n", cuatro_a);
printf("C_2: a != b = %d\n", cuatro_b);
printf("D_1: a & b = %x\n", cinco_a);
printf("D_2: a | b = %x\n", cinco_b);
printf("E: ~a = %x\n", seis);
printf("F_1: a && b = %d\n", siete_a);
printf("E: a || b = %d\n", siete_b);
printf("E: a << 1 = %d\n", octo);
printf("E: a >> 1 = %d\n", nueve);

//Ej 8
printf("\n \n Ejercicio 8: \n \n");
int i = 1;
printf("i = %d \n", i++);
printf("i = %d \n", ++i);
printf("i = %d \n", i);

//Ej 11
printf("\n \n Ejercicio 11: \n \n");
int arr11[] = {1,2,3,4};
int temp = arr11[0];
int i11 = 2;
int arr11Nuevo[4];
while(i11 >= 0) {
    arr11Nuevo[i11] = arr11[i11+1];
    i11--;
}
arr11Nuevo[3] = temp;

for(i = 0; i<4;i++) {
    printf("Elem %d es: %d \n", i, arr11Nuevo[i]);
}

return 0;
}

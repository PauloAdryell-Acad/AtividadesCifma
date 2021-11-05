/* Escreva um programa que declare um array de inteiros e um ponteiro para inteiros. Associe
o ponteiro ao array. Agora, some mais um (+1) a cada posição do array usando o ponteiro */

#include <stdio.h>
int main(){
    int array[] = {1,2,3,4};
    int *arr = array;

    for (int i =0; i<4; i++){
        arr = &array[i];

        /*printf("[%i]", *&arr++);*/
        printf("V[%i] = %i\r\n", i, *(arr));
    };

}

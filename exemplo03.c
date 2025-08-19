#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE * fp; // fp é um pontyeiro de arquivo
    fp=fopen("textinho.txt","w"); // abre teste.txt para escrit

    if(fp == NULL){
        printf("erro ao abrir")
    }
    exit(1);
}
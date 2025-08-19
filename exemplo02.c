#include <stdio.h>

int main(){
    FILE * fp; // fp é um pontyeiro de arquivo
    fp=fopen("abc/teste.txt","w"); // abre teste.txt para escrit

    if(fp == NULL){
        printf("erro ao abrir")
    }
    exit(1);
}
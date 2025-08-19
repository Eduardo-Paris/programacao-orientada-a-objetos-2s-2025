#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAT_TXT 256

int main(int argc, char* argv[]){

 char texto[MAX_TXT];
 FILE *arq = fopen(argv[1], "a");

 if(arq == NULL){
    printf("erro ao abrir arquivo");
    return 1;
}

if(fp == NULL) {
    printf("ERRO: ARQUIVO N FOI ABERTO");
    exit(1);
}

int i;

fprintf(fp, "Tabuada do 7: \n\n");

for (i = 1; i <= 10; i ++){
fprintf(fp, "7 x %d =%d\n", i, 7* i);
}

fprintf(fp, "Tabuada do 9: \n\n");
for (i = 1; i <= 10; i ++){
fprintf(fp, "7 x %d =%d\n", i, 9* i);
}

strcat(texto, argv[2]);
strcat(texto, "\n");
fprint(arq, texto);

fclose(arq);

    return 0;

}
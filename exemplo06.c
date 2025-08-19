#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE * fp; //fp é um ponteiro pra arquivo
    fp = fopen("bd.txt","r"); // "r" = read (ler)

    if (fp ==  NULL) {
        printf("ERRO: arquivo N foi abrtto!\n");
        exit(1);

    }

    int onta;
    float Saldo;

    char Nome [50];

 while(fscanf(fp, "%d %f %[^\n]\n", &Conta, &Saldo, Nome) == 3);


for(int i = 0; i < 4; i++)  {
  
  
  ;
  printf("%d\t%.2f\t%s\n", Conta, Saldo, Nome);

}

fclose(fp);
return 0; 
}
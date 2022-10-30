// A linguagem C é de uso geral, compilada, com verificação estática dos tipos de dados.



// =================================================
// AULA 1  : LINGUAGEM DE PROGRAMAÇÃO EM C         =
// PROF    : ELOY                                  =
// ALUNO   : Mário Diego                           =
// Curso   : Sistemas de Inofrmação                =
// =================================================


//library(Rcpp)

#include <Rcpp.h>
#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 
#define PERCENT1 20
#define PERCENT2 15
//
// Calculo de Salários
//

int main()
{
  setlocale(LC_ALL, "Portuguese");
  float Salario1 = 1500.0;
  float Salario2 = 1200.0;
  float Aumento1, Novo_Salario1;
  float Aumento2, Novo_Salario2;
  Aumento1 = (Salario1*PERCENT1)/100;
  Aumento2 = (Salario2*PERCENT2)/100;
  Novo_Salario1 = Salario1+Aumento1;
  Novo_Salario2 = Salario2+Aumento2;
  printf("===== SALÁRIO A =================== \n"); 
  printf("Salário1: %5.1f\n", Salario1, "\n");
  printf("Aumento1: %f \nNovo Salario: %5.2f %s \n",Aumento1,Novo_Salario1, "\n");
  printf("===== SALÁRIO B =================== \n"); 
  printf("Salário2: %5.1f\n", Salario2, "\n");
  printf("Aumento2: %f \nNovo Salario: %5.2f \n",Aumento2,Novo_Salario2, "\n");
  printf("===== FECHAMENTO DE FOLHA ========="); 
  printf("\n");
}






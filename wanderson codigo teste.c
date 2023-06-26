#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
  char nome[50], profissao[100], resposta[5], nome_arquivo[100];
  int ano;

  // Tela de inicialização
  printf("Bem-vindo ao sistema!\n\n");

  // Painel de login
  printf("Por favor, entre com suas informacoes de login:\n\n");
  printf("Nome: ");
  scanf("%s", nome);
  printf("Profissao: ");
  scanf("%s", profissao);
  printf("ano de nascimento: ");
  scanf("%d",& ano);
  printf("idade: %d",idade);
  
  // Verifica a idade
  int ano_atual = 2023;
  int idade_calculada;
  int idade; 
  
  idade = 2023 - ano;
  
  if (idade < 18) {
  printf("\n Você não tem idade suficiente para continuar.\n"); 
}
  return 0;

  // Cria a pasta 'index' se ela ainda não existe
  mkdir("index");

  // Salva as informações em um arquivo
  sprintf(nome_arquivo, "index /%s.txt", nome);
  FILE* arquivo = fopen(nome_arquivo, "w");
  fprintf(arquivo, "Nome: %s \n", nome);
  fprintf(arquivo, "Profissao: %s \n", profissao);
  fprintf(arquivo, "Data de nascimento: %d,%d,%d \n", idade, 01, ano_nascimento);
  fclose(arquivo);

  // Pergunta sobre o emprego
  printf("\n Voce quer um emprego onde trabalhara 20 horas? (sim/nao): ");
  scanf("%s", resposta);

  // Verifica a resposta
    if (strcmp(resposta, "nao") == 0) {
    printf("\n Voce perdeu uma excelente oportunidade de emprego.\n");
    return 0;
  } else if (strcmp(resposta, "sim") == 0) {
    printf("\nVoce trabalhara 1 vez por mes e ganhara 40 mil reais.\n");
  } else {
    printf("\nResposta invalida.\n");
    return 0;
  }

  // Pergunta sobre o contrato
  printf("\nVoce quer assinar um contrato conosco? (sim/nao): ");
  scanf("%s", resposta);

  // Verifica a resposta
  if (strcmp(resposta, "nao") == 0) {
    printf("\nProcesso encerrado.\n");
    return 0;
  } else if (strcmp(resposta, "sim") == 0) {
    printf("\nDigite seu nome: ");
    scanf("%s", nome);
    sprintf(nome_arquivo, "index/%s.txt", nome);
    arquivo = fopen(nome_arquivo, "a");
    fprintf(arquivo, "Nome: %s\n", nome);
    fclose(arquivo);
    printf("\nProcesso encerrado.\n");
    return 0;
  } else {
    printf("\nResposta invalida.\n");
    return 0;
  }
}

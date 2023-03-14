/*****************************************************************//**
 * \file   Funcoes.h
 * \brief  Assinatura das funções e definição das structs
 * 
 * \author André Jardin
 * \date   March 2023
 *********************************************************************/

#include <stdlib.h>

#pragma once

#ifndef DADOS2
#define DADOS2

#define size 50
#define N 9



typedef struct MeioDeTransporte {

	char nome[size];
	int custo;
	int cargaDaBateria;
	char localizacao[size];
	int autonomia;

}MeioDeTransporte;

typedef struct Cliente {

	char Nome[size];
	char NIF[N];
	int saldo;
	char Morada[size];

}Cliente;

typedef struct Gestor {

	char Nome[size];

}Gestor;

MeioDeTransporte* criaTransporte(char nome[], int custo, int cargaDaBateria, char localizacao[], int autonomia);
Cliente* criaCliente(char nome[], char NIF[], int saldo, char morada[]);
Gestor* criarGestor(char nome[]);

int* removerCliente(Cliente arr[], int pos);


#endif 



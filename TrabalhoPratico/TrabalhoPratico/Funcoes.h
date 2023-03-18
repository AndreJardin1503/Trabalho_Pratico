/*****************************************************************//**
 * \file   Funcoes.h
 * \brief  Assinatura das funções e definição das structs
 * 
 * \author André Jardin
 * \date   March 2023
 *********************************************************************/

#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

#pragma once

#ifndef DADOS2
#define DADOS2

#define size 50
#define N 9

#pragma region structs

typedef struct MeioDeTransporte {

	char nome[size];
	int custo;
	int cargaDaBateria;
	char localizacao[size];
	int autonomia;
	int cod;

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

typedef struct Registo {

	char NIF;
	int cod;
	int tempo;
	int custo;

}Registo;

#pragma endregion

MeioDeTransporte* criaTransporte(char nome[], int custo, int cargaDaBateria, char localizacao[], int autonomia, int cod);
Cliente* criaCliente(char nome[], char NIF[], int saldo, char morada[]);
Gestor* criarGestor(char nome[]);

bool removerCliente(Cliente* arr[], char NIF[]);
bool removerGestor(Gestor* arr[], char nome[]);
bool removerMeioDeTransporte(MeioDeTransporte* arr[],int cod);

bool alterarCliente(Cliente* arr[], int parametro, int NIF);
bool alterarTransporte(MeioDeTransporte* arr[], int parametro, int cod);

bool LerFicheiroClientesTXT(Cliente* cliente[], char filename[]);
bool LerFicheiroTransportesTXT(MeioDeTransporte* transporte[], char filename[]);
bool LerFicheiroAluguerTXT(Registo* aluguer[], char filename[]);




#endif 



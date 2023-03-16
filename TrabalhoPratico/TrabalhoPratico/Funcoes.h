/*****************************************************************//**
 * \file   Funcoes.h
 * \brief  Assinatura das fun��es e defini��o das structs
 * 
 * \author Andr� Jardin
 * \date   March 2023
 *********************************************************************/

#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

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
	int cod[size];

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

#pragma endregion

MeioDeTransporte* criaTransporte(char nome[], int custo, int cargaDaBateria, char localizacao[], int autonomia, int cod[]);
Cliente* criaCliente(char nome[], char NIF[], int saldo, char morada[]);
Gestor* criarGestor(char nome[]);

bool removerCliente(Cliente* arr[], char NIF[]);
bool removerGestor(Gestor* arr[], char nome[]);
bool removerMeioDeTransporte(MeioDeTransporte* arr[],int cod[]);

bool alterarCliente(Cliente* arr[], int parametro, int NIF);
bool alterarTransporte(MeioDeTransporte* arr[], int parametro, int cod[]);





#endif 



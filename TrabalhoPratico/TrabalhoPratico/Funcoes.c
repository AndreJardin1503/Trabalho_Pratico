/*****************************************************************//**
 * \file   Funcoes.c
 * \brief  Funcoes utilizadas no programa
 * 
 * \author André Jardin
 * \date   March 2023
 *********************************************************************/


#include "Funcoes.h"

/**
 * . função que cria um novo Transporte
 * 
 * \param nome
 * \param custo
 * \param cargaDaBateria
 * \param localizacao
 * \param autonomia
 * \return struct de transporte
 */

MeioDeTransporte* criaTransporte(char nome[], int custo, int cargaDaBateria, char localizacao[], int autonomia) {

	MeioDeTransporte* novoTransporte = (MeioDeTransporte*)malloc(sizeof(MeioDeTransporte));

	strcpy(novoTransporte->nome, nome);
	novoTransporte->custo = custo;
	novoTransporte->cargaDaBateria = cargaDaBateria;
	strcpy(novoTransporte->localizacao, localizacao);
	novoTransporte->autonomia = autonomia;

	return novoTransporte;
}

/**
 * .funçao que regista um novo cliente
 * 
 * \param nome
 * \param NIF
 * \param saldo
 * \param morada
 * \return um novo cliente
 */


Cliente* criaCliente(char nome[], char NIF[], int saldo, char morada[]) {

	Cliente* novoCliente = (Cliente*)malloc(sizeof(Cliente));

	strcpy(novoCliente->Nome, nome);
	strcpy(novoCliente->NIF,NIF);
	novoCliente->saldo = saldo;
	strcpy(novoCliente->Morada,morada);

	return novoCliente;
}

/**
 * . função que cria um novo gestor
 * 
 * \param nome
 * \return uma nova struct gestor
 */

Gestor* criarGestor(char nome[]) {

	Gestor* novoGestor = (Gestor*)malloc(sizeof(Gestor));

	strcpy(novoGestor->Nome, nome);
	
	return novoGestor;
}

Cliente* removerCliente(Cliente* arr[], char nome[])
{
	int i, j;

	for (i = 0; i < size; i++) {

		if (arr[i]->Nome == nome) {

			for (j = 1; j < size - 1; j++) {

				strcpy(arr[j]->Nome, arr[j + 1]->Nome);
				strcpy(arr[j]->NIF, arr[j + 1]->NIF);
				strcpy(arr[j]->Morada, arr[j + 1]->Morada);
				arr[j]->saldo = arr[j + 1]->saldo;
			}
		}
	}

	return arr;

}

Gestor* removerGestor(Gestor* arr[], char nome[])
{
	int i, j;

	for (i = 0; i < size; i++) {

		if (arr[i]->Nome == nome) {

			for (j = 1; j < size - 1; j++) {

				strcpy(arr[j]->Nome, arr[j + 1]->Nome);
				
			}
		}
	}

	return arr;
}

MeioDeTransporte* removerMeioDeTransporte(MeioDeTransporte* arr[], char nome[])
{
	int i, j;

	for (i = 0; i < size; i++) {

		if (arr[i]->nome == nome) {

			for (j = 1; j < size - 1; j++) {

				strcpy(arr[j]->nome, arr[j + 1]->nome);
				strcpy(arr[j]->localizacao, arr[j + 1]->localizacao);
				arr[j]->custo = arr[j + 1]->custo;
				arr[j]->cargaDaBateria = arr[j + 1]->cargaDaBateria;
				arr[j]->autonomia = arr[j + 1]->autonomia;
			}
		}
	}

	return arr;
}

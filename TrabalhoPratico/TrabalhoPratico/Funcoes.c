/*****************************************************************//**
 * \file   Funcoes.c
 * \brief  Funcoes utilizadas no programa
 *
 * \author André Jardin
 * \date   March 2023
 *********************************************************************/


#include "Funcoes.h"

 /**
  * . funcao que cria um transporte
  *
  * \param nome
  * \param custo
  * \param cargaDaBateria
  * \param localizacao
  * \param autonomia
  * \param cod
  * \return
  */

MeioDeTransporte* criaTransporte(char nome[], int custo, int cargaDaBateria, char localizacao[], int autonomia, int cod[]) {

	MeioDeTransporte* novoTransporte = (MeioDeTransporte*)malloc(sizeof(MeioDeTransporte));

	strcpy(novoTransporte->nome, nome);
	novoTransporte->custo = custo;
	novoTransporte->cargaDaBateria = cargaDaBateria;
	strcpy(novoTransporte->localizacao, localizacao);
	novoTransporte->autonomia = autonomia;
	novoTransporte->cod == cod;

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
	strcpy(novoCliente->NIF, NIF);
	novoCliente->saldo = saldo;
	strcpy(novoCliente->Morada, morada);

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

/**
 * . função que remove um cliente
 *
 * \param arr
 * \param nome
 * \return
 */

bool removerCliente(Cliente* arr[], char NIF[])
{
	int i, j;

	for (i = 0; i < size; i++) {

		if (arr[i]->NIF == NIF) {

			for (j = 1; j < size - 1; j++) {

				strcpy(arr[j]->Nome, arr[j + 1]->Nome);
				strcpy(arr[j]->NIF, arr[j + 1]->NIF);
				strcpy(arr[j]->Morada, arr[j + 1]->Morada);
				arr[j]->saldo = arr[j + 1]->saldo;
			}

			return true;

		}
	}

	return false;

}

/**
 * . funçao que remove um gestor
 *
 * \param arr
 * \param nome
 * \return
 */

bool removerGestor(Gestor* arr[], char nome[])
{
	int i, j;

	for (i = 0; i < size; i++) {

		if (arr[i]->Nome == nome) {

			for (j = 1; j < size - 1; j++) {

				strcpy(arr[j]->Nome, arr[j + 1]->Nome);

			}

			return true;
		}
	}

	return false;
}

/**
 * . funcao que remove um meio de transporte
 *
 * \param arr
 * \param cod
 * \return
 */

bool removerMeioDeTransporte(MeioDeTransporte* arr[], int cod[])
{
	int i, j;

	for (i = 0; i < size; i++) {

		if (arr[i]->cod == cod) {

			for (j = 1; j < size - 1; j++) {

				strcpy(arr[j]->nome, arr[j + 1]->nome);
				strcpy(arr[j]->localizacao, arr[j + 1]->localizacao);
				arr[j]->custo = arr[j + 1]->custo;
				arr[j]->cargaDaBateria = arr[j + 1]->cargaDaBateria;
				arr[j]->autonomia = arr[j + 1]->autonomia;
				arr[j]->cod == arr[j + 1]->cod;
			}

			return true;

		}
	}

	return false;
}

/**
 * . altera alguma informação de um cliente em específico
 *
 * \param arr
 * \param parametro
 * \param NIF
 * \return
 */


bool alterarCliente(Cliente* arr[], int parametro, int NIF) {

	int i, j;

	for (i = 0; i < size; i++) {

		if (arr[i]->NIF == NIF) {

			if (parametro == 1) { //nome

				char nome[size];

				printf("Quer alterar o nome para qual?");
				scanf_s("&s", &nome);

				strcpy(arr[i]->Nome, nome);
			}

			if (parametro == 2) { //saldo

				int saldo;

				printf("Qual é o novo saldo desta pessoa?");
				scanf_s("%d", &saldo);

				arr[i]->saldo = saldo;
			}
			if (parametro == 3) { //morada

				char morada[size];

				printf("Qual a nova morada desta pessoa?");
				scanf_s("%s", &morada);

				strcpy(arr[i]->Morada, morada);

			}

			return true;

		}

		else { printf("Este cliente nao esta registado"); }
	}

}

bool alterarTransporte(MeioDeTransporte* arr[], int parametro, int cod) {

	int i, j;

	for (i = 0; i < size; i++) {

		if (arr[i]->cod == cod) {

			if (parametro == 1) { //nome

				char nome[size];

				printf("Quer alterar o nome para qual?");
				scanf_s("&s", &nome);

				strcpy(arr[i]->nome, nome);

			}
			if (parametro == 2) { //custo

				int custo;

				printf("Quer alterar o custo para qual?");
				scanf_s("&d", &custo);

				arr[i]->custo = custo;

			}
			if (parametro == 3) { //bateria

				int bateria;

				printf("Quer alterar a bateria para qual?");
				scanf_s("&d", &bateria);

				arr[i]->cargaDaBateria = bateria;

			}
			if (parametro == 4) { //localizacao

				char localizacao[size];

				printf("Quer alterar a localizacao para qual?");
				scanf_s("&s", &localizacao);

				strcpy(arr[i]->localizacao, localizacao);

			}
			if (parametro == 5) { //autonomia

				int autonomia;

				printf("Quer alterar a autonomia para qual?");
				scanf_s("&d", &autonomia);

				arr[i]->autonomia = autonomia;

			}
		}
	}



	return false;
}


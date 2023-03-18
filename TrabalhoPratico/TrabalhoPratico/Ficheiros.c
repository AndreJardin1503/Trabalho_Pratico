/*****************************************************************//**
 * \file   Ficheiros.c
 * \brief  Funçoes que envolvem leitura e escrita de ficheiros
 * 
 * \author André Jardin
 * \date   March 2023
 *********************************************************************/

#include "Funcoes.h"


bool LerFicheiroClientesTXT(Cliente *cliente[], char filename[]) {

	FILE* f1;
	
	

	f1 = fopen(filename, "r");

	if (f1 == NULL) {

		perror("Erro ao abrir o ficheiro");

	}

	else {

		for (int i = 0; i < size; i++) {

			fscanf(f1,"%s;%s;%d;%s\n",cliente[i]->Nome, cliente[i]->NIF, cliente[i]->saldo, cliente[i]->Morada);		

		}
		fclose(filename);
		return true;
	}
					
}

bool LerFicheiroTransportesTXT(MeioDeTransporte* transporte[], char filename[]) {

	FILE* f1;



	f1 = fopen(filename, "r");

	if (f1 == NULL) {

		perror("Erro ao abrir o ficheiro");

	}

	else {

		for (int i = 0; i < size; i++) {

			fscanf(f1, "%s;%d;%d;%s;%d;%d\n", transporte[i]->nome, transporte[i]->custo, transporte[i]->cargaDaBateria, transporte[i]->localizacao, transporte[i]->autonomia, transporte[i]->cod);

		}
		fclose(filename);
		return true;
	}

}

bool LerFicheiroAluguerTXT(Registo* aluguer[], char filename[]) {

	FILE* f1;



	f1 = fopen(filename, "r");

	if (f1 == NULL) {

		perror("Erro ao abrir o ficheiro");

	}

	else {

		for (int i = 0; i < size; i++) {

			fscanf(f1, "%s;%d;%d;%d;\n", aluguer[i]->NIF, aluguer[i]->cod, aluguer[i]->custo, aluguer[i]->tempo);

		}
		fclose(filename);
		return true;
	}

}


bool EscreverClientesBin(Cliente* cliente[], char filename[]){

	FILE* f1;

	f1 = fopen(filename, "wb");

	if (f1 == NULL) {

		perror("Erro ao abrir o ficheiro");

	}

	else {

		for (int i = 0; i < size; i++) {
		
			fwrite(cliente[i]->Nome,1,sizeof(cliente), f1);
			fwrite(cliente[i]->NIF, 1, sizeof(cliente), f1);
			fwrite(cliente[i]->saldo, 1, sizeof(cliente), f1);
			fwrite(cliente[i]->Morada, 1, sizeof(cliente), f1);
		}

		return true;
	}

}

bool EscreverTransportesBin(MeioDeTransporte* transporte[], char filename[]) {

	FILE* f1;

	f1 = fopen(filename, "wb");

	if (f1 == NULL) {

		perror("Erro ao abrir o ficheiro");

	}

	else {

		for (int i = 0; i < size; i++) {

			fwrite(transporte[i]->nome, 1, sizeof(transporte), f1);
			fwrite(transporte[i]->custo, 1, sizeof(transporte), f1);
			fwrite(transporte[i]->cargaDaBateria, 1, sizeof(transporte), f1);
			fwrite(transporte[i]->localizacao, 1, sizeof(transporte), f1);
			fwrite(transporte[i]->autonomia, 1, sizeof(transporte), f1);
			fwrite(transporte[i]->cod, 1, sizeof(transporte), f1);
		}

		return true;
	}

}

bool EscreverRegistoBin(Registo* aluguer[], char filename[]) {

	FILE* f1;

	f1 = fopen(filename, "wb");

	if (f1 == NULL) {

		perror("Erro ao abrir o ficheiro");

	}

	else {

		for (int i = 0; i < size; i++) {

			fwrite(aluguer[i]->NIF, 1, sizeof(aluguer), f1);
			fwrite(aluguer[i]->cod, 1, sizeof(aluguer), f1);
			fwrite(aluguer[i]->tempo, 1, sizeof(aluguer), f1);
			fwrite(aluguer[i]->custo, 1, sizeof(aluguer), f1);
		}

		return true;
	}

}

bool LerClientesBin(Cliente* cliente[], char filename[]) {

	FILE* f1;

	f1 = fopen(filename, "rb");

	if (f1 == NULL) {

		perror("Erro ao abrir o ficheiro");

	}

	else {

		for (int i = 0; i < size; i++) {

			fread(cliente[i]->Nome, 1, sizeof(cliente), f1);
			fread(cliente[i]->NIF, 1, sizeof(cliente), f1);
			fread(cliente[i]->saldo, 1, sizeof(cliente), f1);
			fread(cliente[i]->Morada, 1, sizeof(cliente), f1);
		}

		return true;
	}

}

bool LerTransportesBin(MeioDeTransporte* transporte[], char filename[]) {

	FILE* f1;

	f1 = fopen(filename, "rb");

	if (f1 == NULL) {

		perror("Erro ao abrir o ficheiro");

	}

	else {

		for (int i = 0; i < size; i++) {

			fread(transporte[i]->nome, 1, sizeof(transporte), f1);
			fread(transporte[i]->custo, 1, sizeof(transporte), f1);
			fread(transporte[i]->cargaDaBateria, 1, sizeof(transporte), f1);
			fread(transporte[i]->localizacao, 1, sizeof(transporte), f1);
			fread(transporte[i]->autonomia, 1, sizeof(transporte), f1);
			fread(transporte[i]->cod, 1, sizeof(transporte), f1);
		}

		return true;
	}

}

bool LerRegistoBin(Registo* aluguer[], char filename[]) {

	FILE* f1;

	f1 = fopen(filename, "rb");

	if (f1 == NULL) {

		perror("Erro ao abrir o ficheiro");

	}

	else {

		for (int i = 0; i < size; i++) {

			fread(aluguer[i]->NIF, 1, sizeof(aluguer), f1);
			fread(aluguer[i]->cod, 1, sizeof(aluguer), f1);
			fread(aluguer[i]->tempo, 1, sizeof(aluguer), f1);
			fread(aluguer[i]->custo, 1, sizeof(aluguer), f1);
		}

		return true;
	}

}
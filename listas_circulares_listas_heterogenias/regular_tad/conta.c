#include <stdio.h>
#include <stdlib.h>
#include "conta.h"

struct Conta {
	int numero;
	float saldo;
};

Conta* criarConta(int numero, float saldoInicial){
	Conta* c = (Conta*) malloc(sizeof(Conta));
	c->numero = numero;
	c->saldo = saldoInicial;
	return c;
}

void depositar(Conta* c, float valor){
	c->saldo += valor;
}

int sacar(Conta* c, float valor){
	if (valor > c->saldo){
		return 0;
	}

	c->saldo -= valor;
	return 1;
}

float consultarSaldo(Conta* c){
	return c->saldo;
}

void destruirConta(Conta* c){
	free(c);
}

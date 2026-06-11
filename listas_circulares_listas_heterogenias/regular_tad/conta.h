#ifndef CONTA_H
#define CONTA_H

typedef struct Conta Conta;

Conta* criarConta(int numero, float saldoInicial);
void depositar(Conta* c, float valor);
int sacar(Conta* c, float valor);
float consultarSaldo(Conta* c);
void destruirConta(Conta* c);

#endif

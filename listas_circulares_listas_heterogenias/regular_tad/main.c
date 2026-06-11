#include <stdio.h>
#include "conta.h"

int main() {
	Conta* conta = criarConta(123, 1000.0);

	depositar(conta, 500);
	sacar(conta, 200);
	printf("Saldo: %.2f\n", consultarSaldo(conta));

	destruirConta(conta);

	return 0;
}

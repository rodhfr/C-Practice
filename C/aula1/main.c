#INCLUDE "vetor.h"

int main()
{
	vetord* v = cria_vetor(10);
	altera(v,5,2.5f);
	print(v);
	int p;
	if (busca(v,2.5f,&p))
		print("posicao %d", p);
	libera(v)
}

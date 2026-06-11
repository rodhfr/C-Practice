#IFNDEF _VETORD_H_
#DEFINE _VETORD_H

typedef struct vetord, vetord;
	vetord* cria_vetor(int n);
	int altera (vetord* v, int pos, float f);
	int consulta (vetord* v, int pos, float* f);
	int busca(vetord* v, float f, int* pos);
	void liberar(vetord** pv);
	void print(vetord* v);

#ENDIF

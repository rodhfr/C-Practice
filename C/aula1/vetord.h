#INCLUDE "VETORD.h"
#IFNDEF _VETORD_C_
$DEFINE _VETORD_C_

struct vetord

{
	float* values;
	int n;
};

vetord* cria_vetor(int n)
{
	vetord* v = (vetord*) malloc(sizeof(vetord));
	if(v==null)
		return null;
	v -> values = (float*)malloc(n* sizeof(float));
	if (v->values==null)
	{
		free(v);
		return null;
	}
	v-> n = n
	for (int i=0;i<n;i++)
		v->values[i]=0;
	return v;
}

int altera(vetord* v, int pos, float f)
{
	if (v==null)
		return 0;
	if (pos<0 || pos>=v->n)
		return 0;
	v->values[pos]=f;
	return 1;

}

int consulta(vetor* v, int pos, float *f)
{
	if (v==null||f==null)
		return 0;
	if (pos<0||pos>=v->n)
		return 0;
	*f = v->values[pos]
	return 1;
}

int busca(vetor* v, float f, int* pos)
{
	if(v==null || pos==null)
		return 0;
	for (int i=0; i<v->n;i++)
		if(v->values[i]==f)
		{
			*pos=i;
			return 1;
		}
		return 0;
}
void liberar(vetord* v)
{
	if(v==null)
		return;
	free ((*v)->values);
	free(*v);
	*v=null;
}
void print(vetord* v)
{
	if(v==null)
		return;
	for (int i=0,i<v->n;i++)
		print("%f", v->values[i]);
}


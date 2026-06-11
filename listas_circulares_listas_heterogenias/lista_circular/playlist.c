#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "playlist.h"
#include <unistd.h>

struct Musica {
	char nome[50];
	struct Musica* prox;
};

Musica* criarMusica(const char* nome) {
	Musica* m = malloc(sizeof(Musica));
	strcpy(m->nome, nome);
	m->prox = NULL;
	return m;
}

void inserirMusica(Musica** inicio, Musica* nova){
	if (*inicio == NULL){
		*inicio = nova;
		nova->prox = nova;
		return;
	}
	Musica* temp = *inicio;

	while(temp->prox != *inicio){
		temp = temp->prox;
	}

	temp ->prox = nova;
	nova->prox = *inicio;
}

void tocarPlaylist(Musica* inicio){
	if (!inicio) return;
	Musica* atual = inicio;
	while(1){
		printf("🎵 %s\n", atual->nome);
		atual = atual->prox;
		usleep(500000);
	}
}

void destruirPlaylist(Musica* inicio){
	if(!inicio) return;
	Musica* atual = inicio->prox;

	while(atual != inicio){
		Musica* prox = atual->prox;
		free(atual);
		atual = prox;
	}
	free(inicio);
}



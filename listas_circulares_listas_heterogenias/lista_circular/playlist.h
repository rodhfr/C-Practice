#ifndef PLAYLIST_H
#define PLAYLIST_H


typedef struct Musica Musica;

Musica* criarMusica(const char* nome);

void inserirMusica(Musica** inicio, Musica* nova);

void tocarPlaylist(Musica* inicio);

void destruirPlaylist(Musica* inicio);

#endif

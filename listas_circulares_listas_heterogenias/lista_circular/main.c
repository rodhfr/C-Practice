#include "playlist.h"
#include <stddef.h>

int main() {
	Musica* playlist = NULL;
	inserirMusica(&playlist, criarMusica("A"));
	inserirMusica(&playlist, criarMusica("B"));
	inserirMusica(&playlist, criarMusica("C"));

	tocarPlaylist(playlist);

	return 0;
	}


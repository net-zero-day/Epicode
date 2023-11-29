/*File esercizio.c */
/*esercizio di domanda e risposta*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int  IniziaNuovapartita () {
        printf("Inizia a giocare o chiudi")
        printf("Avvia nuvova partita 1\n")
        printf("Chiudi li gioco 2\n")
        scanf("%d", &scelta);

        switch (scelta) {
            case 1:
            // Avvia il gioco
            break;
            case 2:
            // Chiudi il gioco
            break;
        default:
        // Azione non valida
        break;
        }

    int scelta;
    int punteggio = 0;

    printf("Scegli l'opzione che ti sembra più giusta:\n");
    printf("1. Spotify serve per guardare video\n");
    printf("2. Su YouTube è possibile scricare video gratuitamente\n");
    printf("3. Spotify ha troppa pubblictà\n");

    printf("Scegli un'opzione (1-3): ");
  scanf("%d", &scelta);

  switch (scelta) {
  case 1:
      printf("Hai sbagliato del tutto 1.\n");
      if (scelta == "Hai sbagliato del tutto 1.") {
        punteggio 0; 
        }
    break;
  case 2:
      printf("In teoria no in pratica si 2.\n");
      if (scelta == "In teoria no in pratica si 2.") {
        punteggio 5; 
        }
    break;
  case 3:
      printf("Bravo come Brave, risposta giusta 3.\n");
      if (scelta == "Bravo come Brave, risposta giusta 3.") {
        punteggio 20;
        }
    break;
  default:
      printf("Scelta non valida.\n");
    break;
  }
  printf("Il tuo punteggio è: %d\n", punteggio);

  return 0;
  }
}

#include <stdio.h>
#include "stdlib.h"
#include "time.h"

int main() {
    int playerNumber;
    srand(time(NULL));
    int computerNumber = rand() % 3;

    printf("Entrez 1 pour pierre, 2 pour feuille ou 3 pour ciseau\n");
    scanf("%c", &playerNumber) ;

    if(playerNumber == computerNumber) {
        printf("Egalité !");
    } else if( ) {

    }
    return 0;
}

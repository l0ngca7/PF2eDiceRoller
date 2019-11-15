#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdint.h>
#include <ctype.h>

int main(int argc, char *argv[]){

	/* check for proper number of program arguments */
	while(argc != 3){
		fprintf(stderr, "wrong number of arguments.\n");
		fprintf(stderr, "HELP: run the program with ./roll [number of dice] [number of sides]\n");
		return 1;
	}

	printf("PATHFINDER 2e DICE ROLLER\n");

	/* printfs for testing puroses */
	printf("number of dice: %s\n", argv[1]);
	printf("number of sides: %s\n", argv[2]);

	/* randomize seed */
	srand( (unsigned)time( NULL ) );

	/* cast argv[1] & argv[2] to int type to be used in roll */
	int numDice = atoi(argv[1]);
	int numSides = atoi(argv[2]);

	printf("\nrolling %dd%d\n\n", numDice, numSides);

	/* loop to constrain number of rolls to the total number of dice */
	for (int i = 0; i < numDice; i++){
		printf("rolled: %d <-- \n", rand() % numSides + 1); /* +1 to prevent 0 rolls */
	}

	printf("\nCreated by l0ngcat. (c) 2019\n");

	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
/**
  * randompasswordgenerator -generates a random valid password
  * @N: password length
  * Return: void
  */
void randomPasswordgenerator(int N)
{
	int i = 0;
	int randomizer = 0;

	srand((unsigned int)(time(0)));
	char numbers[] = "0123456789";
	char LETTER[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char letter[] = "abcdefghijklmnopqrstuvwxyz";
	char symbols[] = "!@#$%^&*";
	char password[N];

	randomizer = rand() % 4;
	for (i = 0; i < N; i++)
	{
		if (randomizer == 1)
		{
			password[i] = numbers[rand() % 10];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 2)
		{
			password[i] = LETTER[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 3)
		{
			password[i] = letter[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else
		{
			password[i] = symbols[rand() % 8];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
	}
	printf("\n");
}

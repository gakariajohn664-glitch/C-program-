/*
Name: Boro John Gakaria
Registration no: CT100/G/26190/25
Description: Program to generate rondom numbers similar to a guessing game
*/
#include <stdio.h>
	int main(){
	int secret, guess, attempts = 0;
	srand(time(0));
	secret = rand() % 20 + 1;
	while (1){
	printf("Enter your guess (1-20): ");
	scanf("%d", &guess);
	attempts++;
	if (guess > secret)
	printf("Too high!\n");
	else if (guess < secret)
	printf("Too low!\n");
	else {
	printf("Congratulations! You guessed it in %d attempts.\n", attempts);
	break; } }
return 0; }
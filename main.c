#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define N_STUDENT 5

int main(int argc, char *argv[]) {
	int grade[N_STUDENT];
	int i, average;
	int sum;
	printf("input 5 scores: ");
	
	sum = 0;
	for (i=0; i<N_STUDENT; i++) 
	{
		scanf("%d", &grade[i]);
		sum += grade[i];
	}
		
	average = sum / N_STUDENT;
	
	printf("score average: %i\n", average);
	
	system("PAUSE");
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define N_STUDENT 5

int main(int argc, char *argv[]) {
	int a[N_STUDENT] = {1, 2, 3, 4, 5};
	int b[N_STUDENT] = {1, 2, 3, 4, 6};
	int i;
	int flag = 0;
	
	for (i=0; i<N_STUDENT; i++)
	{
		if (a[i]!=b[i])
		{
			printf("array a and b are not the same\n");
			flag = 1;
		}
	}
	
	if(flag == 0)
		printf("array a and b are the same\n");	

	system("PAUSE");
	return 0;
}

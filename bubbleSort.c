//1: Comenzamos a hacer la comparacion de elementos adyacentes
//2: Repetimos hasta tener una pasada cmpleta sin nungún swap

#include "stdio.h"

//1.Función que se encarga del cambio de posición
void cambiar_pos(int *n1, int *n2)
{ 
        int temp = *n1;
        *n1 = *n2;
        *n2 = temp; 
}

//2.Función bubblesort ayuda hacer lógica de ordenamientos rexorrer el array y comparar
void bubbleSort(int vector_entrada[],int  n) 
{
	int i, j;
	for(i=0; i < n-1; i++)
	{
		for(j=0; j < n-i-1; j++)
		{
			if(vector_entrada[j]>vector_entrada[j+1])
			
				cambiar_pos(&vector_entrada[j], &vector_entrada[j+1]);
				
			
		}
	}
}


//3.Función imprime el array ordenado

int print_vector(int vector_entrada[], int n)
{
	int i;
	for(i=0; i < n - 1; i++)
		printf("%d ,", vector_entrada[i]);
	printf("\n fin del ordenamiento");
}

main()
{
	int vector_entrada[]={100, 1992, 0, 5, -1, 60, 70, 14, 15, 10};
	int n = sizeof(vector_entrada)/sizeof(vector_entrada[0]);
	bubbleSort(vector_entrada, n);
	print_vector(vector_entrada, n);
	printf("\n");

	return 0;
}

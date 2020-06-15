// 1: crear pointer para saber que hay en front y rear.
// 2: colocar estos valores en -1 niciaizar.
// 3: incrementar en 1 el valor  de "rear" cuando agreguemos un elemento.
// 4: Retornar el valor de front al quitar un elemento e incrementar en 1 el valor de front al usar dequeue.
// 5: Antes de agregar un elemento revisar si hat espacio.
// 6: Antes de remover un elemento revisamos que existan elementos.
// 7. Asergurarnos de que al remover todos los elementos resetear nuestro front y rear a -1 y agregar el valor de 0 a front al hacer nuestro primer enqueue.


#include "stdio.h"
#define SIZE  5 //el define yo le entiendo como un var en css cambias el valor de la varible y se cambia en todos los lugares que uses esa variable.


int values[SIZE], front = -1, rear = -1;

void enQueue(int value) //void no retorna nada simplemente almacena el valor en enQueue
{
	if(rear == SIZE-1)
		printf( "Nuestro queue está lleno :c\n" );
	else
	{
		if(front == -1)
			front = 0;
		rear++;
		values[rear] = value;
		printf( "Se inserto el valor %d correctamente\n", value );
	}
}

void deQueue()
{
	if(front == -1)
		printf( "Nuestro Queue esta vacio\n" );
	else
	{
		printf( "Se eliminó el valor: %d\n", values[front] );
		front++;
		if(front > rear)
		front = rear = -1;
	}
}


main(int argc, char const *argv[])
{
	enQueue(10);
	enQueue(2);
	enQueue(3);
	enQueue(4);
	enQueue(5);
	deQueue(10);
	enQueue(100);
	deQueue(12);
	return 0;

}

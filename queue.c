#include "monty.h"
/**
 *
 * queue - prints the top
 * @top: stack head
 * @counter: line number
 * Return: nothing to be returned
 */
void queue(stack_t **top, unsigned int counter)
{
	(void)top;
	(void)counter;
	data.lifi = 1;
}

/**
 * addqueue - add node to the tail stack
 * @n: new value
 * @top: head of the stack
 * Return: nothing to be returned
 */
void addqueue(stack_t **top, int n)
{
	stack_t *new_node, *aux;

	aux = *top;
	new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		printf("Error\n");
	}

	new_node->n = n;
	new_node->next = NULL;

	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*top = new_node;
		new_node->prev = NULL;
	}
	else
	{
		aux->next = new_node;
		new_node->prev = aux;
	}
}

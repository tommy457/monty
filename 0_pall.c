#include "monty.h"

/**
 * _0_pall - print the stack
 * @top: stack head
 * @counter: void -not used
 * Return: nothing
 */

void _0_pall(stack_t **top, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *top;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}

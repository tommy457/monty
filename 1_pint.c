#include "monty.h"

/**
 * _1_pint - print the top
 * @top: top of the stack
 * @counter: number line
 * Return: Nothing be returned
 */
void _1_pint(stack_t **top, unsigned int counter)
{
	if (*top == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(data.file);
		free(data.content);
		free_stack(*top);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*top)->n);
}

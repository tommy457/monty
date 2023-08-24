#include "monty.h"
/**
 * 0_push - add node to the stack
 * @top: stack head
 * @counter: line_number
 * Return: NUll
 */

void _0_push(stack_t **top, unsigned int counter)
{
	int n, j = 0, flag = 0;

	if (data.arg)
	{
		if (data.arg[0] == '-')
			j++;

		for (; data.arg[j] != '\0'; j++)
		{
			if (data.arg[j] > 57 || data.arg[j] < 48)
				flag = 1;
		}
		if (flag == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(data.file);
			free(data.content);
			free_stack(*top);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(data.file);
		free(data.content);
		free_stack(*top);
		exit(EXIT_FAILURE);
	}

	n = atoi(data.arg);

	if (data.lifi == 0)
		addnode(top, n);
	else
		addqueue(top, n);
}

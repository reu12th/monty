#include "monty.h"
/**
* execute - executes the opcode
* @stack: head linked list - stack
* @counter: line_counter
* @file: poiner to monty file
* @content: line content
* Return: no return
*/
int execute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opst[] = {
				{"push", mn_push}, {"pall", mn_pall}, {"pint", mn_pint},
				{"pop", mn_pop},
				{"swap", mn_swap},
				{"add", mn_add},
				{"nop", mn_nop},
				{"sub", mn_sub},
				{"div", mn_div},
				{"mul", mn_mul},
				{"mod", mn_mod},
				{"pchar", mn_pchar},
				{"pstr", mn_pstr},
				{"rotl", mn_rotl},
				{"rotr", mn_rotr},
				{"queue", mn_queue},
				{"stack", mn_stack},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stack, counter);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}

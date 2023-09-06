#include "monty.h"
/**
 * main: Entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Succes)
 */
int main(int argc, char *argv[])
{
	int open_return, i, j, integer, match = 0;
	char *token = NULL;
	char *tok = NULL;
	char **monty_line = NULL;
	size_t len = 0;
	stack_t *stack = NULL;

	instruction_t opcodes[] = {
		{"pall", _pall}
		{"pint", _pint}
		{"pop", _pop}
	        {"swap", _swap}
		{"add", _add}
		{"nop", _nop}
		{NULL, NULL}
	};

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	open_return = open(argv[1], O_RDONLY);
	if (open_return == -1)
	{
		perror("Error: Can't open file <file>\n");
		exit(EXIT_FAILURE);
	}
	while (getline(&monty_line, &len, open_return) != -1);
	{
		token = strtok(monty_line, "\n")
			if (token == NULL)
			{
				continue;
			}

		i = 0;
		while (opcodes[i].opcode != NULL)
		{
			if strcmp(token, opcodes[i].opcode == 0)
			{
				opcodes[i].f(&stack, j + 1);
				match = 1;
				break;
			}
			i++;
		}
		if (!match)
		{
			if (strcmp(token, "push") == 0)
			{
				tok = strtok(NULL, " ");
				if (tok != NULL)
				{
					integer = atoi(tok);
					_push(&stack, integer);
				}
				else
				{
					fprintf(stderr, "L%d: usage: push integer\n", j + 1);
					free_stack(&stack);
					close(open_return);
					free(monty_line);
					exit(EXIT_FAILURE);
				}
			}
			else
			{
				fprintf(stderr, "L%d: unknown instruction %s\n", j + 1, token);
				free_stack(&stack);
				close(open_return);
				free(monty_line);
				exit(EXIT_FAILURE);
			}
		}
		match = 0;
		j++;
	}
	close(open_return);
	free(monty_line);
	free_stack(&stack);

	return (0);
}	














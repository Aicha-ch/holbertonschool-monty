#include "monty.h"
/**
 * main: Entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Succes)
 */
int main(int argc, char *argv[])
{
	FILE *monty_file;
	int i, j = 0, integer, match = 0;
	char *token = NULL;
	char *tok = NULL;
	char *monty_line = NULL;
	size_t len = 0;
	stack_t *stack = NULL;

	instruction_t opcodes[] = {
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
	        {"swap", _swap},
		{"add", _add},
		{"nop", _nop},
		{NULL, NULL}
	};

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	monty_file = fopen(argv[1], "r");
	if (monty_file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (getline(&monty_line, &len, monty_file) != -1)
	{
		token = strtok(monty_line, " \n");
			if (token == NULL)
			{
				continue;
			}

		i = 0;
		while (opcodes[i].opcode != NULL)
		{
			if (strcmp(token, opcodes[i].opcode) == 0)
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
					free_stack(stack);
					fclose(monty_file);
					free(monty_line);
					exit(EXIT_FAILURE);
				}
			}
			else
			{
				fprintf(stderr, "L%d: unknown instruction %s\n", j + 1, token);
				free_stack(stack);
				fclose(monty_file);
				free(monty_line);
				exit(EXIT_FAILURE);
			}
		}
		match = 0;
		j++;
	}
	fclose(monty_file);
	free(monty_line);
	free_stack(stack);

	return (0);
}	














#include "monty.h"
/**
 * main: Entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Succes)
 */
int main(int argc, char *argv[])
{
	int open_return, i, j, read_line, integer, match;
	char *token = NULL;
	char *tok = NULL;
	argv[1] *file_ptr;
	char **monty_line;
	size_t *len;

	instruction_t opcodes[] = {
		{"pall",  }
		{"pint",  }
		{"pop",   }
	        {"swap",  }
		{"add",   }
		{"nop",   }
		{NULL, NULL}
	};

	if (argc != 2)
	{
		perror("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	open_return = open(argv[1], O_RDONLY);
	if (open_return < 0)
	{
		perror("Error: Can't open file <file>\n");
		exit(EXIT_FAILURE);
	}
	for (j = 0; getline(&monty_line, &len, &file_ptr) > 0;);
	{
		token = strtok(monty_line, "\n")
			if (token == NULL)
			{
				j++;
			}
			token = strtok(NULL, "\n");

		i = 0;
		while (opcodes[i].opcode != NULL)
		{
			if strcmp(token, opcodes[i].opcode == 0)
			{
				opcodes[i].f;
				match = 1;
				break;
			}
			i++;
		}
		if (!match)
		{
			if (strcmp(token, "push") == 0)
			{
				tok = strtok(token, " ");
				tok = strtok(NULL, " ");
				if (tok != NULL)
				{
					integer = atoi(tok);
					push_func(&token);
				}
			}
			else
			{
				perror("L<line_number>: unknown instruction <opcode>");
				exit(EXIT_FAILURE);
			}
		}
		match = 0;
	}
	close(argv[1])
	return (0);
}	














# **C – Stacks, Queues – LIFO, FIFO**

![This is an image](https://zupimages.net/up/23/36/buld.jpg)

![This is an image](https://zupimages.net/up/23/36/kugo.jpeg)


### **WHAT IS MONTY LANGUAGE ?** 

Monty 0.98 is a scripting language initially compiled into Monty bytecodes, similar to Python.
It depends on a distinct stack structure, featuring specific commands for its manipulation.
The objective of this endeavor is to develop an interpreter for Monty ByteCodes files.

Our interpreter can be executed in either a stack (Last-In, First-Out) or queue (First-In, First-Out) mode. You can switch the mode during the script execution. The interpreter has the capability to process a range of Monty opcodes, such as printing, performing mathematical operations, and more. A list of all the supported opcodes is provided below.


### **MONTY OPCODES** :

* ```push```
  * Usage: `push <int>`
  * Pushes an element to the stack.
  * The parameter `<int>` must be an integer.

* ```pall```
  * Prints all values in the stack/queue, starting from the top.

* ```pint```
  * Prints the top value of the stack/queue.

* ```pop```
  * Removes the top element of the stack/queue.

* ```swap```
  * Swaps the top two elements of the stack/queue.

* ```nop```
  * Does not do anything.

* ```add```
  * Adds the top two elements of the stack/queue.
  * The result is stored in the second element from the top and the top element is popped.

* ```stack```
  * Switches a queue to stack mode.

* ```queue```
  * Switches a stack to queue mode.

**To compile the program this command has to be executed**:
```gcc -Wall -Werror -Wextra -pedantic *.c -o monty```

**To run the shell is like this**:
```./monty```



### **DATA STRUCTURES** :arrow_down:

Please use the following data structures for this project. Don’t forget to include them in your header file.
```
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

```

```
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
```


### **OUTPUT** :clipboard:

![This is an image](https://zupimages.net/up/23/36/h0uo.png)

![This is an image](https://zupimages.net/up/23/36/9vqj.png)


### **AUTHORS** :pencil:
**Aicha Chouikhi** - [Github]( https://github.com/Aicha-ch) 
**Sabrina Papeau** - [Github](https://github.com/Holbiwan)


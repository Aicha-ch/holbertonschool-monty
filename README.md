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


### **OUTPUT** :

![This is an image](https://zupimages.net/up/23/36/h0uo.png)

![This is an image](https://zupimages.net/up/23/36/9vqj.png)


### **AUTHORS**
**Aicha Chouikhi** - [Github]( https://github.com/Aicha-ch) 
**Sabrina Papeau** - [Github](https://github.com/Holbiwan)


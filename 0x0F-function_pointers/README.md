C - Function pointers
Tasks:
0. What's my name
-->Write a function that prints a name: Prototype: void print_name(char *name, void (*f)(char *));
1. If you spend too much time thinking about a thing, you'll never get it done
-->Write a function that executes a function given as a parameter on each element of an array: Prototype: void array_iterator(int *array, size_t size, void (*action)(int)); where size is the size of the array, and action is a pointer to the function you need to use
2. To hell with circumstances; I create opportunities
-->Write a function that searches for an integer: Prototype: int int_index(int *array, int size, int (*cmp)(int)); where size is the number of elements in the array array, cmp is a pointer to the function to be used to compare values, int_index returns the index of the first element for which the cmp function does not return 0, If no element matches, return -1, If size <= 0, return -1.
3. A goal is not always meant to be reached, it often serves simply as something to aim at.
-->Write a program that performs simple operations.
Advanced:
4. Most hackers are young because young people tend to be adaptable. As long as you remain adaptable, you can always be a good hacker.
-->Write a program that prints the opcodes of its own main function.

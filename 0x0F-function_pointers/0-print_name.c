/**
 * print_name - This function pointer
 * prints name
 *@name: connecting member 1
 *@f: connecting member 2
 * Return: 0.
 */

void print_name(char *name, void (*f)(char *))
{
f(name);
}

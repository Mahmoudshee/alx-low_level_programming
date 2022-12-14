#ifndef MAIN_H                                                                                                                      
#define MAIN_H

int is_divisible(int num, int div);
int _putchar(char c);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int find_sqrt(int num, int root);
int _sqrt_recursion(int n);
int helperfunction(int num, int i);
int is_prime_number(int n);
int is_palindrome(char *s);
int _length(char *s);
int checkp(int i, int lg, char *s);
int wildcmp(char *s1, char *s2);
int strlen_no_wilds(char *str);
void iterate_wild(char **wildstr);
char *postfix_match(char *str, char *postfix);

#endif

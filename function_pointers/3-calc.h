#ifndef CALC_H
#define CALC_H

/**
 * struct op - Struct for operators
 * @op: The operator as a string (+, -, *, /, %)
 * @f: Pointer to a function that performs the operation
 *
 * Description: This struct associates an operator with its corresponding
 * function so that a function pointer can be used to call the operation.
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

/* Function prototypes for operations */
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/* Function prototype for operator selector */
int (*get_op_func(char *s))(int, int);

#endif /* CALC_H */

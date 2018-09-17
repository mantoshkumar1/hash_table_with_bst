#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <stdbool.h>

typedef struct {
	int top;
	int num_element;
	int element_size;
	void *data;
} Stack;


Stack *create_stack(int num_element, int element_size);
bool is_empty(Stack *s);
bool is_full(Stack *s);
int expand(Stack *s);
int push(Stack *s, void *val);
int pop(Stack *s, void *output);
int peek(Stack *s, void *output);

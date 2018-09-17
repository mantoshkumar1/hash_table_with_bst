#include "header.h"

Stack *create_stack(int num_element, int element_size) {
	Stack *s = (Stack *) malloc(sizeof(Stack));
	s->top = -1;
	s->num_element = num_element;
	s->element_size = element_size;
	s->data = malloc(element_size * num_element);
	return s;
}

bool is_empty(Stack *s) {
	assert(s!=NULL);

	if(s->top == -1) return true;
	return false;
}

bool is_full(Stack *s) {
	assert(s!=NULL);

	if(s->top == s->num_element - 1) return true;
	return false;
}

int expand(Stack *s) {
	void *new_data;
	new_data = realloc(s->data, 2*s->element_size * s->num_element);
	if (new_data == NULL) return 1;
	s->data = new_data;
	s->num_element *= 2;
	return 0;
}

int push(Stack *s, void *val) {
	void *target;
	if (is_full(s)) {
		if(1 == expand(s)) return 1;
	}

	s->top++;

	target = (char *)s->data + (s->top * s->element_size);
	memcpy(target, val, s->element_size);
	return 0;
}

int pop(Stack *s, void *output) {
	void *source;

	if (is_empty(s)) return 1;
	
	source = (char *)s->data + (s->top * s->element_size);
	memcpy(output, source, s->element_size);
	s->top--;

	return 0;
}

int peek(Stack *s, void *output) {
	void *target;
	if(is_empty(s)) return 1;

	target =(char *)s->data + s->top * s->element_size;
	memcpy(output, target, s->element_size);
	return 0;
}

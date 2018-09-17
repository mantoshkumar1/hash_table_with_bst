#include "header.h"

int main() {
	int i=10, j=20, k=30;
	int num_element = 3;
	int output;

	Stack *s = create_stack(num_element, sizeof(int));
	assert(is_empty(s) == true);
	assert(is_full(s) == false);
	assert(s->element_size == sizeof(int));
	assert(s->num_element == num_element);

	push(s, &i);
	assert(is_empty(s) == false);
	assert(is_full(s) == false);
	assert(s->top == 0);

	pop(s, &output);
	assert(is_empty(s) == true);
	assert(10 == output);

	push(s, &i);
	push(s, &j);
	push(s, &k);
	peek(s, &output);
	assert(k== output);

	pop(s, &output);
	assert(k == output);

	assert(1 == s->top);
	assert(false == is_empty(s));
	assert(false == is_full(s));
}

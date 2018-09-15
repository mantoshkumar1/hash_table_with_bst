#include "header.h"

#define F false
#define T true

int main(int argc, char *argv[]) {
	int size = 5;
	hash *hash_table = initialize_hash_table(size);

	hash_insert(hash_table, size, 0);
	hash_insert(hash_table, size, 10);
	hash_insert(hash_table, size, 20);
	hash_insert(hash_table, size, 30);
	hash_insert(hash_table, size, 11);
	hash_insert(hash_table, size, 21);
	hash_insert(hash_table, size, 2);
	hash_insert(hash_table, size, 22);
	hash_insert(hash_table, size, 99);

	assert(hash_search(hash_table, size, 0) == T);
	assert(hash_search(hash_table, size, 10) == T);
	assert(hash_search(hash_table, size, 20) == T);
	assert(hash_search(hash_table, size, 30) == T);
	assert(hash_search(hash_table, size, 11) == T);
	assert(hash_search(hash_table, size, 21) == T);
	assert(hash_search(hash_table, size, 2) == T);
	assert(hash_search(hash_table, size, 22) == T);
	assert(hash_search(hash_table, size, 99) == T);

	assert(hash_search(hash_table, size, 1000) == F);
	assert(hash_search(hash_table, size, -1) == F);


	printf("all test cases passed\n");

	return EXIT_SUCCESS;
}

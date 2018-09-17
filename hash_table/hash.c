#include "header.h"

hash *initialize_hash_table(int size) {
	int i;
	hash *table = (hash *) calloc(size, sizeof(hash));
	for(i=0; i<size; i++) {
		table[i].root = NULL;
		table[i].key = i;
	}
	
	return table;
}

bool hash_insert(hash *hash_table, int size, int val) {
	int pos  = val % size;
	if (hash_table[pos].key == pos) {
		hash_table[pos].root = bst_insert(hash_table[pos].root, val);
		return true;
	}
	return false;
}

bool hash_search(hash *hash_table, int size, int val) {
	int pos = val % size;
	if (hash_table[pos].key == pos)	{
		return bst_search(hash_table[pos].root, val);	
	}

	return false;
}

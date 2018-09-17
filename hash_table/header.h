#ifndef _HEADER_H
#define _HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

typedef struct tree {
	struct tree *left;
	struct tree *right;
	int val;
}bst;


bst *create_new_bst_node(int);
bst *bst_insert(bst *, int);
bool bst_search(bst *, int);


typedef struct hash {
	int key; // this is not required, just using for showcase
	bst * root;
}hash;


hash *initialize_hash_table(int);
bool hash_insert(hash *hash_table, int, int);
bool hash_search(hash *hash_table, int, int);


#endif

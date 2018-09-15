#include "header.h"

bst *create_new_bst_node(int val) {
	bst *node = (bst *) malloc(sizeof(bst));
	node->left = node->right = NULL;
	node->val = val;
	return node;
}

bst *bst_insert(bst *root, int val) {
	if(root == NULL)
		return create_new_bst_node(val);

	// this does not allow dup in bst
	if (root->val == val) return root;

	if (val < root->val) {
		root->left = bst_insert(root->left, val);
	}

	else
		root -> right = bst_insert(root->right, val);

	return root;
}

bool bst_search(bst *root, int val) {
	if(root == NULL) return false;
	if(root->val == val) return true;

 	if(val < root->val) {
		return bst_search(root->left, val);
	}
		
	return bst_search(root->right, val);
}

#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: the size of the tree, 0 if tree is Null
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	count = binary_tree_size(tree->left) + 1;
	count += binary_tree_size(tree->right);

	return (count);
}

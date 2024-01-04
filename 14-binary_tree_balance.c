#include "binary_trees.h"

size_t _binary_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: The Balance Factor, 0 if tree is Null
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int bf = 0;

	if (tree)
		bf = _binary_tree_height(tree->left) - _binary_tree_height(tree->right);
	return (bf);
}

/**
 * _binary_tree_height - measures the height of a binary tree
 * @tree: root node of the tree to measure the height.
 * Return: the height of the tree, 0 if tree is Null
*/
size_t _binary_tree_height(const binary_tree_t *tree)
{
	size_t count_l = 0, count_r = 0;

	if (!tree)
		return (0);
	count_l = _binary_tree_height(tree->left) + 1;
	count_r = _binary_tree_height(tree->right) + 1;
	if (count_l >= count_r)
		return (count_l);
	return (count_r);
}

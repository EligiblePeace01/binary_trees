#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: root node of the tree to measure the height.
 * Return: the height of the tree, 0 if tree is Null
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count_l = 0, count_r = 0;

	if (!tree)
		return (0);

	if (tree->left)
		count_l = binary_tree_height(tree->left) + 1;
	else
		count_l = 0;
	if (tree->right)
		count_r = binary_tree_height(tree->right) + 1;
	else
		count_r = 0;

	if (count_l >= count_r)
		return (count_l);
	return (count_r);
}

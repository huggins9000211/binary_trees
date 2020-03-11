#include "binary_trees.h"

/**
 * binary_tree_sibling - Entry point
 *
 * @node: parent
 *
 * Return: Always 0 (Success)
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *givenParent;

	if (!(node) || !(node->parent))
		return (NULL);
	givenParent = node->parent;
	if (givenParent->left == node)
		return (givenParent->right);
	return (givenParent->left);
}

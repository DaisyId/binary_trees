#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 *
 * Return: pointer to new node, else NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);;
	if (new == NULL)
		return (NULL);
	
	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left = new;
		new->left->parent = new;
	}

	else
		parent->left = new;

	return (new);
}

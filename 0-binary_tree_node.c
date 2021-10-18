#include "binary_trees.h"


/**
 * binary_tree_node - create a new binary tree node
 * 
 * @parent: origin node
 * @value: integer to be stored in the node
 * 
 * Return: pointer to newNode or null
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *newNode = malloc(sizeof(binary_tree_t));
    if (newNode)
    {
        newNode -> n = value;
        newNode -> parent = parent;
        newNode -> left = NULL;
        newNode -> right = NULL;
    }
    return newNode;
}

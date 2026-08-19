# Binary Trees

Implementation of core Binary Tree data structures and operations in C: node creation, insertion, deletion, structural checks, and tree traversals.

## Requirements

- Compiled on Ubuntu 20.04 LTS with: `gcc -Wall -Wextra -Werror -pedantic -std=gnu89`
- Betty style compliant (`betty-style.pl` and `betty-doc.pl`)
- No global variables, max 5 functions per file
- All prototypes declared in `binary_trees.h`

## Tasks

| # | File | Description |
|---|------|-------------|
| 0 | `0-binary_tree_node.c` | Creates a new binary tree node with a given `parent` and `value`. Children (`left`/`right`) start as `NULL`. |
| 1 | `1-binary_tree_insert_left.c` | Inserts a node as the left-child of a given node. If a left-child already exists, it's pushed down as the child of the new node. |
| 2 | `2-binary_tree_insert_right.c` | Same as Task 1, but for the right-child. |
| 3 | `3-binary_tree_delete.c` | Recursively frees an entire tree, using post-order traversal to avoid losing pointers. |
| 4 | `4-binary_tree_is_leaf.c` | Returns `1` if a node has no children (a leaf), `0` otherwise. Returns `0` if `node` is `NULL`. |
| 5 | `5-binary_tree_is_root.c` | Returns `1` if a node is the root (has no parent), `0` otherwise. Returns `0` if `node` is `NULL`. |
| 6 | `6-binary_tree_preorder.c` | Traverses a binary tree using pre-order traversal (`Root -> Left -> Right`) and applies a function to each node. |
| 7 | `7-binary_tree_inorder.c` | Traverses a binary tree using in-order traversal (`Left -> Root -> Right`) and applies a function to each node. |
| 8 | `8-binary_tree_postorder.c` | Traverses a binary tree using post-order traversal (`Left -> Right -> Root`) and applies a function to each node. |

## Data Structure

```c
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;

## Compiling

```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 binary_tree_print.c 0-binary_tree_node.c 1-binary_tree_insert_left.c 2-binary_tree_insert_right.c 3-binary_tree_delete.c 4-binary_tree_is_leaf.c 0-main.c -o binary_trees
```

> `binary_tree_print.c` and `*-main.c` files are provided by the project
> for testing/visualization only and are not part of the graded files.

## Authors

- Tumadhir Fattah
- 


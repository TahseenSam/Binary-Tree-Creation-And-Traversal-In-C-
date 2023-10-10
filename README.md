# Binary Search Tree Traversal

This C program demonstrates the creation and traversal of a Binary Search Tree (BST). A BST is a hierarchical data structure where each node has at most two children, and the nodes are arranged in a way that allows for efficient searching, insertion, and deletion operations.

## Program Overview

- This program allows you to create a BST by specifying the number of nodes you want to add to the tree.
- You can input the data for each node, and the program will construct the BST based on the values provided.
- It then performs three different types of tree traversals: Inorder, Postorder, and Preorder.

## Program Flow

1. The program begins by asking you to specify the number of nodes you want in the BST.
2. For each node, you will be prompted to enter its data value.
3. The program constructs the BST based on the input values.
4. After the BST is created, it performs the following tree traversals:
   - **Inorder Traversal (LNR):** In this traversal, the program visits the left subtree, then the current node, and finally the right subtree.
   - **Postorder Traversal (LRN):** This traversal visits the left subtree, the right subtree, and then the current node.
   - **Preorder Traversal (NLR):** This traversal visits the current node, the left subtree, and the right subtree.
5. The program displays the results of each traversal.

## How to Use

1. Compile the program using a C compiler, such as GCC:

   ```
   gcc binary_search_tree.c -o bst
   ```

2. Run the compiled program:

   ```
   ./bst
   ```

3. Follow the on-screen prompts to create the BST and perform the traversals.

## Note

- This program uses dynamic memory allocation to create and manage tree nodes using the `malloc` function.

- The program is a basic demonstration of BST operations and traversal and is intended for educational purposes.

- You can modify the program to add more advanced features or customize the tree values as needed.

- Ensure that you have a C compiler installed to compile and run this program.

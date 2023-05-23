/* Given two arrays that represent Preorder traversals of a Full binary tree preOrder[] and its mirror tree preOrderMirror[], your task is to complete the function constructBinaryTree(), that constructs the full binary tree using these two Preorder traversals.

Note: It is not possible to construct a general binary tree using these two traversal. But it is possible to create a full binary tree using the above traversals without any ambiguity.

Example 1:

Input :
preOrder[] = {0,1,2}
preOrderMirror[] = {0,2,1} 

Output :
                0
              /   \
             1     2
Explanation :
Tree in the output and it's mirror tree matches the preOrder and preOrderMirror.
Example 2:

Input :  
preOrder[] = {1,2,4,5,3,6,7}
preOrderMirror[] = {1,3,7,6,2,5,4}

Output :          
                 1
               /    \
              2      3
            /   \   /  \
           4     5 6    7
Explanation :
Tree in the output and it's mirror tree matches the preOrder and preOrderMirror.
Your Task:

You don't need to read, input, or print anything. Your task is to complete the function constructBTree, The function takes three arguments as input, first the array that represent Preorder traversals of a Full binary tree preOrder[], second the array that represents the preorder traversal of its mirror tree preOrderMirror[] and last the size of both the array,and returns root of the full binary tree.

Expected Time Complexity: O(N^2)
Expected Auxiliary Space: O(N), where N indicates number of nodes.

Constraints:
1 <= Number of Nodes <= 103    */

// Structre of the Node of the Binary Tree is as follows
struct Node
{
        int data;
        struct Node *left, *right;
};

// your task is to complete this function
// function should create a new binary tree
// function should return the root node to the 
// new binary tree formed
class Solution{
  public:
    Node* helper (int pre[], int low, int high) {
        int mid = (low+high)/2;
        Node* root = new Node (pre[low]);
        if (low<high) {
            root->left = helper(pre, low+1, mid);
            root->right = helper (pre, mid+1, high);
        }
        return root;
    }
    Node* constructBinaryTree(int pre[], int preMirror[], int size)
    {
        // Code here
        return helper(pre, 0, size-1);
    }
};
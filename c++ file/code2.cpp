#include <iostream>
using namespace std;
 
// A utility function to search x in arr[] of size n
int search(int arr[], int x, int n)
{
    for (int i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}
 
// Prints postorder traversal from given inorder and preorder traversals
void printPostOrder(int input1[], int input2[], int input3)
{
    // The first element in pre[] is always root, search it
    // in in[] to find left and right subtrees
    int root = search(input1, input2[0], input3);
 
    // If left subtree is not empty, print left subtree
    if (root != 0)
        printPostOrder(input1, input2 + 1, root);
 
    // If right subtree is not empty, print right subtree
    if (root != input3 - 1)
        printPostOrder(input1 + root + 1, input2 + root + 1, input3 - root - 1);
 
    // Print root
    cout << input2[0] << " ";
}
 
// Driver program to test above functions
int main()
{
    int in[] = { 4, 2, 5, 1, 3, 6 };
    int pre[] = { 1, 2, 4, 5, 3, 6 };
    int n = sizeof(in) / sizeof(in[0]);
    cout << "Postorder traversal " << endl;
    printPostOrder(in, pre, n);
    return 0;
}

//create a fxn
/*
int search(int arr[], int x, int n)
{
    for (int i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}
*/
// in decrpyt fxn.
// remove throw line in it and ignore red lines in code 
// no need to write these three lines and create fxn line
/*
int root = search(input1, input2[0], input3);
if (root != 0)
    printPostOrder(input1, input2 + 1, root); 
if (root != input3 - 1)
    printPostOrder(input1 + root + 1, input2 + root + 1, input3 - root - 1);
cout << input2[0] << " ";
*/
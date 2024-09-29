#include <iostream>
using namespace std;

class Node
{
public:
     int val;
     Node *left;
     Node *right;
     Node(int inp)
     {
          val = inp;
          left = nullptr;
          right = nullptr;
     }
};

class BST
{
public:
     Node *root = nullptr;

     ~BST()
     {
          destructor(root);
     }

     void insert(int inp, Node *newNode = nullptr)
     {
          if (root == nullptr)
          {
               root = new Node(inp);
               return;
          }

          if (newNode == nullptr)
          {
               newNode = root;
          }

          if (inp < newNode->val)
          {
               if (newNode->left == nullptr)
                    newNode->left = new Node(inp);
               else
                    insert(inp, newNode->left);
          }
          else if (inp > newNode->val)
          {
               if (newNode->right == nullptr)
                    newNode->right = new Node(inp);
               else
                    insert(inp, newNode->right);
          }
          else if (inp == newNode->val)
          {
               cout << "Key has to be unique";
               return;
          }
     }

     void inorderTraversal(Node *node)
     {
          if (node == nullptr)
               return;

          inorderTraversal(node->left);
          cout << node->val << " ";
          inorderTraversal(node->right);
     }

     void inorder()
     {
          inorderTraversal(root);
          cout << endl;
     }

     void destructor(Node *newNode)
     {
          if (newNode == nullptr)
          {
               return;
          }
          destructor(newNode->left);
          destructor(newNode->right);
          delete newNode;
     }

     void deletion(int val, Node *newNode = nullptr, Node *parent = nullptr)
     {
          if (root == nullptr)
          {
               cout << "Element Not Found\n";
               return;
          }

          if (newNode == nullptr)
          {
               newNode = root;
          }

          if (val < newNode->val)
          {
               if (newNode->left != nullptr)
               {
                    deletion(val, newNode->left, newNode);
               }
               else
               {
                    cout << "Element Not Found\n";
               }
          }
          else if (val > newNode->val)
          {
               if (newNode->right != nullptr)
               {
                    deletion(val, newNode->right, newNode);
               }
               else
               {
                    cout << "Element Not Found\n";
               }
          }
          else
          {
               // Case 1: Node has no children
               if (newNode->left == nullptr && newNode->right == nullptr)
               {
                    if (newNode == root)
                    {
                         root = nullptr;
                    }
                    else if (parent->left == newNode)
                    {
                         parent->left = nullptr;
                    }
                    else
                    {
                         parent->right = nullptr;
                    }
                    delete newNode;
                    cout << "Node with value " << val << " deleted.\n";
               }
               // Case 2: Node has one child
               else if (newNode->left == nullptr || newNode->right == nullptr)
               {
                    Node *child = (newNode->left != nullptr) ? newNode->left : newNode->right;

                    if (newNode == root)
                    {
                         root = child;
                    }
                    else if (parent->left == newNode)
                    {
                         parent->left = child;
                    }
                    else
                    {
                         parent->right = child;
                    }
                    delete newNode;
                    cout << "Node with value " << val << " deleted.\n";
               }
               // Case 3: Node has two children
               else
               {
                    Node *successorParent = newNode;
                    Node *successor = newNode->right;

                    // Find the in-order successor (smallest in the right subtree)
                    while (successor->left != nullptr)
                    {
                         successorParent = successor;
                         successor = successor->left;
                    }

                    // Replace value of node to be deleted with successor's value
                    newNode->val = successor->val;

                    // Delete the in-order successor
                    deletion(successor->val, successor, successorParent);
               }
          }
     }
};

int main()
{
     BST tree;
     int choice, value;

     while (true)
     {
          cout << "Menu:\n";
          cout << "1. Insert\n";
          cout << "2. Inorder Traversal\n";
          cout << "3. Delete\n";
          cout << "4. Exit\n";
          cout << "Enter your choice: ";
          cin >> choice;

          switch (choice)
          {
          case 1:
               cout << "Enter the value to insert: ";
               cin >> value;
               tree.insert(value);
               cout << "\n";
               break;

          case 2:
               cout << "Inorder traversal: \n";
               tree.inorder();
               break;

          case 3:
               cout << "Enter the value to delete: ";
               cin >> value;
               tree.deletion(value);
               cout << "\n";
               break;

          case 4:
               cout << "Exiting...\n";
               return 0;

          default:
               cout << "Invalid choice. Try again.\n";
          }
     }

     return 0;
}
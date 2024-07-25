#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

// Binary Search Tree class
class BST {
public:
    BST() : root(nullptr) {}  // Initialize root to null

    bool search(int value) { return search(root, value); }  // Public search
    void insert(int value) { root = insert(root, value); }  // Public insert
    void deleteNode(int value) { root = deleteNode(root, value); }  // Public delete

private:
    Node* root;  // Root of the BST

    // Search a value in the BST
    bool search(Node* node, int value) {
        if (!node) return false;
        if (node->data == value) return true;
        return value < node->data ? search(node->left, value) : search(node->right, value);
    }

    // Insert a value into the BST
    Node* insert(Node* node, int value) {
        if (!node) return new Node(value);
        if (value < node->data) node->left = insert(node->left, value);
        else node->right = insert(node->right, value);
        return node;
    }

    // Delete a value from the BST
    Node* deleteNode(Node* node, int value) {
        if (!node) return node;
        if (value < node->data) node->left = deleteNode(node->left, value);
        else if (value > node->data) node->right = deleteNode(node->right, value);
        else {
            if (!node->left) {
                Node* temp = node->right;
                delete node;
                return temp;
            } else if (!node->right) {
                Node* temp = node->left;
                delete node;
                return temp;
            }
            Node* temp = minValueNode(node->right);
            node->data = temp->data;
            node->right = deleteNode(node->right, temp->data);
        }
        return node;
    }

    // Find the node with the minimum value
    Node* minValueNode(Node* node) {
        Node* current = node;
        while (current && current->left) current = current->left;
        return current;
    }
};

int main() {
    BST tree;
    tree.insert(50);
    tree.insert(30);
    tree.insert(70);
    tree.insert(20);
    tree.insert(40);
    tree.insert(60);
    tree.insert(80);

    cout << "Search 40: " << (tree.search(40) ? "Found" : "Not Found") << endl;
    cout << "Search 90: " << (tree.search(90) ? "Found" : "Not Found") << endl;

    tree.deleteNode(20);
    cout << "After deleting 20, search 20: " << (tree.search(20) ? "Found" : "Not Found") << endl;

    tree.deleteNode(30);
    cout << "After deleting 30, search 30: " << (tree.search(30) ? "Found" : "Not Found") << endl;

    tree.deleteNode(50);
    cout << "After deleting 50, search 50: " << (tree.search(50) ? "Found" : "Not Found") << endl;

    return 0;
}

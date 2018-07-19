#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

struct Node {
        int key;
        int count;
        Node *p_left;
        Node *p_right;
        Node *p_parent;
};

Node *minimum(Node *p_root);
Node *maximum(Node *p_root);

Node *find(Node *p_root, int key)
{
       if(p_root->key == key) {
                return p_root;
       } else if(p_root->key > key) {
                if(p_root->p_left != NULL) {
                        find(p_root->p_left,key);
                } else {
                        return p_root;
                }
       } else {
                if(p_root->p_right != NULL) {
                        find(p_root->p_right, key);
                 } else {
                        return p_root;
                 }
       }

}

Node *insert(Node *p_root, int key)
{
        Node *p_node = new Node;
        Node *p_temp = NULL;

        p_node->key = key;
        p_node->count = 1;
        p_node->p_left = NULL;
        p_node->p_right = NULL;
        p_node->p_parent = NULL;

        if(p_root == NULL) {
                return p_node;
        } else {
                p_temp = find(p_root, key);
                
                if(p_temp->key == key) {
                        p_temp->count += 1;
                } else if(p_temp->key > key) {
                        p_temp->p_left = p_node;
                        p_node->p_parent = p_temp;
                } else {
                        p_temp->p_right = p_node;
                        p_node->p_parent = p_temp;
                }

                return p_root;
        }

}

void inorder(Node *p_root)
{
        if(p_root != NULL) {
                inorder(p_root->p_left);
                for(int i = 0; i < p_root->count ; i++) {
                        cout << p_root->key << " ";
                }
                inorder(p_root->p_right);
        }

}


int main()
{
        Node *p_root = NULL;
        Node *p_temp = NULL;

        int value = 0;

        srand(time(NULL));

        for(int i = 0; i < 20; i++) {
                value = rand() % 20;
                p_root = insert(p_root, value);

                cout <<value << " ";
        }
        cout << endl;
        
        inorder(p_root);
        cout << endl;
        
}

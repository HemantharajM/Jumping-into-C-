#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

struct node {
        int key;
        node *p_left;
        node *p_right;
};

node *insert(node *p_root, int key)
{
        if(p_root == NULL) {
                node *p_new = new node;

                p_new->key = key;
                p_new->p_left = NULL;
                p_new->p_right = NULL;

                return p_new;
       } else {

               if(p_root->key > key) {
                       p_root->p_left = insert(p_root->p_left, key);
               } else {

                       p_root->p_right = insert(p_root->p_right, key);
               }

               return p_root;
        }
}

node *search(node *p_root, int key)
{
        if(p_root == NULL) {
                return NULL;
        } else if (p_root->key == key) {
                return p_root;
        } else if (p_root->key > key) {
                search(p_root->p_left, key);
        } else {
                search(p_root->p_right, key);
        }

}

void preorder(node *p_root)
{
        if(p_root == NULL) {
                
        } else {
                cout << p_root->key << " ";
                preorder(p_root->p_left);
                preorder(p_root->p_right);
        }
}


void destroy(node *p_root)
{
        if(p_root != NULL ) {
                destroy(p_root->p_left);
                destroy(p_root->p_right);

                delete p_root;
        } 
}

int main()
{
        node *p_root = NULL;
        node *p_temp = NULL;
        int value = 0;

        srand(time(NULL));

        for(int i = 0; i < 10; i++) {
                value = rand() % 20;

                p_root = insert(p_root, value);

                cout << value << " ";
        }

        cout << endl;

        preorder(p_root);
        
        cout << endl;

        for(int i = 0; i < 10; i++) {
                
                value = rand() % 20;
                p_temp = search(p_root, value);
                
                cout << value << " ";
                if(p_temp != NULL) {
                        cout << " search value " << p_temp->key << endl;
                } else {
                        cout << " No match\n";
                }
        }

        destroy(p_root);

        preorder(p_root);
}

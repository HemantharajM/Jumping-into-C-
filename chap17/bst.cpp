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

Node *remove(Node *p_root, int key)
{
        Node *p_temp = NULL; // pointer to which show removed node 
        Node *p_replace = NULL; // pointer which replace the removed node
        Node *p_nxt_high = NULL; // pointer which goes to right of replaced node
        Node *p_hold = NULL;  // pointer use to check remove is root
        Node *p_del = NULL;

        p_temp = find(p_root, key);

        if(p_temp->key == key) {
                
                p_hold = p_temp;
                if(p_temp->count == 1) {
                        // remove element have no children
                        if(p_temp->p_left == NULL and p_temp->p_right == NULL) {
                                 p_del = p_temp;
                                 
                                 if(p_hold == p_root) {
                                        delete p_del;

                                        return NULL;
                                 } else {
                                        if(p_temp->p_parent->p_left->key == key){
                                                p_temp->p_parent->p_left = NULL;
                                        } else {
                                                p_temp->p_parent->p_right = NULL;
                                        }
                                         return p_root;
                                 }
                                // remove element have no right child 
                        } else if(p_temp->p_right == NULL) {
                                p_del = p_temp;
                                
                                if(p_hold == p_root) {
                                        p_root = p_temp->p_left;

                                        delete p_del;
                                        return p_root;
                                } else {
                                
                                        if(p_temp->p_parent->p_left->key == key) {
                                                p_temp->p_parent->p_left = p_temp->p_left;
                                                p_temp->p_left->p_parent = p_temp->p_parent;

                                        } else {
                                                p_temp->p_parent->p_right = p_temp->p_left;
                                                p_temp->p_left->p_parent = p_temp->p_parent;
                                        }
                                        delete p_del;
                                        return p_root;
                                }
                                // remove element have both child
                        } else {
                               p_del = p_temp;

                                          
                                if(p_hold == p_root) {
                                        p_replace = maximum(p_temp->p_left);
                                        if(p_replace != p_temp->p_left) {
                                                if(p_replace->p_parent->p_left == p_replace) {
                                                        p_replace->p_parent->p_left = NULL;
                                                } else {
                                                        p_replace->p_parent->p_right = NULL;
                                                }
                                                p_nxt_high = minimum(p_replace);
                                                p_nxt_high->p_left = p_temp->p_left;
                                                p_replace->p_right = p_temp->p_right;
                                                p_replace->p_parent = p_temp->p_parent;

                                         delete p_del;
                                         return p_temp;
                                        // replace have no right child 
                                        } else {
                                                p_replace->p_parent = NULL;
                                                p_replace->p_right = p_temp->p_right;

                                                delete p_del;
                                                return p_replace;
                                        }
                               } else {
                                      p_replace = maximum(p_temp->p_left);

                                      if(p_replace != p_temp->p_left) {
                                              if(p_replace->p_parent->p_left == p_replace) {
                                                      p_replace->p_parent->p_left = NULL;
                                              } else {
                                                      p_replace->p_parent->p_right = NULL;
                                              }

                                              p_nxt_high = minimum(p_replace);
                                              p_nxt_high->p_left = p_temp->p_left;
                                              p_replace->p_right = p_temp->p_right;
                                              p_replace->p_parent = p_temp->p_parent;
                                              // replae have no right child
                                     } else {
                                             if(p_temp->p_parent->p_left == p_temp) {
                                                     p_temp->p_parent->p_left = p_temp->p_left;
                                                     p_replace->p_right = p_temp->p_right;
                                                     p_replace->p_parent = p_temp->p_parent;
                                             } else {
                                                     p_temp->p_parent->p_right = p_temp->p_left;

                                                     p_replace->p_right = p_temp->p_right;
                                                     p_replace->p_parent = p_temp->p_parent;
                                        
                                             }
                                        }
                                       delete p_del;
                                       return p_root;
                               }
                        }
               } else {
                       p_temp->count -= 1;

                       return p_root;
               }
       } else {
               cout << "No matching element\n";

               return p_root;
      }

}

Node *minimum(Node *p_root)
{
        if(p_root == NULL){
                return p_root;
        } else {
                if(p_root->p_left != NULL) {
                        minimum(p_root->p_left);
                }else {
                        return p_root;
                }

        }
}

Node *maximum(Node *p_root)
{
        if(p_root != NULL) {
                if(p_root->p_right != NULL) {
                        maximum(p_root->p_right);
                }else {
                        return p_root;
                }
         }
}


void inorder(Node *p_root)
{
        if(p_root != NULL) {
                inorder(p_root->p_left);
                cout << p_root->key << " ";
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
        
        for(int i = 0; i < 10; i++) {
                value = rand() % 20;
                cout << value << " " << endl;

                p_root = remove(p_root, value);
                
                inorder(p_root);
        }

        cout << endl;
        p_temp = maximum(p_root);
        cout <<"Maximum is " << p_temp->key  << "and it parent is " << p_temp->p_parent->key<< endl;

        p_temp = minimum(p_root);
        cout << "Minimum is " << p_temp->key << " and it parent is " << p_temp->p_parent->key <<  endl;
}

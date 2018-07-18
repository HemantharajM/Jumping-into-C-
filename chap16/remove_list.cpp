#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

struct Node {
        int key;
        Node *p_next;
        Node *p_prev;
};

Node *push_front(Node *p_head, int key)
{
        Node *p_node = new Node;

        p_node->key = key;
        p_node->p_next = NULL;
        p_node->p_prev = NULL;

        if(p_head == NULL) {
                return p_node;
        } else {
                p_head->p_prev = p_node;
                p_node->p_next = p_head;

                return p_node;
        }
}

Node *remove(Node *p_head, int key, Node *head)
{
        
        if(p_head == NULL) {
                cout <<"No matching\n";
                return head;
        } else {
                if(p_head->key == key) {
                        if(p_head->p_prev != NULL and p_head->p_next != NULL) {
                                Node *p_temp = NULL;

                                p_temp = p_head;

                                p_head->p_prev->p_next = p_head->p_next;
                                p_head->p_next->p_prev = p_head->p_prev;

                                delete p_temp;

                                return head;
                         }else if(p_head->p_next == NULL) {
                                 Node *p_temp = NULL;

                                 p_temp = p_head;
                                 
                                 if(p_head->p_prev != NULL) {
                                        p_head->p_prev->p_next = NULL;
                                 } else {
                                         head = NULL;
                                 }

                                 delete p_temp;

                                 return head;
                       } else {

                                 Node *p_temp = NULL;

                                 p_temp = p_head;

                                 p_head->p_next->p_prev = NULL;

                                 head = p_head->p_next;

                                 delete p_temp;
                                
                                 return head; 
                        }
               } else {

                       remove(p_head->p_next, key, head);
              }
       }
}


void display(Node *p_head)
{
        if(p_head == NULL) {
                cout << "NULL"<< endl;
        } else {
                cout << p_head->key << "->" ;
                display(p_head->p_next);
        }

}

int main()
{
        Node *p_head = NULL;
        
        srand(time(NULL));

        int value;

        while((value = rand() % 15) !=0) {
                p_head = push_front(p_head, value);
                cout << value << " ";
        }
        cout << endl;
        
        display(p_head);

        while((value = rand() % 15) != 0) {
                cout << value << endl;
                p_head = remove(p_head, value, p_head);
                display(p_head);
        }

}

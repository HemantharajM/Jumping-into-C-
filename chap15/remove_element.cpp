#include <iostream>

using namespace std;

struct Node {
        int key;
        Node *p_next_node;
};

Node *push_front(Node *p_head, int key)
{
        Node *p_Node = new Node;
        
        p_Node->key = key;
        p_Node->p_next_node = NULL;

        if (p_head == NULL) {
                return p_Node;
        }else {

                p_Node->p_next_node = p_head;

                return p_Node;
        }
}

Node * remove(Node *p_head, int key)
{
        Node *p_temp_head = p_head;

        if(p_head == NULL) {
                cout << "Error: empty list or no match\n" ;
                return p_head;
       } else if (p_head->key == key) {
               Node *p_temp = p_head;
               
               p_head = p_head->p_next_node;

               delete p_temp;

               p_temp = NULL;

               return p_head;

       } else {

               while(p_head->p_next_node != NULL and p_head->p_next_node->key != key) {
                       p_head = p_head->p_next_node;
               }
                
               if(p_head->p_next_node != NULL){
                        Node *p_temp = p_head->p_next_node;

                        p_head->p_next_node = p_head->p_next_node->p_next_node;

                        delete p_temp;

                        p_temp = NULL;
                } else {

                        cout <<"No match\n";
                }

               return p_temp_head;
       } 
}


void display(Node *p_head)
{
        while(p_head != NULL) {
                cout << p_head->key << "->";
                p_head = p_head->p_next_node;
        }

        cout << "NULL\n";
}


int main()
{
        Node *head = NULL;

        int key;
        // Add element in linked list        
        do {
                cout <<"Enter the key : " ;
                cin >> key;

                head = push_front(head, key);
        }while( key > 0);
        
        display(head);

        // Remove element from list

                cout << "Enter the element to be remove : " ;
                 cin >> key;
        while(key != -1) {

                head = remove(head, key);

                display(head);
                
                cout << "Enter the element to be remove :" ;
                cin >> key;
       }

}
                

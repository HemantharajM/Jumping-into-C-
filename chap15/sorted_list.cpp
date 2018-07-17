#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

struct Node {
        int key;
        Node *p_next_node;
};

Node *add_element(Node *p_head, int key)
{
        Node *new_node = new Node;
        Node *temp = p_head;

        new_node->key = key;
        new_node->p_next_node = NULL;

        if(p_head == NULL) {
                return new_node;
        } else {
                if(p_head->key > key) {
                        new_node->p_next_node = p_head;

                        return new_node;
                } else {

                        while(p_head->p_next_node != NULL and p_head->p_next_node->key < key) {
                                p_head = p_head->p_next_node;
                        }

                        if(p_head->p_next_node != NULL) {
                                new_node->p_next_node = p_head->p_next_node;
                                p_head->p_next_node = new_node;
                        } else {
                                p_head->p_next_node = new_node;
                        }

                        return temp;
                } 
        }
}

void display(Node *p_head)
{
        if(p_head == NULL) {
                cout << "NULL" << endl;
        } else {

                while(p_head != NULL) {
                        cout << p_head->key << "->";
                        p_head = p_head->p_next_node;
                }

                cout << "NULL" << endl;
        }

}

int main()
{
        srand(time(NULL));

        Node *head = NULL;
        int value = 0;

        for(int i = 0; i <15; i++) {
                value = rand() % 10;
                head = add_element(head, value);
                cout << value << " ";
        }

        cout << endl;

        display(head);

}

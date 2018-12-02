#include <iostream>

using namespace std;

template <class Type>
class node
{
  public:
    Type data;
    node *next;
    node *prev;
    node();
};

    template <class Type>
    node<Type>::node()
    {
        data = 0;
        next = NULL;
        prev = NULL;
    }


template <class Type>
class List
{
    public:
    node<Type>* head;
    node<Type>* tail;
    int count;

    void addNode(node<Type> *n, Type num);
    node<Type>* getHead();
    void printBackward();
    void printForward();
    void deleteNode(node<Type>*head,node<Type> *del);
    void deleteAt(node<Type>*head, int del);
    List();
    List(List<Type> &l2);
};

template <class Type>
List<Type>::List()
{
    head = NULL;
    tail = NULL;
    count = 0;
}

template <class Type>
    void List<Type>::addNode(node<Type>* n, Type num)
    {
        if (count == 0)
        {
            n = new node<Type>;
            n->data = num;
            n->prev = NULL;
            head = n;
            tail = n;
            count++;
        }
        else
        {
            n = new node<Type>;
            n->data = num;
            n->prev = tail;
            tail->next = n;
            tail = n;
            count++;
        }
    }

template <class Type>
node<Type>* List<Type>::getHead()
{
    return head;
}

    template <class Type>
    void List<Type>::printForward()
    {
        node<Type> *temp = head;

        while (temp != NULL)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
    template <class Type>
    void List<Type>::printBackward()
    {
        node<Type> *temp = tail;

        while (temp != NULL)
        {
            cout << temp->data << endl;
            temp = temp->prev;
        }
    }
template <class Type>
void List<Type>::deleteNode(node<Type>*head, node<Type>*del) 
{ 
    if (head == NULL || del == NULL) 
        return; 
  
    if (head == del) 
        head = del->next; 

    if (del->next != NULL) 
        del->next->prev = del->prev; 

    if (del->prev != NULL) 
        del->prev->next = del->next; 
  
} 
  
template <class Type>
void List<Type>::deleteAt(node<Type>*head, int del) 
{ 
    if (head == NULL || del <= 0) 
        return; 
  
    node<Type> *current = head; 

    for (int i = 1; current != NULL && i < del; i++) 
        current = current->next; 
  

    if (current == NULL) 
        return; 
  
    deleteNode(head, current); 
} 


template <class Type>
List<Type>::List(List<Type> &list2)
{
    head=list2.head;
    tail=list2.tail;
    count=list2.count;
}
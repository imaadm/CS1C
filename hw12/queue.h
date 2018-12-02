#ifndef _QUEUEH_
#define _QUEUEH_
#include <iostream>
using namespace std;

template <class Type>
class QueueType
{
    private:
    Type* items;
    int front;
    int rear;
    int size;
    int count;

    public:
    QueueType(int s = 5);
    void addQueueType(Type);
    void deleteQueueType();
    void initializeQueue(int s);
    int getSize();
    bool isEmpty();
    bool isFull();
    void printQueue();
    Type getFront();
    Type getBack();
    ~QueueType();
    QueueType(const QueueType<Type>& otherQueueType);
};
    template <class Type>
    QueueType<Type>::QueueType(int s)
    {
        size = s;
        front = 0;
        rear = size - 1;
        count = 0;
        items = new Type[size];
    }
    
    template <class Type>
    void QueueType<Type>::initializeQueue(int s)
    {
        size = s;
        front = 0;
        rear = size - 1;
        count = 0;
        items = new Type[size];       
    }

    template <class Type>
    QueueType<Type>::~QueueType()
    {
        delete [] items;
    }

    template <class Type>
    int QueueType<Type>::getSize()
    {
        return size;
    }
    template <class Type>
    bool QueueType<Type>::isEmpty()
    {
        return(count == 0);
    }
    template <class Type>
    bool QueueType<Type>::isFull()
    {
        return (count == size);
    }
    template <class Type>
    Type QueueType<Type>::getFront()
    {
        return items[front];
    }

    template <class Type>
    Type QueueType<Type>::getBack()
    {
        return items[rear];
    }

    template <class Type>
    void QueueType<Type>::addQueueType(Type x)
    {
        try
        {
            if (isFull() == true)
             throw 66;
        }
        catch(int x)
        {
           cout << "An exception occured: Error #" << x << ", full queue" << endl;
        }

            rear = (rear + 1) % size;

            count++;
            items[rear] = x;
    
    }

    template <class Type>
    void QueueType<Type>::deleteQueueType()
    {
        try
        {
            if (isEmpty() == true)
             throw 99;
        }
        catch(int x)
        {
           cout << "An exception occured: Error #" << x << ", empty queue" << endl;
        }
            count--;
            front = (front + 1);
        
    }

    template <class Type>
    QueueType<Type>::QueueType(const QueueType<Type>& otherQueueType)
    {
        size = otherQueueType.size;
        count = otherQueueType.count;
        front = otherQueueType.front;
        rear = otherQueueType.rear;
        items = otherQueueType.items;
    }

template <class Type>
void QueueType<Type>::printQueue()
{
    for (int i = 0; i < size; i++)
        cout <<  "Item " << i << ": " << items[i] << endl;
}


#endif
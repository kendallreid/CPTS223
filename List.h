#ifndef LIST
#define LIST
#include "Node.h"

template <typename T>
class List
{
public:
    List() : _head(nullptr) {}
    ~List();

    Node<T>* getHead() const { return _head; }
    bool isEmpty() { return _head == nullptr; }
    bool insertAtFront(T command, T definition);
    bool removeNode(T command);


private:
    Node<T>* _head;
    void destroyList(Node<T>* linkedList);  // Helper for deconstructor
};


template <typename T>
inline List<T>::~List()
{
    destroyList(_head);
}

template <typename T>
inline bool List<T>::insertAtFront(T command, T definition)
{
    bool success = false;
    Node<T>* pMem = new Node<T>(command, definition);

    if (pMem)
    {
        pMem->setNext(_head);
        _head = pMem;
        success = true;
    }
    return success;
}

template <typename T>
inline bool List<T>::removeNode(T command)
{
    bool success = false;
    Node<T>* current = _head, * prev = nullptr;
    while (current)
    {
        if (current.getCommand() == command)
        {
            if (current == _head)  // If front of list
            {
                _head = current.getNext();
            }
            else
            {
                prev.setNext(current.getNext());
            }
            delete current;
        }
        prev = current;
        current = current->getNext();
    }
    return success;
}

template <typename T>
inline void List<T>::destroyList(Node<T>* linkedList)
{
    if (linkedList)
    {
        destroyList(linkedList->getNext());
        delete linkedList;
    }
}


#endif
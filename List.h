#ifndef LIST
#define LIST
#include "Node.h"

template <typename T>
class List
{
public:
    List() : _head(nullptr) {}
    ~List();

    Node<T>* getHead() const {return _head}
    void insertAtFront(T command, T definition);

private:
    Node<T>* _head;
    void destroyList();  // Helper for deconstructor
};


template <typename T>
inline List<T>::~List()
{ destroyList(); }

template <typename T>
inline void List<T>::insertAtFront(T command, T definition)
{
    Node<T>* pMem = new Node<T>(command, definition);

    if(pMem)
    {
        pMem->setNext(_head);
        _head = pMem;
    }
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
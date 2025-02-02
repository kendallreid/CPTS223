#ifndef LIST
#define LIST
#include "Node.h"
#include <fstream>
#include <sstream>

using namespace std;

template <typename T>
class List
{
public:
    List();
    ~List();

    void populateList(const std::string& fileName);
    Node<T>* getHead() const { return _head; }
    bool isEmpty() { return _head == nullptr; }
    bool insertAtFront(T command, T definition, T points);
    bool removeNode(T command);
    bool findCommand(T command);
    void printList() const;


private:
    Node<T>* _head;
    void destroyList(Node<T>* linkedList);  // Helper for deconstructor
};


template <typename T>
inline List<T>::List() : _head(nullptr)
{
    //T command, definition, points;
    //string line;

    //fstream file;
    //file.open("inputCommands.csv");

    //if (file.is_open())  // File is properly opened
    //{
    //    while (getline(file, line))  // Read each line from file to parse
    //    {
    //        std::stringstream ss(line);
    //        getline(ss, command, ',');
    //        getline(ss, definition, ',');
    //        getline(ss, points, ',');

    //        insertAtFront(command, definition, points);  // Insert corresponding def into ll
    //    }
    //}
    //file.close();
}

template <typename T>
inline List<T>::~List()
{
    destroyList(_head);
}

template<typename T>
inline void List<T>::populateList(const std::string& fileName)
{
    T command, definition, points;
    std::string line;

    std::ifstream file(fileName);  // Open the file using ifstream

    if (file.is_open())  // File is properly opened
    {
        while (getline(file, line))  // Read each line from file to parse
        {
            std::stringstream ss(line);
            getline(ss, command, ',');
            getline(ss, definition, ',');
            getline(ss, points, ',');

            insertAtFront(command, definition, points);  // Insert corresponding def into ll
        }
    }
    file.close();
}

template <typename T>
inline bool List<T>::insertAtFront(T command, T definition, T points)
{
    bool success = false;
    Node<T>* pMem = new Node<T>(command, definition, points);

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
        if (current->getCommand() == command)
        {
            if (current == _head)  // If front of list
            {
                _head = current->getNext();
            }
            else
            {
                prev->setNext(current->getNext());
            }
            delete current;
            break;
        }
        prev = current;
        current = current->getNext();
    }
    return success;
}

template<typename T>
inline bool List<T>::findCommand(T command)
{
    bool found = false;
    Node<T>* current = _head;

    while (current)
    {
        if (current->getCommand() == command)
        {
            found = true;  // Duplicate found
            break; 
        }
        current = current->getNext();
    }
    return found;
}

template<typename T>
inline void List<T>::printList() const
{
    Node<T>* current = _head;

    while (current)  // Traverse through list
    {
        cout << current->getCommand() << ", " << current->getDefinition() << ", " << current->getPoints() << endl;
        current = current->getNext();
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

fstream& operator<<(fstream& lhs, List<string>& rhs)
{
    Node<string>* current = rhs.getHead();
    while (current)
    {
        if (current->getNext())
        {
            lhs << current->getCommand() << "," << current->getDefinition() << "," << current->getPoints() << endl;
        }
        else
        {
            lhs << current->getCommand() << "," << current->getDefinition() << "," << current->getPoints();
        }
        current = current->getNext();
    }
    return lhs;
}

#endif
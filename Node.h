#ifndef NODE
#define NODE
#include <iostream>
#include <string>

template <typename T>
class Node
{
public:
    Node(T command, T definition) : _command(command), _definition(definition), _next(nullptr) {}
    ~Node() {}

    Node<T>* getNext() const { return _next; }
    T getCommand() const { return _command; }
    T getDefinition() const { return _definition; }

    void setNext(Node<T>* next) { _next = next; }
    void setCommand(T command) { _command = command; }
    void setDefinition(T definition) { _definition = definition; }

private:
    T _command, _definition;
    Node<T>* _next;
};
#endif

#include <iostream>
#include <string>

class Node
{
public:
    std::string data;
    Node *next;
    Node *prev;

    Node(const std::string &data) : data(data), next(nullptr), prev(nullptr) {}
};

class List
{
private:
    Node *head;
    Node *tail;

public:
    List() : head(nullptr), tail(nullptr) {}

    // Copy constructor to perform a deep copy
    List(const List &other)
    {
        head = nullptr;
        tail = nullptr;

        Node *current = other.head;
        while (current != nullptr)
        {
            append(current->data);
            current = current->next;
        }
    }

    // Overloaded assignment operator to perform a deep copy
    List &operator=(const List &other)
    {
        if (this != &other)
        {
            while (head != nullptr)
            {
                Node *temp = head;
                head = head->next;
                delete temp;
            }

            head = nullptr;
            tail = nullptr;

            Node *current = other.head;
            while (current != nullptr)
            {
                append(current->data);
                current = current->next;
            }
        }
        return *this;
    }

    bool isEmpty()
    {
        return head == nullptr;
    }

    void append(const std::string &data)
    {
        Node *newNode = new Node(data);
        if (head == nullptr)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
    }

    void displayForwardList()
    {
        if (isEmpty())
        {
            std::cout << "The list is empty." << std::endl;
        }
        else
        {
            Node *current = head;
            while (current != nullptr)
            {
                std::cout << current->data << " <-> ";
                current = current->next;
            }
            std::cout << "nullptr" << std::endl;
        }
    }

    void displayBackwardList()
    {
        if (isEmpty())
        {
            std::cout << "The list is empty." << std::endl;
        }
        else
        {
            Node *current = tail;
            while (current != nullptr)
            {
                std::cout << current->data << " <-> ";
                current = current->prev;
            }
            std::cout << "nullptr" << std::endl;
        }
    }

    ~List()
    {
        while (head != nullptr)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
        }
    }
};
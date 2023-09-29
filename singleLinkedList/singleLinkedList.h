#include <iostream>
#include <string>

class Node
{
public:
    std::string data;
    Node *next;

    Node(std::string data) : data(data), next(nullptr) {}
};

class List
{
private:
    Node *head;

public:
    List() : head(nullptr) {}

    // Copy constructor to perform a deep copy
    List(const List &other)
    {
        head = nullptr; // Initialize the new list as empty

        // Copy each element from the other list
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
        { // Check for self-assignment
            // Clear the current list
            while (head != nullptr)
            {
                Node *temp = head;
                head = head->next;
                delete temp;
            }

            // Copy each element from the other list
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

    void append(std::string data)
    {
        Node *newNode = new Node(data);
        if (head == nullptr)
        {
            head = newNode;
        }
        else
        {
            Node *current = head;
            while (current->next != nullptr)
            {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    void display()
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
                std::cout << current->data << " -> ";
                current = current->next;
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
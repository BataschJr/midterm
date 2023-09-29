#include "doubleLinkedList.h"

int main()
{
    List originalList;
    originalList.append("apple");
    originalList.append("banana");
    originalList.append("cherry");

    std::cout << "Original List (Forward): ";
    originalList.displayForwardList();

    std::cout << "Original List (Backward): ";
    originalList.displayBackwardList();

    List copyList = originalList; // Using the copy constructor

    std::cout << "Copy List (Forward): ";
    copyList.displayForwardList();

    std::cout << "Copy List (Backward): ";
    copyList.displayBackwardList();

    // Modify the original list
    originalList.append("date");

    std::cout << "Modified Original List (Forward): ";
    originalList.displayForwardList();

    std::cout << "Modified Original List (Backward): ";
    originalList.displayBackwardList();

    std::cout << "Copy List after modification of Original List (Forward): ";
    copyList.displayForwardList();

    std::cout << "Copy List after modification of Original List (Backward): ";
    copyList.displayBackwardList();

    // Using the overloaded assignment operator
    List assignedList;
    assignedList = originalList;

    std::cout << "Assigned List (Forward): ";
    assignedList.displayForwardList();

    std::cout << "Assigned List (Backward): ";
    assignedList.displayBackwardList();

    return 0;
}
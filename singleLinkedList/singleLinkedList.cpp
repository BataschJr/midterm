
#include "singleLinkedList.h"

int main()
{
    List originalList;
    originalList.append("apple");
    originalList.append("banana");
    originalList.append("guava");

    std::cout << "Original List: ";
    originalList.display();

    // Using the copy constructor
    List copyList = originalList;

    std::cout << "Copy List: ";
    copyList.display();

    // Modifying the original list
    originalList.append("pineapple");
    originalList.append("watermelon");

    std::cout << "Modified Original List: ";
    originalList.display();

    std::cout << "Copy List after modification of Original List: ";
    copyList.display(); // Note that the copy remains unchanged

    // Using the overloaded assignment operator
    List assignedList;
    assignedList = originalList;

    std::cout << "Assigned List: ";
    assignedList.display();

    return 0;
}
# Experiment-17

Aim: To understand the concepts of linked lists and implement basic operations like insertion and traversal using a singly linked list in C++.

Software Required: Visual Studio

Theory: A linked list is a linear data structure consisting of a sequence of elements called nodes. Unlike arrays, linked lists do not store elements at contiguous memory locations. Each node contains two parts:
Data: The actual data value.
Next Pointer: A pointer that points to the next node in the list.

In C++, a linked list is typically represented using classes and pointers. There are various types of linked lists, including:
Singly Linked List: Each node points to the next node.
Doubly Linked List: Each node has pointers to both the next and the previous nodes.
Circular Linked List: The last node points back to the first node.

Basic Operations:
Insertion: Adding new elements to the list (at the beginning, middle, or end).
Traversal: Visiting each node to display its value.
Deletion: Removing nodes from the list.

In this experiment, we will focus on a Singly Linked List and implement two operations:
Insertion at the end (tail)
Displaying the list

Advantages of Linked Lists:
Dynamic Size: Linked lists can grow or shrink in size dynamically, unlike arrays.
Efficient Insertions/Deletions: Inserting or deleting nodes at the beginning or middle of the list can be done in constant time, unlike arrays where elements need to be shifted.

Concepts Covered:
Node structure: Each node contains data and a pointer to the next node.
Dynamic memory allocation: Using pointers to create new nodes dynamically.
Inserting nodes: Inserting a node at the end of the list.
Traversing the list: Displaying the values of nodes in the list.

Algorithms:
1. Insertion at the Tail of the Linked List:
Input: A list of integers to be inserted at the end of the linked list.
Process: Create a new node with the given data.
If the list is empty, set the new node as the head.
Otherwise, traverse the list to find the last node and insert the new node after it.
Output: A linked list where each node points to the next node.

2. Displaying the Linked List:
Input: None.
Process: Start from the head node.
Traverse each node, printing its data.
Continue until reaching the last node (where the next pointer is NULL).
Output: Printed values of all nodes in the list.

Conclusion: In this experiment, we successfully implemented basic operations of a singly linked list in C++. We learned how to dynamically allocate memory for nodes, insert nodes at the end (tail) of the list, and traverse through the list to display its elements. This experiment helped us understand the core concepts of linked lists, including node creation, linking nodes, and dynamic memory allocation. The implementation of these operations will serve as a foundation for more complex linked list operations such as deletion, searching, and sorting.

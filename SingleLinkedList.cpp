// Program-1
#include<iostream>
using namespace std;

class Link 
{
    public:
    int data;
    Link* next;

    Link(int num) 
{
        data = num;
        next = NULL;
    }
};

int main() 
{
    // Creating two nodes
    Link* l1 = new Link(10);
    Link* l2 = new Link(20);

    // Linking l1 to l2
    l1->next = l2;

    // Display the data and next pointer of each node
    cout << "First node: " << l1->data << " -> " << l1->next << endl;
    cout << "Second node: " << l2->data << " -> " << l2->next << endl;

    return 0;
}

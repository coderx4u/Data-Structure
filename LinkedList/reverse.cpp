/*
  Print elements of a linked list in reverse order as standard output
  head pointer could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Reverse(Node *head)
{
    Node *prev   = NULL;
    Node *current = head;
    Node *next;
    while (current != NULL) {
        next = current -> next;  
        current -> next = prev;   
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}

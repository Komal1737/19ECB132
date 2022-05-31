# include <stdio.h>
# include <stdlib.h>

int choice;

struct singly_node{
  int data;
   struct singly_node *next;
};

struct doubly_node{
  int data;
   struct doubly_node *next, *prev;
};

void menu(void) {
  printf("\n1. Singly Linked List \n2. Doubly Linked List \n3. Circular Linked List \n4. Exit");
  printf("\nChoose an option: ");
  scanf("%d", &choice);
}

void singly_linked_list(){
  printf("\n*** Singly Linked List ***");
  int choice = 1;
  struct singly_node *head = NULL, *new_node, *temp;
  while (choice == 1) {
    new_node = (struct singly_node *)malloc(sizeof(struct singly_node));
    printf("\nEnter node data: ");
    scanf("%d", &new_node->data);
    new_node->next = NULL;
    if (head == NULL)
      head = temp = new_node;
    else {
      temp->next = new_node;
      temp = new_node;
    }
    printf("\nTo insert a new node press 1 else any other integer: ");
    scanf("%d", &choice);
  } 

  printf("\nThe elements in the Singly Linked list are...");
  temp = head;
  while (temp != NULL) {
    printf("\n%d", temp->data);
    temp = temp->next;
  }
}

void doubly_linked_list(){
// Incomplete code
  printf("\n*** Doubly Linked List ***");
  int choice = 1;
  struct doubly_node *head = NULL, *new_node, *temp;
  while (choice == 1) {
    new_node = (struct singly_node *)malloc(sizeof(struct singly_node));
    printf("\nEnter node data: ");
    scanf("%d", &new_node->data);
    new_node->next = NULL;
    if (head == NULL)
      head = temp = new_node;
    else {
      temp->next = new_node;
      temp = new_node;
    }
    printf("\nTo insert a new node press 1 else any other integer: ");
    scanf("%d", &choice);
  } 

  printf("\nThe elements in the Singly Linked list are...");
  temp = head;
  while (temp != NULL) {
    printf("\n%d", temp->data);
    temp = temp->next;
  }
}

void circular_linked_list(){
  printf("\n*** Circular Linked List ***");
}

int main() {
  while (1)  {
    menu();
    switch(choice) {
      case 1: singly_linked_list();
              break;
      case 2: doubly_linked_list();
              break;
      case 3: circular_linked_list();
              break;
      case 4: return 0;
      default: printf("\nInvalid Option");
    }
  }
    
}

  while (temp != NULL && temp->data != key) {
  prev = temp;
  temp = temp->next;
  }

 
  if (temp == NULL) return;

 
  prev->next = temp->next;

  free(temp);
}


int searchNode(struct Node** head_ref, int key) {
  struct Node* current = *head_ref;

  while (current != NULL) {
  if (current->data == key) return 1;
  current = current->next;
  }
  return 0;
}


void sortLinkedList(struct Node** head_ref) {
  struct Node *current = *head_ref, *index = NULL;
  int temp;

  if (head_ref == NULL) {
  return;
  } else {
  while (current != NULL) {
    
    index = current->next;

    while (index != NULL) {
    if (current->data > index->data) {
      temp = current->data;
      current->data = index->data;
      index->data = temp;
    }
    index = index->next;
    }
    current = current->next;
  }
  }
}


void printList(struct Node* node) {
  while (node != NULL) {
  printf(" %d ", node->data);
  node = node->next;
  }
}


int main() {
  struct Node* head = NULL;

  insertAtEnd(&head, 1);
  insertAtBeginning(&head, 2);
  insertAtBeginning(&head, 3);
  insertAtEnd(&head, 4);
  insertAfter(head->next, 5);

  printf("Linked list: ");
  printList(head);

  printf("\nAfter deleting an element: ");
  deleteNode(&head, 3);
  printList(head);

  int item_to_find = 3;
  if (searchNode(&head, item_to_find)) {
  printf("\n%d is found", item_to_find);
  } else {
  printf("\n%d is not found", item_to_find);
  }

  sortLinkedList(&head);
  printf("\nSorted List: ");
  printList(head);
}

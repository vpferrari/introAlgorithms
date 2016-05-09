#ifndef _linkedLists_h
#define _linkedLists_h

#define TRUE 1
#define FALSE 0

// Data Structures:
typedef struct node *list;

struct node {
    int value;
    list next;
};

// Function Prototypes

list makeList();
void deleteList(list targetList);
void add(int value, list targetList);
int search(int value, list targetList);
int remove(int value, list targetList);
void printList(list targetList);

#endif

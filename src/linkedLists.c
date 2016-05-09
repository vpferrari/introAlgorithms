#include <stdio.h>
#include <stdlib.h>
#include "linkedLists.h"

list makeList()
{
    int x;
    list pNewNode;

    if(scanf("%d",&x) == 0) return NULL;
    else {
        pNewNode = (list) malloc(sizeof(struct node));
        pNewNode->next = makeList();
        pNewNode->value = x;
        return pNewNode;
    }
}

void deleteList(list targetList)
{
    if(targetList->next != NULL) {
        list tempList = targetList->next;
        free(targetList);
        deleteList(tempList);
    }
    else {
        free(targetList);
    }
}

void add(int value, list targetList)
{
    if(targetList->next == NULL){
        targetList = (list) malloc(sizeof(struct node));
        targetList->value = value;
    } else if(targetList-> value != value) {
        add(value, targetList->next);      
    }
}

int remove(int value, list targetList)
{
    if(targetList == NULL){ // case 1: list is empty
        return FALSE;
    }

    if(targetList->value == value){
        if(targetList->next == NULL){ // case 2: the node to remove is the only node in the list
            targetList->value = NULL;
        } else { // case 3: we are removing the head of the list
            targetList = targetList->next;
        }
        return TRUE;
    }

    while(targetList->next != NULL && targetList->next->value != value){
        targetList = targetList->next;
    }

    if(targetList->next != NULL){
        if(targetList->next->next == NULL){ // case 4: we are removing the tail
            targetList->next->value == NULL;
            targetList->next = NULL;
            return TRUE;
        } else { // case 5: we are removing a node between head and tail
            targetList->next = targetList->next->next;  // TODO: this sucks!
            return TRUE;
        }
    }
    return FALSE; // case 6: value is not on the list
}

int search(int value, list targetList)
{
    list n = targetList
    while(n != NULL && n->value != value){
        n = n->next;
    }

    if(n == NULL){
        return FALSE;
    }

    return TRUE;

}

void printList(list targetList)
{
    while(targetList != NULL){
        printf("%d\n", targetList->value);
        targetList = targetList->next;
    }
}


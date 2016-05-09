#include "linkedLists.h"
#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

/*
test_linkedLists.c: this file will test linkedLists library. It will test each function, except search and print which will be
                    logically tested, since it will be used as part of some test functions.
*/

list test_makeList()
{
// this will create an arbitrary list. No automated tests expected, since makeList is user-input dependent.
// OUTPUT: the created list 

    printf("[INFO]: starting test_makeList.\n");
    printf("[INPUT]: insert the requested values as needed. Add a 0 (zero) to end the function call.\n");

    list testList = makeList();
    
    if(testList != NULL){
        printf("[SUCCESS]: test_makeList completed.\n");
        return testList; 
    } else {
        printf("[ERROR]: makeList failed. Please check your code.\n");
        return NULL;
    }
}

int test_deleteList(list targetList)
{
    // this will delete a certain lst and check it does not exist anymore
    // OUTPUT: TRUE or FALSE
    printf("[INFO]: starting test_deleteList.\n");
    deleteList(targetList);

    if(targetList == NULL) {
        printf("[SUCCESS]: test_deleteList completed.\n");
        return TRUE;
    } else {
        printf("[ERROR]: deleteList failed. Please check your code.\n");
        return FALSE;
    }
}

int test_add(list testList)
{
    // this function will add specific values in the list and search for its existence later on.
    // output: TRUE or FALSE
    int testValues[] = {11, 42, 111, 666};
    int testLength = sizeof(testValues)/sizeof(int);

    for(i = 0; i < testLength; i++){
        add(testValues[i], testList);
    }

    int count = 0; // a variable will be initially false

    for(i = 0; i < testLength; i++){
        if(search(testValues[i]) == TRUE){
            count++;
        }
    }

    if(count == testLength){
        printf("[SUCCESS]: test_add completed.\n");
        return TRUE;
    } else {
        printf("[ERROR]: add function failed. Please check your code.\n");
        return FALSE;
    }
}

int test_remove()
{
// this function tests by removing the values previously assigned in test_add function and search for its existence later on.
}

int main (int argc, char *argv[])
{
// main function, where functions are called and results displayed.
}


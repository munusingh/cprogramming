/*Write a menu-based program to implement the following operation on double linked list based on user's choice.
1.create a double linked list.
2.traverse a double linked list.
3.Insert at beginning.
4.Insert at the end.
5.Insert a node at the intermediate position after a given node.
6.Delete the first node.
7.Delete the last node.
8.Delete an intermediate node after a given node.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Node
{
    int info;
    struct Node *prev;
    struct Node *next;
};

typedef struct Node DNode;
void InsertAtEndDLL(DNode *start, int item);

DNode *CreateDLL()
{
    DNode *start;
    int item;
    char ch;
    start = (DNode *)malloc(sizeof(DNode));
    if (start == NULL)
    {
        printf("\nOut of memory Space\n");
        return start;
    }
    printf("Enter the info of the first Node\n");
    scanf("%d", &start->info);
    start->prev = start->next = NULL;
    printf("1st node with info field %d created.", start->info);
    printf("\nDo you want to add more nodes \nPress Y to continue and press any other key to quit\n");
    ch = getche();
    while (ch == 'Y' || ch == 'y')
    {
        printf("\nEnter the value(info value) of New Node\n");
        scanf("%d", &item);
        InsertAtEndDLL(start, item);
        printf("\nDo you want to add more nodes \nPress Y to continue and press any other key to quit\n");
        ch = getche();
    }
    return start;
}
void InsertAtEndDLL(DNode *start, int item)
{
    DNode *NewNode, *ptr;
    ptr = start;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }

    NewNode = (DNode *)malloc(sizeof(DNode));
    if (NewNode == NULL)
    {
        printf("\nOut of Memory Space\n");
        return;
    }
    NewNode->info = item;
    NewNode->prev = ptr;
    NewNode->next = NULL;
    ptr->next = NewNode;
    printf("A new node with info field %d added to the linked list\n", NewNode->info);
}

void Traverse(DNode *start)
{
    DNode *ptr;
    if (start == NULL)
    {
        printf("\nEmpty Linked List\n");
    }
    else
    {
        ptr = start;
        printf("\nThe linked list is\n");
        while (ptr != NULL)
        {
            printf("%d<-> ", ptr->info);
            ptr = ptr->next;
        }
        printf("\b\b\b\b   ");
        printf("\n\n");
    }
}
DNode *InsertNodeAtBegn(DNode *start)
{
    DNode *NewNode;
    NewNode = (DNode *)malloc(sizeof(DNode));

    if (NewNode == NULL)
    {
        printf("\nOut of memory space\n");
        return start;
    }
    else{
    printf("Enter the info field New Node\n");
    scanf("%d", &NewNode->info);
    NewNode->prev = NULL;
    NewNode->next = start;
    start->prev = NewNode;
    start = NewNode;
    }
}

void InsertAtEnd(DNode *start)
{
    DNode *NewNode, *ptr;
    ptr = start;
    NewNode = (DNode *)malloc(sizeof(DNode));
    if (NewNode == NULL)
    {
        printf("\nOut of Memory Space\n");
        return;
    }
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }

    printf("Enter the info for the New Node\n");
    scanf("%d", &NewNode->info);
    NewNode->next = NULL;
    NewNode->prev = ptr;
    ptr->next = NewNode;
}
void InsertAtInter(DNode *start)
{
    int pos,i=1;
    DNode *NewNode, *ptr1, *ptr2;
    printf("Enter The position :\n");
    scanf("%d", &pos);
    NewNode = (DNode *)malloc(sizeof(DNode));
    if (NewNode == NULL)
    {
        printf("\nOut of Memory Space\n");
        return;
    }
    ptr1 = start;
    while (i<pos-1)
    {
        ptr1 = ptr1->next;
        i++;
    }
    ptr2 = ptr1->next;
    printf("Enter the info field of New Node\n");
    scanf("%d", &NewNode->info);
    NewNode->prev = ptr1;
    NewNode->next = ptr2;
    ptr1->next = NewNode;
    ptr2->prev = NewNode;
}

DNode *DelFirstNode(DNode *start)
{
    DNode *ptr;
    ptr = start;
    if (start->next == NULL && start->prev == NULL)
    {
        free(start);
        start = NULL;
        return start;
    }

    start = ptr->next;
    free(ptr);
    ptr = NULL;
    return start;
}
void DelLastNode(DNode *start)
{

    DNode *ptr1, *ptr2;

    ptr1 = start;
    ptr2 = ptr1->next;
    while (ptr2->next != NULL)
    {
        ptr1 = ptr1->next;
        ptr2 = ptr1->next;
    }

    ptr1->next = NULL;
    free(ptr2);
    ptr2 = NULL;
}
void DelInterNode(DNode *start)
{
    DNode *ptr1, *ptr2, *ptr3;
    int pos,i=1;
    ptr1 = start;
    printf("Enter the position after which you want to delete:\n");
    scanf("%d", &pos);
    while (i<pos)
    {
        ptr1 = ptr1->next;
        i++;
    }
    ptr2 = ptr1->next;
    ptr3 = ptr2->next;

    ptr1->next=ptr3;
    free(ptr2);

}
void main()
{
    DNode *start;
    start = CreateDLL(start);
    int choice;

    while (1)
    {
        printf("Enter the Choice\n");
        printf("Press \n1 for Create a double linked list.\n2 For Traverse a double linked list.\n3 For Insert a node at the beginning.\n4 for Insert a node at the end.\n5 For Insert a node at an intermediate position after a given node.\n6 For Delete the first node.\n7 For Delete the last node.\n8 For Delete an intermediate node after a given node.\n0 For exit the program\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 0:
            exit(0);
            break;
        case 1:
            start = CreateDLL();
            Traverse(start);
            break;
        case 2:
            Traverse(start);
            break;
        case 3:
            start = InsertNodeAtBegn(start);
            Traverse(start);
            break;
        case 4:
            InsertAtEnd(start);
            Traverse(start);
            break;
        case 5:
            InsertAtInter(start);
            Traverse(start);
            break;
        case 6:
            start = DelFirstNode(start);
            Traverse(start);
            break;
        case 7:
            DelLastNode(start);
            Traverse(start);
            break;
        case 8:
            DelInterNode(start);
            Traverse(start);
            break;
        default:
            printf("Invalid!! Choice\n");
            break;
        }
    }
}

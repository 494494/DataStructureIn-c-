//wap to search a given element (its location) and print its location(position) from one-way linked list.
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *start, *newNode, *temp, *ptr;
struct Node *CreateLinkedList();
void printingLinkedList(struct Node *ptr);
void positionOfNode(struct Node *ptr);
void main()
{
    char *a;
    do{
        if(start==NULL){
            start=CreateLinkedList();
        }
        printingLinkedList(start);
        positionOfNode(start);
        printf("\nfind other elements position Y/N =");
        getchar();
        scanf("%c",a);
    }while(*a=='Y' || *a=='y');
}
struct Node *CreateLinkedList()
{
    struct Node *temp;
    int n, a;
    printf("no.of elements= ");
    scanf("%d", &n);
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        newNode = (struct Node *)malloc(sizeof(struct Node));
        printf("enter %dth element =", i + 1);
        scanf("%d", &(*newNode).data);
        (*newNode).next = NULL;
        if (start == NULL)
        {
            start = newNode;
        }
        else
        {
            (*temp).next = newNode;
        }
        temp = newNode;
    }
    return start;
}
// printing original linked list element
void printingLinkedList(struct Node *ptr){
    printf("\noriginally = ");
    while (ptr != NULL)
    {
        printf(" %d ", (*ptr).data);
        ptr = (*ptr).next;
    }
}
// finding location of node containing data user input
void positionOfNode(struct Node *ptr){
    int a;
    printf("\nenter element of find it,s adress and position ");
    scanf("%d", &a);
    int i = 1;
    while ((*ptr).data != a)
    {
        ptr = (*ptr).next;
        i++;
    }
    printf("\nposition =%d", i); // position of element
    printf("\nadress=%lu", ptr); // adress of element
}
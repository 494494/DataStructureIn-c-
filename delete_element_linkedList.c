#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
} *start = NULL, *newNode = NULL, *temp = NULL, *ptr = NULL;
struct Node *linkedList_formation(int n);
void printLinkedList(struct Node *ptr);
struct Node *deleting_node_using_element(int a, struct Node *ptr);
int main()
{
    int n, i = 0, a;
    char y;
    printf("enter no.of nodes = ");
    scanf("%d", &n);
    getchar();
    printf("\n");
    do
    {
        if (start == NULL)
        {
            start = linkedList_formation(n);
        }
        else
        {
            printf("after %d elements deleted = ", i);
            printLinkedList(start);
        }
        printf("\nenter element to be deleted =");
        scanf("%d", &a);
        getchar();
        if (a == (*start).data)
        {
            temp = start;
            start = (*start).next;
            free(temp);
        }
        else
        {
            deleting_node_using_element(a, start);
        }
        i++;
        if (start == NULL)
        {
            printf("------>linked List is completely deleted<-----");
            break;
        }
        printf("\nafter %dth elements deleted = ", i);
        printLinkedList(start);
        printf("-------->>>><<<<<<----------");
        printf("\n\nfurther deletion Y/N = ");
        y = getc(stdin);
        printf("%c", y);
    } while (y == 121 || y == 89);
    return 0;
}
// user inputs in linked list
struct Node *linkedList_formation(int n)
{
    for (int i = 0; i < n; i++)
    {
        newNode = (struct Node *)malloc(sizeof(struct Node));
        printf("enter %dth node element =", i + 1);
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
// printing linked list
void printLinkedList(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf(" %d ", (*ptr).data);
        ptr = (*ptr).next;
    }
}
// delete a given element from one-way linkred list
struct Node *deleting_node_using_element(int a, struct Node *ptr)
{
    struct Node *p;
    while ((*ptr).data != a)
    {
        p = ptr;
        ptr = (*ptr).next;
    }
    (*p).next = (*ptr).next;
    free(ptr);
    return start;
}
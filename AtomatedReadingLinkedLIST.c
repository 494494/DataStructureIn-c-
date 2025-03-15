#include <stdio.h>
#include <stdlib.h>
void main()
{   int n,value;
    struct node {
       int info;
       int link;
    };
    //
    struct node *start=NULL,*temp=NULL,*newNode;
    printf("no. of nodes =");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        newNode=(struct node*)malloc(sizeof(struct node));
        printf("enter the vale of node %d",i+1);
        scanf("%d",newNode->info);
        newNode->link=NULL;
    }

}

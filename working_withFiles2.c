#include<stdio.h>
#include <stdlib.h>
int main()
{
    FILE *f1,*f2; //file pointers
    char c;       // c is a char container
    f1=fopen("jiHello.txt","r");
    f2=fopen("incopy2.txt","w+");
    if (f1==NULL)      //checking f1 is opened
    {
        printf("f1 is not opened");
        exit(0);
    }
    if (f2==NULL)   //checking f2 is opened
    {
        printf("f2 is not opened");
        fclose(f1);
        exit(0);
    }
    c=fgetc(f1);    //writing into incopy2.txt
    while(c!=EOF){
        fputc(c,f2);
        c=c=fgetc(f1);
    }
    rewind(f2);//rewind cursor of f1 and f2 to file start
    rewind(f1);
    c=fgetc(f2);
    while(c!=EOF)   //flash written data in terminal
    {
        printf("%c",c);
        c=fgetc(f2);
    }
    fclose(f1); //closing files
    fclose(f2);//closing files
    return 0;
}

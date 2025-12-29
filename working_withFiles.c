// #include <stdio.h>
// int main()
// {
//     FILE *p;
//     char a[100];
//     p = fopen("chaman.txt","w+");
//     if(p==NULL)
//     printf("no not opened\n");
//     else{
//     printf("yes opened\n");
//     fprintf(p,"chaman is a good guy i have his exam marks");
//     rewind(p);
//     if(fgets(a,15,p)!=NULL){
//         printf("file is ready to read");
//         fgets(a,15,p);
//         printf("\n%s",a);
//     }
//     else{
//         printf("file is not ready");
//     }
//     fclose(p);
//     return 0;
// }
// }
#include <stdio.h>
int main()
{  int n[100],i;
    for(i=1;i<=5;i++)
    {
        n[i]=n[i-1];

        printf("%d",n[i]);
    }

  }
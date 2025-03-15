#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int presidency(char op);
char *creat_post_array(char *p);
void main()
{
  char *p, *z;
  p = malloc(100);
  printf("user input ;-");
  fgets(p, 100, stdin);
  p[strcspn(p, "\n")] = '\0';
  *(p + strlen(p)) = ')';
  // printf("\nPREVIOUS equation== %s", p);
  // create_postfix_array
  z = creat_post_array(p);
  printf("\npostfix equation== %s", z);
  free(z);
  free(p);
}
// presidency
int presidency(char op)
{
  switch (op)
  {
  case ('('):
    return 0;
  case ('-'):
  case ('+'):
    return 1;
  case ('*'):
  case ('/'):
    return 2;
  case ('^'):
    return 3;
  case (')'):
    return 4;
  default:
    return -1;
  }
}
// postfix
char *creat_post_array(char *p)
{
  char *post_array = (char *)malloc(strlen(p) * 2 + 1);
  char *stack_array = (char *)malloc(strlen(p) * 2);
  int top = 0;
  stack_array[top++] = '(';
  int j = 0;
  for (int i = 0; i < strlen(p); i++)
  {
    int f = presidency(p[i]);
    if (('A' <= p[i] && p[i] <= 'Z') || ('a' <= p[i] && p[i] <= 'z'))
    {
      post_array[j++] = p[i];
    }
    else if (f >= 0)
    {
      if (f == 0)
      {
        stack_array[top++] = p[i];
      }else if (f == 1 || f == 2 ||f==3)
      {
        while (top > 0 && presidency(stack_array[top - 1]) >=f)
        {
          post_array[j++] = stack_array[--top];
        }
        stack_array[top++] = p[i];
      }
      else if (f == 4)
      {
        while (top >0 && presidency(stack_array[(top - 1)]) != 0)
        {
          post_array[j++] = stack_array[--top];
        }
        top--;
      }
    }
    else if (f == -1)
    {
      // ignore unknown characters
    }
    else
    {
      printf("user's input is fucked up");
      break;
    }
  }
  while(top>0){
    post_array[j++] = stack_array[--top];
  }
  post_array[j] = '\0';
  free(stack_array);
  return post_array;
}
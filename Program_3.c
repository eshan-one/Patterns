#include <stdio.h>

int main() {
  int x,y;
  for(y=1;y<=5;y++)
  {
    for(x=5;x>=1;x--)
    {
      if(x>=y)
      {
      printf(" *");  
      }
      else{
        printf(" ");
      }
    }
    printf("\n\n\n");
  }
  
  printf("\n");

  
  
  
  
  return 0;
}

#include <stdio.h>

int main() {
  int x,y;
  for(y=5;y>=1;y--)
  {
    for(x=1;x<=5;x++)
    {
      if(x>=y)
      {
      printf("*");  
      }
      else{
        printf(" ");
      }
    }
    printf("\n\n");
  }
  
  printf("\n");

  
  
  
  
  return 0;
}

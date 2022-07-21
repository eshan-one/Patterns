#include <stdio.h>

int main() {
  int x,y;
  for(y=1;y<=9;y+=2)
  {
    for(x=1;x<=9;x++)
    {
      if(x>=y)
      {
      printf(" *");  
      }
      else{
        printf(" ");
      }
    }
    printf("\n");
  }
  
  printf("\n");

  
  
  
  
  return 0;
}

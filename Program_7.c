#include<stdio.h>
int main(){
  int x,y;
  printf("\n");
  for(x=1;x<=5;x++)
  {
    for(y=1;y<=10;y++)
    {
      if(y<=6-x || y>=5+x){
        printf(" * ");
        }
      else{
        printf("   ");
      }

    
  }
  printf("\n\n");
  }

  
  return 0;
}

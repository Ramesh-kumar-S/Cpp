#include<stdlib.h>
#include<iostream>

void f()
{
   int *ptr = (int *) malloc(sizeof(int));

   std::cout<<"hi"<<std::endl;
  
   /* Do some work */
  
  free(ptr);
  std::cout<<ptr;
}
int main()
{
    f();
}
#include <stdio.h>      /* printf, scanf, NULL */
#include <stdlib.h>     /* malloc, free, rand */
#include <iostream>
int main ()
{
  int* arr;
  int* array;

  arr =  malloc (sizeof(int));
  std::cout<<" size of array "<<sizeof(arr)<<std::endl;

  array = (int*) malloc (sizeof(int));
  std::cout<<" size of array "<<sizeof(array)<<std::endl;

  array[0] = 2;
  array[1] = 2;
  array[2] = 2;
  array[3] = 2;
  //array[4] = 2;
  //array[5] = 2;
  //array[6] = 2;

  std::cout<<"array :  \n"<<array<<std::endl;

  free (array);

  return 0;
}

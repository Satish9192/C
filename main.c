/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int iterativeBinarySearch(int array[], int start_index, int end_index, int element) 
{
   while (start_index<= end_index) 
   {
      int middle = start_index + (end_index- start_index )/2;
      if (array[middle] == element)
         return middle;
      if (array[middle] < element)
    start_index = middle + 1;
      else
    end_index = middle - 1;
   }
   return -1;
}
   int main(void)
{
   int array[] = {1, 4, 7, 9, 16, 56, 70};
   int n = 7;
   int element = 16;
   int found_index = iterativeBinarySearch(array, 0, n-1, element);
   if(found_index == -1 )
   {
      printf("Element not found in the array ");
   }
   else 
   {
      printf("Element found at index : %d",found_index);
   }
   return 0;
}
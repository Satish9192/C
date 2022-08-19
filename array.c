/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int array [100],search,c,n;
   printf("enter number of elements in array\n");
   scanf("%d",&n);
   
   printf("enter%d integers(s)\n",n);
     
     
    for(c=0;c<n;c++)
    scanf("%d",&array[c]);
    
    printf("enter a number to search\n");
    scanf("%d",&search);
      
      
    for(c=0;c<n;c++)
    { 
     if (array[c]==search)  
     {
    printf("%d is present at location %d.\n",search,c+1);
    break; 
     }
    }
    if(c==n)
    printf("%d isn't present in the array.\n",search);
    return 0;
}
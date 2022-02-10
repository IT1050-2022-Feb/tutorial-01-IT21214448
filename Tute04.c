/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>//standard input output header
//function prototype
int maximum(int x,int y);
int minimum (int x,int y);
int multiply (int x,int y);
int main() {
  //variable declaration
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   //function calling
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}
//called function
int minimum(int x,int y)
{
	if(x>y)
	    return y;
	else
		return x;
}
int maximum(int x,int y)
{
	if(x<y)
	    return y;
	else
		return x;
}
int multiply (int x,int y)
{
	return x*y;
}
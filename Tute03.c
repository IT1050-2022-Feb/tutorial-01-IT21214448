/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>//standard input output header 
int main() {
  //variable declaration
  	int N,count,sum=0;
	
	printf("enter the num: ");//enter number
	scanf("%d",&N);//read number
	
    for (count=0;count<=N;count++)//Repetition
    {
    	sum=count+sum;//calculate sum
	}
	printf("sum is %d",sum);//display sum
  return 0;
}


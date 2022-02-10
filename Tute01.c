/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>//standard input output header 

int main()//main function
{
  //variable declaration
 int Smark1,Smark2;
 float average;
  printf("subject mark 1: ");//enter mark 1
  scanf("%d",&Smark1);//read mark 1

  printf("subject mark 2: ");//enter mark 2
  scanf("%d",&Smark2);//read mark 2

  average=(Smark1+Smark2)/2;//calculate average
  printf("Average is %.2f",average);//display average
  
  return 0;
}


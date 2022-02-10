/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>//standard input output header


int main()//main function
{
  //variable declaration
	int distance;
	float amount, total,discount;
	
	printf("Enter the distance : ");//enter distance
	scanf("%d",&distance);//read distance
	
	if(distance>= 0 && distance<=30)
	{
		amount=distance*50;//calculate amount
		total=amount;
	}
	else
	{
		amount=(distance-30)*40;//calculate amount
		total=amount+(30*50);
	}
	printf("amount is %.2f",total);//display total
	return 0;
}
  


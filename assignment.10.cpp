//question10-
// write a c program a that the calculate the volume of sphere
//tanya rajput

#include <stdio.h>
#include <math.h>


int main(){
	
   float rad;
   float area, vol;
   
   printf("Enter radius of the sphere :");
   scanf("%f", &rad);
   
   area = 4 * (22/7) * rad * rad;
   
   vol = (4.0/3) * (22/7) * rad * rad * rad;
   
   printf("Surface area of sphere is: %.3f", area);
   printf("Volume of sphere is : %.3f", vol);
   
   return 0;
   
}

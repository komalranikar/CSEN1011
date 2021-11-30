/*Develop a calculator to convert time,distance,area,volume and temperature from one unit to another*/
#include <stdio.h>
int main()
{
	int distance,area,volume,temperature,a,b,c,d;
	
	
	printf("Enter your distance in centimeters:-");
	scanf("%d",&distance);
	a=(distance/100);
	printf("your converted distance into meter:-%d\n",a);

	printf("Enter your area in centimeter square:-");
	scanf("%d",&area);
	b=(area/10000);
	printf("your converted area into meter square-%d\n",b);
	
	printf("Enter your volume in centimeter cube:-");
	scanf("%d",&volume);
	c=(volume/1000000);
	printf("your converted volume into meter cube-%d\n",c);
	
	
	printf("Enter your temperature in celcius:-");
	scanf("%d",&temperature);
	d=((temperature*9/5)+32);
	printf("your converted temperature into fahrenheit-%d\n",d); 
	  
	return 0;                                                    
}

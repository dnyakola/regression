#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int n,i;
	float sumx=0, sumxsq=0, sumy=0, sumxy=0, x, y, a0, a1, denom, nx, ny;
	printf("Enter the number of records");
	scanf("%d", &n);
 	for(i = 0; i < n; i++)
 	{
  		scanf("%f %f", &x, &y);
  		sumx += x;
  		sumxsq += pow(x, 2);
  		sumy += y;
  		sumxy += x * y;
 	}
 	denom = n * sumxsq - pow(sumx, 2);
 	a0 = (sumy * sumxsq - sumx * sumxy) / denom;
 	a1 = (n * sumxy - sumx * sumy) / denom;
 	printf("Equation of line is\ny = %fx + %f",a1, a0);
	printf("\nEnter value of x whose y should be predicted");
	scanf("%f",&nx);
	ny=(a1*nx)+a0;
	printf("Y will be %f",ny);
	return 0;
}

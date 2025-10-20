#include<stdio.h>
#define PI 3.14 
#define E 2.7
 
  int r,a,b;
  float hacim;
  
  void main()
  {
  	printf("dairenin yaricapini gir:");
  	scanf("%d,",&r);
  	
  	hacim=4*PI*r*r*r/3;
  	printf("dairenin hacmi=%.2f\n",hacim);
  	
}

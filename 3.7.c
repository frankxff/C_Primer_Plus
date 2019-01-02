/*
show float value in two methods. 
*/
#include<stdio.h>
 
 int main() 
 {
 	float aboat = 32000.0;
 	double abet = 2.14e9;//in E methods
 	long double dip = 5.32e-5;
 	
 	printf("%f can be written %e\n",aboat,aboat);
 	printf("And it's %a in hexadecimal,powers of 2notation\n",aboat);
 	printf("%f can be written %e\n",abet);
 	pritf("%Lf can be written %Le\n",dip,dip);
 	
 	return 0;
 }

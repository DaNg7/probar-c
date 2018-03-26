
#include "stdio.h"
#include "iostream"

int main() {
  	int x[100]={};
  	int a=1;
  	int b=1;
  	int l=1;
  	
  	
  	for(int i;i<16;i++){
	  a+=b;
	  b  =a;
	  x[i]=a;
      a+=l;
	  l=a;
	   printf("el valor del array es %d \n",a)	;
	    
   // for (int d=1;d<i;d++){
   // printf("el valor del array es %d \n",x[d])	;
  	
  	
  //  }
 
  }
  	
}
 

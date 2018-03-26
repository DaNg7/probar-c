
#include "stdio.h"
#include "iostream"

int main() {
  	int x[3]={2,4,5};
  	
 	int d=0;
  	for (int i=0;i<3;i++) { 
        if(x[i]%2==0)
    {
	 	printf("valor es un entero %d \n",x[i] );
	  }  	
	  else {
	  printf("no es un entero!!! %d \n",x[i] );
	  }
	  } 
}
 

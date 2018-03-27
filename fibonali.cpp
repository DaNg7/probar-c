using namespace std;
#include "stdio.h"
#include "iostream"

	int x[]={};
  	int a=1;
  	int b=1;
  	int l=1;

 
 

 int suma(){
    int sum ;
	for(int d=0; d<8; d++){
      sum += x[d];
      printf("el dato del array es  %d \n", x[d]);

	}
    return sum;
}

int main() {
  
  	  	
  	for(int i=0;i<8;i++){
	  a+=b;
	  b=a;
	  x[i]=a;
	  if (a==b){
	    i++;
	    a+=l;
	    l=a;
	    x[i]=a;
		}
    
  	}
  	
	int total = suma();
    printf("la suma del array es   %d \n",total);
   
	return 0;  	
  	
}


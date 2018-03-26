using namespace std;
#include "stdio.h"
#include "iostream"
	int x[100]={};
  	int a=1;
  	int b=1;
  	int l=1;
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
  	
	int g = suma()	;
    printf("el valor del array es %d \n",g);
  	
}
 
 
 int suma(){
 
    for(int d=0;d<8;d++){
     int v;
     v +=	x[d];
   return v;
   
   
    }
}

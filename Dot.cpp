#include <iostream>
#include <cmath>


//Funcion producto escalar 
int main(){
	
	dot([1,2,3],[1,1,1],3);
	
	
	return 0;
}

void dot(double a[], double b[],int l){
	double c = 0;
	
	
	for(int n = 0; n < l; n++){
		 		
		c = c + (a[n]*b[n]);
			
	}
	std::cout << "El producto punto es: " << c ; 
	
	
}

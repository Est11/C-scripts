#include <iostream>
#include <math.h>

using namespace std;

int main(void){	
	
int r;
double I;

cout<<"Se calculara el impacto de bala sobre un robot con I= r^4/(r+7-1.9)\n\n"; 
cout<<"Ingrese un valor para la velocidad del canon r=";
cin>>r;

I = pow(r,4)/(r+7-1.9);  // calculo ecuacion de impacto

cout<<"\nEl impacto calculado es I="<<I<<endl; // Impacto calculado

return 0;
}

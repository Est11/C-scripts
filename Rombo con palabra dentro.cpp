#include <iostream>

using namespace std;

 int main(void)
 {
   
	cout<<"Por favor ingrese una palabra de 4 letras\n"; // Imprime mensaje de entrada
	string a; // crea una variable tipo string (Cadena de caracteres)
	cin>>a;// reciba una entrada de teclado 
	cout<<"\n\n"; // salto de linea

int band=1;  // variable para usar a modo de bandera

	for(int i=0;i<29;i++)   //parte superior del cuadro
		if(i==0)
			cout<<"					      *";
		else
			cout<<"*";
		 
	   int n=5;  // Largo del rombo
	   int k = 4; // Centra el rombo hacia la derecha
	 
	    for (int i=2; i<n; i++)   //parte superior del rombo
	    {	cout<<endl;
	        for (int j=0; j<k; j++)
	        	if(j==0) // parte lateral izquierda superior del cuadro
	        		cout<<"					      *";
	            else
					cout <<"  ";
	        k = k - 1;
	 
	        for (int j=0; j<=i; j++ )
	        {
	           	cout << "   *";
	           	           
	            
	        }
	       	 //parte lateral derecha superior del cuadro
	       	if(i == n-3)		
				cout<<"	  *";	 
	       	if(i == n-2)		
				cout<<"	  *";	 
			if(i == n-1)		
				cout<<"     *";	 
	        cout << endl;
	    }
	    
		for (int i=n; i>=2; i--) //parte inferior del rombo
		    {	cout<<endl;
		        for (int j=k; j>0; j--)
		        	if(j==k) // parte lateral izquierda inferior del cuadro
	        			cout<<"					      *";
	            	else	
		            	cout <<"  ";
		        k = k + 1;
		 
		        for (int j=i; j>=0; j-- )
		        {
		        	if(j==1 && i==5)   // para que la palabra quede en el centro
		        		
	            		cout<<a<<"*";
	            		if (band == 1) // para que la palabra quede totalmente alineada en el centro
	            			j--;
	            			band=0;
	            	
	            	cout << "   *";
		        }
		         //parte lateral derecha inferior del cuadro
	       	if(i == n)		
				cout<<"  *";	 
	       	if(i == n-1)		
				cout<<"	  *";	 
			if(i == n-2)		
				cout<<"	  *";	
			if(i == n-3)		
				cout<<"	  *";
	        cout << endl;
		    }	
			for(int k=0;k<29;k++) // parte inferior del cuadro
				if(k==0)
       				cout<<"					      *";
				else
					cout<<"*";
		cout<<"\n\n";

   return 0;

 }

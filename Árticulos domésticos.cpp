#include <iostream>
#include <string.h>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main ()
{
    int k=10;
	string articulos[10];
	float precio[10];
	float total,s=0,iva,tc;

cout<<"**************TIENDA EVELIN**************\n\n";	
	for(int p=0;p<k;p++)
	{	
	    cout<<"DIGITE EL NOMBRE Y EL PRECIO DEL PRODUCTO #"<<(p+1)<<":\n\n";
        cout<<"Digite el producto : "; getline(cin,articulos[p]);
		cout<<"Digite su precio: "; cin>>precio[p];
		cin.ignore();
		cout<<endl;
    }

    cout<<"***********LISTADO DE PRODUCTOS***********\n\n";
    for(int p=0;p<k;p++)
    {
    	s=s+precio[p];
    	iva=s*0.12;	
	    tc=s*0.10;
    	total=s+iva-tc;
	}

	for(int p=0;p<k;p++)
	{
		cout<<p+1<<".-     "<<articulos[p]<<"\t\t"<<precio[p]<<endl;
	}
	cout<<"\t SUBTOTAL \t"<<s<<endl;
	cout<<"\t IVA 12% + \t"<<iva<<endl;
	cout<<"\t DESCUENTO 10% \t"<<tc<<endl;
	cout<<"\t TOTAL \t\t"<<total<<endl;
	
cout<<"****************GARCIAS POR VISITAR TIENDA EVELIN****************";
getch ();
return 0;
}
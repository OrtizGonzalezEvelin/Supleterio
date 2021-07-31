## Nombre del autor.:fallen_leaf:

# :rose:Evelin Mayenni Ortiz Gonzalez:dress:

![](https://avatars.githubusercontent.com/u/86195971?v=4)

### Archivos(Nombres).:cherry_blossom:

  ####  Artículos domésticos.cpp 
  #### Diagrama Tienda Evelin.jpg 
  
# Descripción. :mag_right:

  Artículos domésticos.:straight_ruler:

Este archivo cuenta con la funcion de elaborar una factura de 10 productos de compras ingresadas por el usuario. En el cual muestra el subtotal,  el incremento del iva y un descuento del 10% y la suma de todo esto que es el total a pagar.

Para ello primero se declararon las variables que son:  

* int k=10, 
* string articulos[10].
* float precio[10].
* float total,s=0,iva,tc.

Para poder ingresar el precio y el nombre de los productos se utilizo el ciclo "for" y el comando cout<< para mostrar el mensaje por pantalla pidiendole al usuario que ingrese el nombre y el precio del producto, cin>>articulo, precio para almacenar el nombre y el precio ingresado.
     
     for(int p=0;p<k;p++)
	{	
	    cout<<"INGRESE EL NOMBRE Y EL PRECIO DEL PRODUCTO #"<<(p+1)<<":\n";
        cout<<"Producto a comprar:\n "; 
		getline(cin,articulos[p]);
		cout<<"Precio:\n "; 
		cin>>precio[p];
		cin.ignore();
		cout<<endl;
   }
   
Se realizo otro ciclo for para calcular el iva, subtotal=s, descuento=tc, total:
      
      for(int p=0;p<k;p++)
     {
    	s=s+precio[p];
    	iva=s*0.12;	
	    tc=s*0.10;
    	total=s+iva-tc;
	}
  
Y  por ultimo se creo un ciclo for para generar la factura.
     
     for(int p=0;p<k;p++)
	{
  
		cout<<p+1<<".-     "<<articulos[p]<<"\t\t"<<precio[p]<<endl;
    
	}
  
	cout<<"\t SUBTOTAL \t"<<s<<endl;
	cout<<"\t IVA 12% + \t"<<iva<<endl;
	cout<<"\t DESCUENTO 10% \t"<<tc<<endl;
	cout<<"\t TOTAL \t\t\n"<<total<<endl;
  
Diagrama de flujo comerciales.jpg :straight_ruler:

En este archivo esta el diagrama de flujo del programa principal, donde esta estructurado paso a paso cada parte de la codificacion en c++, utilizando su respectivo simbolo  y codigo.

### Descarga. :file_folder:

Pasos para descargar los archivos.:bookmark_tabs:

1 . Click en "code".

![](https://raw.githubusercontent.com/OrtizGonzalezEvelin/IMAGENES/main/decarga%20evelin.jpeg)

2 . Click en Download ZIP.

![](https://raw.githubusercontent.com/OrtizGonzalezEvelin/IMAGENES/main/decarga%20evelin2.jpeg)

3 . Una vez descargado el archivo dar click en "extraer aquí".

![](https://raw.githubusercontent.com/LuisAbrahanQuinonezCaicedo/Imagenes/main/3.jpeg)

4 . Estos son los archivos extraídos.

![](https://raw.githubusercontent.com/OrtizGonzalezEvelin/IMAGENES/main/descaega%203.jpeg)

### Compilacion. :arrow_double_down:

Proceso para compilar.:wrench:

 1. Click  en el icono de copilar.
 
![](https://raw.githubusercontent.com/LuisAbrahanQuinonezCaicedo/Imagenes/main/copilar.jpeg)

2 . Click en el iconode ejecutar.

![](https://raw.githubusercontent.com/LuisAbrahanQuinonezCaicedo/Imagenes/main/ejecutar0.jpeg)

3 . Mostrar programa por pantalla.

               3 .1 .  Ingresar arcticulo y sus precios.
               
   ![](https://raw.githubusercontent.com/LuisAbrahanQuinonezCaicedo/Imagenes/main/ejecutar5.jpeg)
   
4 . Mostrar por pantalla el resultado con el decuento del 10 % y el iva del 12 %.:ok:
            
   ![](https://raw.githubusercontent.com/patriciajama/imagenes/main/ejecutar6.jpeg)

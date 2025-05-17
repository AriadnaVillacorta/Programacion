#include <iostream>
#include <string>
using namespace std;

int main(){
int talla, genm , edad, genero2, respuesta,precio;
int M,F, genero;


cout<< "###Programa para saber tu talla de zapatos###"<<endl;
cout<<"Ingrese su edad por favor"<<endl;
cin>> edad;

if (edad= 0 <= 12){
    cout<< "Su talla es: Talla 34"<<endl;
}else if (edad= 13 <= 17){
    cout<<"Su talla de zapatos: Talla 38" <<endl;
}else if (edad= 18 <= 64){
    cout<<"Su talla de zapatos es: Talla 34"<<endl;
}

cout<<"Por favor ingrese su genero"<<endl;
cin>> genero;


switch (genero) {
    case 1:
    cout<<"La lista de zapatos para mujer son:"<<endl;
    cout<<"1. Zapatos casual"<<endl;
    cout<<"2. Zapatos elegantes"<<endl;
    cout<<"3. Zapatos primium"<<endl;
break;
case 2:
    cout<<"La lista de zapatos para hombre son:"<<endl;
    cout<<"1. Zapatos deportivos"<<endl;
    cout<<"2. Zapatos formales"<<endl;
    cout<<"3. Zapatos primium"<<endl;
    break;
case 3:
    cout<<" Lista general de zapatos"<<endl;
    cout<<"Para dama:"<<endl;
    cout<<"1.Zapatos casual"<<endl;
    cout<<"2. Zapatos elegantes"<<endl;
    cout<<"3. Zapatos primium"<<endl;
    cout<<"Para hombre:"<<endl;
    break;
    default:
    cout<<"ERROR! elija una opcion."<<endl,

}



if (genero== F){
    cout<<"La lista de zapatos para mujer son:"<<endl;
    cout<<"1.Zapatos casual."<<endl;
    cout<<"2. Zapatos elegantes"<<endl;
    cout<<"3. Zapatos primium"<<endl;
}
    cout<<"Le gustaria saber los precios de cada  (Si/No?)"<<endl;
    cin>> precio;
if(precio== "Si"){
    cout<<"Los precio sde los zapatos para dama son:"<<endl;
    cout<<"Zapatos casual $70"<<endl;
    cout<<"Zapatos elegantes $100"<<endl;
    cout<<" Zapatos primium $250"<<endl;
    cout<<"Aplican con un 15% de descuento en todos los zapatos."<<endl;

}else{ 
    cout<<"Gracias por ingresar al programa."<<endl;
}

    cout<<"Le gustaria comprar algun producto?(Si/No)";
    cin>>respuesta;

    if (respuesta=="Si"){
    cout <<"Seleccione la opccion a comprar:"<<endl;
     cout<<"1.Zapatos casual $70"<<endl;
    cout<<"2.Zapatos elegantes $100"<<endl;
    cout<<"3.Zapatos primium $250"<<endl;
    cout<<"Aplican con un 15% de descuento en todos los zapatos."<<endl;

    cout<<""

    }else{
        cout<<"Gracias por la consulta!."<<endl;
    }

if (genero== M){
   
}else if (genero== M){
    cout<<"La lista de zapatos para hombre son:"<<endl;
    cout<<"1. Zapatos deportivos"<<endl;
    cout<<"2. Zapatos formales"<<endl;
    cout<<"3. Zapatos primium"<<endl;
}else{
    cout<<"ERROR!. Elija un genero correcto."<<endl;
}
    cout<<"Le gustaria saber los precios de cada  (Si/No?)"<<endl;
    cin>> precio;
if(precio== "Si"){
    cout<<"Los precio sde los zapatos para dama son:"<<endl;
    cout<<"Zapatos deportivos $80"<<endl;
    cout<<"Zapatos formales $120"<<endl;
    cout<<" Zapatos primium $250"<<endl;
    cout<<"Aplican con un 20% de descuento en todos los zapatos."<<endl;

}else{ 
    cout<<"Gracias por ingresar al programa."<<endl;
}
    cout<<"Le gustaria comprar algun producto?(Si/No)";
    cin>>respuesta;

    if (respuesta =="Si"){
    cout <<"Seleccione la opccion a comprar:"<<endl;
     cout<<"1.Zapatos deportivos $80"<<endl;
    cout<<"2.Zapatos formales $120"<<endl;
    cout<<"3.Zapatos primium $250"<<endl;
    cout<<"Aplican con un 20% de descuento en todos los zapatos."<<endl;

    }else{
        cout<<"Gracias por la consulta!."<<endl;
    }


















    return 0;
}
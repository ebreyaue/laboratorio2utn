#include<iostream>
#include<cstdlib>
using namespace std;
int candidatos[7]={};




void cargar_voto()
{
int codigo_candidato;
int voto;
cout<<"Codigo de Candidato:"<<endl;
cin>>codigo_candidato;
cout<<"Cantidad de Votos:"<<endl;
cin>>voto;
candidatos[codigo_candidato]+=voto;
}


void cargar_datos()
{
int codigo_muni;

cout<<"Codigo de municipio: "<<endl;
cin>>codigo_muni;

while(codigo_muni!=-1)
{
cargar_voto();
cout<<"Codigo de municipio: "<<endl;
cin>>codigo_muni;
}

}

int calcular_mayor(int valor)
{
for(i=0;i<7;i++)
    {
    if(valor>candidatos[i]){return valor;}
    else{candidatos[i];}
    }

//devolver la posicion en el vector.
}


//dentro de todos los valores dentro del vector, mostrar el registro con mas votos y su posicion en el vector.

void resultados()
{
//punto A
cout<<"El Partido con mas votos"<<candidatos[calcular_mayor]<<endl;
}


int main()
{
cargar_datos();
resultados();
}

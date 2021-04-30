#include <iostream>
#include<fstream>
#include<math.h>
using namespace std;
int opcion;
int n;
string ori;

fstream archivo_lectura;
ofstream archivo_escritura;

void archivo_binario(int a, int b[]);//funcion que convierte en binario el contenido del archivo
int contador_0s_1s(string ori);
string igualcantidad01(string a, string b); //como se modifica la cadena si la cantidad de unos y ceros es igual
string mas1que0(string a,string b);//como se modifica la cadena si la cantidad de unos es superior a los ceros
string mas0que1(string a, string b);//como se modifica la cadena si la cantidad de ceros es superior a los unos
void Codificacion1();
//Prototipos de funciones

void archivo_binario(int a, int b[]){  //listo

    int i=0;

    int binario[8]={0,0,0,0,0,0,0,0};

    while(a!=1){

        binario[i]=a%2;

        a=a/2;

        i++;

    }

    binario[i]=a;               // a siempre va a ser igual a 1

    for(int j=7,i=0;j>=0;j--,i++){

        b[i]=binario[j];

    }

}
int Codificacion1(){ //intento del metodo de codificacion 1 sin terminar
    for (itera=0; itera<n ;itera++){
    ori=archivobinario[itera]


    if (contador_0s_1s(a)=2){
        nueva= igual_cantidad_0s_1s(string a, string b);
    }
    else if (contador_0s_1s(a)=0){
        nueva=mayor_cantidad_0s(string a; string b );

    }
    else if (contador_0s_1s(a)=1){
        nueva=mayor_cantidad_1s(string a; string b);
    }
    archivocodificado+=nueva;
    return archivocodificado;
}
}
int contador_0s_1s(string ori){ //funcion para contar la cantidad de unos y ceros. Retorna el numero que mas veces este presente en la cadena

    int tam,cont1=0,cont0=0;

    tam=ori.length();

    for(int i=0;i<tam;i++){

        if(ori[i]=='1'){

            cont1++;

        }

        else if(ori[i]=='0'){

            cont0++;

        }

    }

    if(cont1>cont0){

        return 1;

    }

    else if(cont0>cont1){

        return 0;

    }

    else {

        return 2;

    }

}



string igualcantidad01(string a, string b){//Se reciben 2 cadenas

    int T=0; //tamaño

    T=a.length();//se verifica el tamaño de una de las cadenas

    for(int i=0;i<T;i++){//ciclo que ayudara a modificar los numeros

        if(a[i]=='1'){b[i]='0';}

        else if(a[i]=='0'){b[i]='1';}

    }

    return b;//retornamos la cadena modificada

}

string mas0que1(string a; string b; ) { // se reciben dos cadenas
    int T=0
    T=a.length();//se verifica el tamaño de la cadena original

    for(int i=1;i<T;i+=2){//ciclo que ayudara a modificar los numeros

        if(a[i]=='1'){b[i]='0';}

       else if(a[i]=='0'){b[i]='1';};


}

string mas1que0(string a, string b)){ // se reciben dos cadenas
    int T=0
    T=a.length();//se verifica el tamaño de una de las cadenas

    for(int i=2;i<T;i+=3){//ciclo que ayudara a modificar los numeros

    if(a[i]=='1'){b[i]='0';}

    else if(a[i]=='0'){b[i]='1';}
    }
}

int metodo2(a){ //intento del metodo de codificacion 2 sin terminar, bloqueo personal
    for (i=0; i<n; i++){
        primeracadena[n]=a[i];
    }
}

int main()
{
    cin>> n;
    cin>> opcion;
    while(opcion!=0){
int i=0;

        int n=0;

        int binario[8];

        switch (opcion) {

        case 1:

            cout<<"     BIENVENIDO, PRIMER METODO DE CODIFICACION     "<<endl;

            cout<<"Ingrese el nombre del archivo que deseas abrir: ";
            char nombre;

            cin >> nombre;

            archivo_lectura.open(nombre+".txt",ios::in);//se abre el archivo en modo lectura

            if(archivo_lectura.is_open()){

                cout<<"El archivo ha sido cargado exitosamente"<<endl;

            }

            cout<<"El contenido del archivo es: "<<endl<<endl;

            if(archivo_lectura.is_open()){//en este condicional y el ciclo while obtenemos la informacion contenida en el txt

                while(!archivo_lectura.eof()){//mientras el archivo no halla llegado al final

                    getline(archivo_lectura,contenido);//leemos linea por linea y se guarda la informacion en la variable tipo string contenido

                    cout<<contenido<<endl;//imprimimos el contenido de la variable string contenido

                    i++;//contador de lineas del txt

                }

                i=0;

            archivo_lectura.close();

            }

            archivo_lectura.open(nombre+".txt",ios::in);//se abre el archivo en modo lectura

            if(archivo_lectura.is_open()){//el condicional y el ciclo van a leer caracter por caracter

                while(!archivo_lectura.eof()){

                    texto[i]=archivo_lectura.get();

                    i++;

                }

                n=--i;//aca contaremos el numero de caracteres presentes en el archivo

                archivo_escritura.open("archivo_binario.txt",ios::out);//abrimos el archivo de escritura en modo escritura

                for(int j=0; j<n;j++){//iteramos hasta el ultimo caracter

                    archivo_binario((int)texto[j],binario);//llamamos la funcion convertir binario para convertir en 1s y 0s las letras

                    for(int i=0;i<8;i++){

                        archivo_escritura<<binario[i];//se escribe el binario en el archivo de escritura

                    }

                }

                archivo_escritura.close();//cerramos el archivo de escritura

                cout<<"->codificando el archivo"<<endl;

                Codificacion1();//llamamos el primer metodo de codificacion

            }

            break;

        case 2:

            cout<<"     SEGUNDO METODO DE CODIFICACION     "<<endl;

            break;

        default:

            cout<<"ningun caso asociado intente de nuevo"<<endl;

            break;

        }

    }



    return 0;

}


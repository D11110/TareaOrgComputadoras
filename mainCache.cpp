#include <sstream>
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

vector<int> RAM;
void llenarRAM(vector<int>, int);
int leer(int);
void escribir(int,int); 



int main(int argc, char** argv) {
	int n = 4096; // n puede variar
	llenarRAM(RAM,n);
	for (int i=0;i<=n-2;i++)
        for (int j=i+1;j<=n-1;j++)
           if (leer(i)>leer(j)){
              int temp=leer(i);
              escribir(i, leer(j));
              escribir(j,temp);
			  }


	return 0;
}

void llenarRAM(vector<int> R, int size){
	ifstream infile("datos.txt");
 	string line;
 	int numero;
    while (getline(infile, line)){
        istringstream iss(line);
        for(int i = 0 ; i < size; i++){
       	 if (iss >>numero)
            R.push_back(numero);
        }
    }
    
//	for(int i = 0 ; i < size; i++){
//		cout<<R[i]<<endl;
//	}
//	cout<<endl;	
	cout<<"RAM LLenada"<<endl;
}

int leer (int posicion){
	return posicion;
}

void escribir(int posicion, int valor){
	
}

//	for (int i=0;i<=n-2;i++) el burbuja que nos da el Ing
//        for (int j=i+1;j<=n-1;j++)
//           if (leer(i)>leer(j)){
//              temp=leer(i);
//              escribir(i, leer(j));
//              escribir(j,temp);
//			  }






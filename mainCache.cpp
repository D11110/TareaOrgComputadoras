#include <sstream>
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

vector<int> RAM;
void llenarRAM(vector<int>, int);


int main(int argc, char** argv) {
	llenarRAM(RAM,100);
	cout<<"RAM LLenada"<<endl;
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
	cout<<R.size()<<"este es el size"<<endl;
	for(int i = 0 ; i < size; i++){
		cout<<R[i]<<endl;
	}
	cout<<endl;	
}





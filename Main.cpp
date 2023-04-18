#include<iostream>
class Factorial{
public: 
int n, resultado;
int Calcular(){
	int numero1 = 1;
	int numero2 = 1;
	for (int i = 0; i < n; i++)
	{
		resultado = numero1 * numero2;
		numero2 = numero2 + 1;
		numero1 = resultado;
	}
	cout << "el factorial es:" << resultado << endl;
}
};
using namespace std;
int main(){

    return 0;
}
#include <iostream>
using namespace std;

int main ()
{
	int segundos, minutos, horas,minutos1;
	cout << "escribe una cifra en segundos que quieras saber las horas y minutos que contiene: \n";
	cin >> segundos;
	horas = segundos/3600;
	minutos1 = segundos/60;
	minutos = minutos1%60;
	segundos = segundos%60;
	cout << "El resultado es: " << horas <<" horas " << minutos << " minutos " << segundos << " segundos ";
	return 0;
	
}

#include <iostream>
using namespace std;

int main ()
{
	const float F1 = 32;     // Constante
	const float F2 = 180;    // Constante
	const float C1 = 100;    // Constante
	float C, F;              // Variable

	cout << "Introduce una temperatura en grados centigrados: ";
	cin >> C;
	F = C / 100 * 180 + 32;
	cout << "La temperatura en grados fahrenheit es ";
	cout << F << endl;

	system("PAUSE");
	return 0;
}

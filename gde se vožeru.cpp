#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int x;
int y;
string m1;
string m2;
string moznost1;
string moznost2;

int main() {

	cout << "Zadejte moznost 1: ";
	cin >> m1;
	cout << "\nZadejte moznost 2: ";
	cin >> m2;

	while (true) {
		cout << "\nstiskem klavesy Enter, spustite losovani\n";
		srand(time(0));
		system("pause>0");

		int cislo = rand();

		for (int i = 0; i < cislo; i++) {
			y = (rand()) % 2;
		}
		if (y == 0) {
			moznost1 = m1;
			moznost2 = m2;
		}
		else {
			moznost1 = m2;
			moznost2 = m1;
		}

		for (int i = 0; i < 80000; i++) {

			x = rand();
			cout << x << "\r";
		}
		cout << "\nCislo bylo vygenerovano, a jedna z moznosti vybrana:\n";
		system("pause>0");

		if (x % 2 == 0) {
			cout << moznost1 << "\n\n\n\n";
		}
		else {
			cout << moznost2 << "\n\n\n\n";
		}
		system("pause>0");
	}
	
	return 0;
}


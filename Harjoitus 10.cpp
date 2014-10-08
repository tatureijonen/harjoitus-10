/*
TATU REIJONEN - IIO14S2

Harjoitus 10 (Palautus vko 43)

Tee ohjelma, joka laskee sy�tetyist� kokonaisluvuista sek� positiivisten
ett� negatiivisten kokonaislukujen osuuden. Lukujen sy�tt� lopetetaan
sy�tt�m�ll� luku 0.

Tulostus:
Sy�tit kokonaislukuja seuraavasti:
----------------------------------
Negatiiviset 7 kpl 70.00%
Positiiviset 3 kpl 30.00%
Yhteens� 10 kpl 100.00%

*/

#include <iostream>
using namespace std;
void main()
{
	int luku;
	int positiivinen = 0;
	int negatiivinen = 0;
	
	cout << "Syota kokonaislukuja:\n";
	while (cin >> luku)
		{
			if (luku == 0)
				break;
			if (luku > 0) positiivinen++;
			if (luku < 0) negatiivinen++;
		}
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout.precision(2);
	
	cout << "\nSyotit kokonaislukuja seuraavasti\n*********************************\n\n";
	cout << "Negatiiviset: " << negatiivinen << "kpl   ";
	cout << ((float)negatiivinen / ((float)positiivinen + (float)negatiivinen) * 100) << "%";
	cout << "\nPositiiviset: " << positiivinen << "kpl   ";
	cout << ((float)positiivinen / ((float)positiivinen + (float)negatiivinen) * 100) << "%";
	cout << "\nYhteensa: " << (negatiivinen + positiivinen) << "kpl   ";
	cout << ((float)positiivinen + (float)negatiivinen) / ((float)positiivinen + (float)negatiivinen) * 100 << "%";
	

}

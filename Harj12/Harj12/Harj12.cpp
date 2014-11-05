/**************************
*Ohjelman nimi:Harjoitus 16
*Tekijä:Ville Hakola
*lyhyt kuvaus
*Tee ohjelma, joka kysyy käyttäjältä kokonaisluvun väliltä 1-9 ja
*tulostaa vastauksen perusteella seuraavan kuvion (jos vastaus on 6):
*1
*22
*333
*4444
*55555
*666666
*Versio:1.0
*PVM:12.10.2014
******************************/
#include <iostream>
using namespace std;
int main()
{
	int luku;
	int rivi = 1;
	int sarake;
	cout << "Anna luku 1-9: ";
	cin >> luku;
	if (luku < 10 && luku > 0)
	{
		while (rivi <= luku)
		{
			for (sarake = 1; sarake <= rivi; sarake++)
				cout << rivi;
			rivi++;
			cout << endl;
		}
	}
	else
		cout << "Ohjelmaa ei voida suorittaa" << endl;
	return 0;
}
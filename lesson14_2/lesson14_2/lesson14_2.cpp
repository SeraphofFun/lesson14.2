#include <iostream>
#include <cmath>
using namespace std;
int cube(int num) {
	return pow(num, 3);
}
int bigger(int numo, int numt) {
	if (numo > numt) {
		return numo;
	}
	else if (numo >= numt) {
		return numt;
	}
}
int toplama(int num1, int num2) {
	return num1 + num2;
}
int cixma(int num1, int  num2) {
	return num1 - num2;
}
int vurma(int num1, int  num2) {
	return num1 * num2;
}
int bolme(int num1, int  num2) {
	return num1 / num2;
}
void kvadrat(int uzun) {
	for (int i = 0; i < uzun; i++)
	{
		for (int j = 0; j < uzun; j++)
		{
			if (i == 0 || j == 0) {
				cout << "*";
			}
			else if (i == uzun - 1 || j == uzun - 1) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;

	}
}


void sade(int num) {
	bool x = false;
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			x = true;
			
		}
	}
	if (x == false) {
		cout << "sade eddeddir";
	}
	else {
		cout << "murrekebdir";
	}
}

int faktorial(int num) {
	int fakt = 1;
	for (int i = 1; i <= num; i++)
	{
		fakt *= i;
	}
	return fakt;
}
int quvv(int num, int q) {
	int sum = 1;
	for (int i = 0; i < q; i++)
	{
		sum *= num;
	}
	return sum;
}


int toplamaqeder(int num1, int num2) {
	int cem = 0;
	int minimum;
	int maximum;
	if (num1 < num2) {
		minimum = num1;
		maximum = num2;
	}
	else
	{
		minimum = num2;
		maximum = num1;
	}
	for (int i = minimum; i <= maximum; i++)
	{
		cem += i;
	}
	return cem;
}


void maximum(int num1[10]) {
	
	int maxi = num1[0];
	for (int i = 1; i < 20; i++)
	{

		if (num1[i] > maxi) {
			maxi = num1[i];
		}
	}
	cout << "ededlerde maksimum =" << maxi << endl;

}
int main()
{
	cout << " eded daxil edin - ";
	int num1;
	cin >> num1;
	cout << "kubu = " << cube(num1) << endl;
	cout << endl;

	cout << " iki eded daxil edin - ";
	int num2;
	cin >> num2;
	int num21;
	cin >> num21;
	cout << "daha boyuk = " << bigger(num2, num21);
	cout << endl;

	cout << " iki eded daxil edin - ";
	int num3;
	cin >> num3;
	int num31;
	cin >> num31;
	cout << " toplam(1), cixma(2),vurma(3),bolme(4) eded daxil edin - ";


	cout << endl;

	int nume;
	cin >> nume;
	switch (nume)
	{
	case(1):
		cout << toplama(num3, num31);
		break;
	case(2):
		cout << cixma(num3, num31);
		break;
	case(3):
		cout << vurma(num3, num31);
		break;
	case(4):
		cout << bolme(num3, num31);
		break;
	default:
		cout << "1-4 eded olmalidir";
		break;
	}

	cout << endl;


	cout << "  uzunlugu daxil edin - ";
	int uzun;
	cin >> uzun;
	kvadrat(uzun);
	cout << endl;



	cout << "  eded daxil edin - ";
	int num6;
	cin >> num6;
	sade(num6);
	cout << endl;

	cout << "  eded daxil edin - ";
	int num7;
	cin >> num7;
	cout << "faktorial =" << faktorial(num7);

	cout << endl;


	cout << "  eded daxil edin - ";
	int num8;
	cin >> num8;
	cout << "quvvet edaxil edin";
	int quvvet;
	cin >> quvvet;
	cout << "quvvete qaldiranda = " << quvv(num8, quvvet) << endl;



	cout << "  eded daxil edin - ";
	int num91;
	cin >> num91;
	cout << "  eded daxil edin - ";
	int num92;
	cin >> num92;
	cout << "ededlere qeder cem = " << toplamaqeder(num91, num92);
	cout << endl;
	srand(time(NULL));
	int min = 1;
	int max = 100;
	int arr1[10];
	
	for (int i = 0; i < 10; i++)
	{
		int random = min + rand() % (max - min + 1);
		arr1[i] = random;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr1[i] << " ";
	}
	cout << endl;
	maximum(arr1);
	return 0;
}


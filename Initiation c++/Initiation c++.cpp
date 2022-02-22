// Initiation c++.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;



double Add(double a, double b)
{
	return a + b;
}

double Substract(double a, double b)
{
	return a - b;
}

double Multiply(double a, double b)
{
	return a * b;
}

double Divide(double a, double b)
{
	return a / b;
}

double DivideRest(int a, int b)
{
	return a % b;
}

int main()
{
	vector<string> s;
	s.push_back("1 additionner");
	s.push_back("2 soustraire");
	s.push_back("3 multiplier");
	s.push_back("4 diviser");
	s.push_back("5 division euclidienne");

	for (int i = 0; i < s.size(); i++)
	{
		cout << s[i].c_str() << endl;
	}
	
	string choix;
	string a, b;
	double c, d;
	getline(cin, choix);
	
	getline(cin, a);
	getline(cin, b);
	
	c = stod(a);
	d = stod(b);

	double res;
	
	
	int line = stoi(choix);

	switch (line)
	{
	case 1:
		res = Add(c, d);
		break;

	case 2:
		res = Substract(c, d);
		break;

	case 3:
		res = Multiply(c, d);
		break;

	case 4:
		res = Divide(c, d);
		break;

	case 5:
		res = DivideRest(c, d);
		break;

	default:
		res = 0.00;
		break;
	}
	
	cout << res << endl;
	
	return 0;
}





// Initiation c++.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<string> s;
	s.push_back("1 additionner");
	s.push_back("2 soustraire");
	s.push_back("3 multiplier");
	s.push_back("4 diviser");

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

	double res = 0.00;
	if (stod(choix) == 1)
	{
		res = Add(c,d);
	}
	else if (stod(choix) == 2)
		res = Substract(c,d);
	else if (stod(choix) == 3)
		res = Multiply(c,d);
	else if (stod(choix) == 4)
		res = Divide(c,d);
	
	cout << res << endl;
	
	return 0;
}

int Add(double a,double b)
{
	return a + b;
}

int Substract(double a, double b)
{
	return a - b;
}

int Multiply(double a, double b)
{
	return a * b;
}

int Divide(double a, double b)
{
	return a / b;
}

int DivideRest(int a, int b)
{
	return a % b;
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.

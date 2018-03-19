// Graph.cpp : définit le point d'entrée pour l'application console.
//

#include "stdafx.h"
#include <iostream>

#include "Cgraphe.h"

using namespace std;


int main(int argc,char* argv[])
{
	try
	{
		Cgraphe GRAGraphe1;
		GRAGraphe1.GRAAjouterSommet(1);
		GRAGraphe1.GRAAjouterSommet(2);
		GRAGraphe1.GRAAjouterSommet(3);
		GRAGraphe1.GRAAjouterSommet(3);
		GRAGraphe1.GRAAjouterArc(1,2);
		GRAGraphe1.GRAAjouterArc(2,3);
		GRAGraphe1.GRAAjouterArc(3, 1);
		cout << "taille " << GRAGraphe1.GRALireTailleSommet() << endl;
		GRAGraphe1.GRAAfficherGraphe();
	}catch(CException ce)
	{
		cout << ce.EXELireMsg() << endl;
	}
	
	return 0;
}


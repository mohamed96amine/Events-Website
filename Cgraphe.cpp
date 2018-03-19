

#include "Cgraphe.h"
#include <iostream>

using namespace std;


Cgraphe::Cgraphe()
{
	psGRASommet = NULL;
	uiGRATailleSommet = 0;
}

Cgraphe::Cgraphe(const Cgraphe &GRAObjetParam)
{
	uiGRATailleSommet = GRAObjetParam.uiGRATailleSommet;
	psGRASommet = (Csommet **) malloc(GRAObjetParam.uiGRATailleSommet * sizeof(Csommet*));

	if(psGRASommet == NULL) {
		CException EXEObjet(PROBLEME_ALLOCATION, "Probleme d'allocation");
		throw EXEObjet;
	}

	unsigned int uiBoucle;
	for(uiBoucle = 0 ; uiBoucle < uiGRATailleSommet ; uiBoucle++)
	{
		psGRASommet[uiBoucle] = GRAObjetParam.psGRASommet[uiBoucle];
	}
}

Cgraphe::Cgraphe(char * pcNomFichier)
{
	int i = 0 ;
}


Cgraphe::~Cgraphe()
{
	unsigned int uiBoucle;
	for( uiBoucle = 0 ; uiBoucle < uiGRATailleSommet ; uiBoucle++)
		if(psGRASommet[uiBoucle] != nullptr)
			delete psGRASommet[uiBoucle];
	free(psGRASommet);
}

Csommet ** Cgraphe::GRALireSommets(){
	return psGRASommet;
}

Csommet * Cgraphe::GRALireSommet(unsigned int uiIndiceParam){
	return psGRASommet[uiIndiceParam];
}

unsigned int Cgraphe::GRALireTailleSommet(){
	return uiGRATailleSommet;
}

void Cgraphe::GRAAjouterArc(unsigned int uiSommetDepart, unsigned int uiSommetDestination){
	
	Csommet * psSource = GRALireSommet(uiSommetDepart);
	Csommet * psDest = GRALireSommet(uiSommetDestination);
	if(psSource == NULL || psDest == NULL){
		CException EXEObjet(PROBLEME_SOMMET_INEXISTANT, "Sommet inexistant");
		throw EXEObjet;
	}
	psGRASommet[uiSommetDepart - 1]->SOMAjouterArcPartant(uiSommetDestination);
	psGRASommet[uiSommetDestination -1]->SOMAjouterArcArrivant(uiSommetDepart);
}

void Cgraphe::GRAAjouterSommet(unsigned int iSommet)
{
	if(uiGRATailleSommet==0)
	{
       uiGRATailleSommet++;
	   psGRASommet=(Csommet **) malloc(uiGRATailleSommet * sizeof(Csommet*));

	   if(psGRASommet == NULL)
		   throw CException(1);

	   psGRASommet[0] = new Csommet(iSommet);
	}
	else
	{
		uiGRATailleSommet++;
		psGRASommet = (Csommet **) realloc(psGRASommet, sizeof(Csommet *) * (uiGRATailleSommet));

		if(psGRASommet == NULL)
			throw CException(1);

		psGRASommet[uiGRATailleSommet-1] = new Csommet(iSommet);
	}
		
}

void Cgraphe::GRAAfficherGraphe()
{
	unsigned int uiBoucle, uiBoucle1;
	for(uiBoucle = 0 ; uiBoucle < uiGRATailleSommet; uiBoucle++)
	{
		for(int uiBoucle1 = 0; uiBoucle1 < psGRASommet[uiBoucle]->SOMLireTaillePartant(); uiBoucle1++)
		{
			cout << psGRASommet[uiBoucle]->SOMLireNumero() << " ----> "<<
			psGRASommet[uiBoucle]->SOMLirePartant()[uiBoucle1]->ARCLireDestination() << "\n";
		}
		cout << "\n";
	}
}


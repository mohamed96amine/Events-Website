#include "Csommet.h"



Csommet::Csommet(){
	uiSOMNumero = 0;
	paSOMArrivant =nullptr;
	paSOMPartant = nullptr;
}


Csommet::Csommet(const Csommet &SOMObjetParam){
	uiSOMNumero = SOMObjetParam.uiSOMNumero;
	paSOMArrivant=(Carc**)malloc(SOMObjetParam.uiSOMTailleArrivant * sizeof(Carc*));

	if(paSOMArrivant == NULL) 
	{
		CException EXEObjet(PROBLEME_ALLOCATION, "Probleme d'allocation");
		throw EXEObjet;
	}
	for(uiSOMTailleArrivant = 0; uiSOMTailleArrivant <SOMObjetParam.uiSOMTailleArrivant; uiSOMTailleArrivant++)
	{
		paSOMArrivant[uiSOMTailleArrivant]=SOMObjetParam.paSOMArrivant[uiSOMTailleArrivant];
	}

	paSOMPartant = (Carc**)malloc(SOMObjetParam.uiSOMTaillePartant * sizeof(Carc*));

	if(paSOMPartant == NULL)
	{
		CException exception(PROBLEME_ALLOCATION, "Probleme d'allocation");
		throw exception;
	}
	for(uiSOMTaillePartant = 0; uiSOMTaillePartant <SOMObjetParam.uiSOMTaillePartant; uiSOMTaillePartant++)
	{
		paSOMPartant[uiSOMTaillePartant]=SOMObjetParam.paSOMPartant[uiSOMTaillePartant];
	}
}


Csommet::Csommet(unsigned int uiNumeroParam){
	uiSOMNumero = uiNumeroParam;
	paSOMArrivant = nullptr;
	paSOMPartant = nullptr;
	uiSOMTailleArrivant = 0;
	uiSOMTaillePartant = 0;
}

Csommet::~Csommet(){
	unsigned int uiBoucle;
	for(uiBoucle = 0 ; uiBoucle < uiSOMTailleArrivant; uiBoucle++)
	{
		delete(paSOMArrivant[uiBoucle]);
	}
	free(paSOMArrivant);
	for(uiBoucle = 0; uiBoucle < uiSOMTaillePartant; uiBoucle++)
	{
		delete(paSOMPartant[uiBoucle]);
	}
	free(paSOMPartant);
}

unsigned int Csommet::SOMLireNumero(){
	return uiSOMNumero;
}

void Csommet::SOMModifierNumero(unsigned int uiNumeroParam){
	uiSOMNumero = uiNumeroParam;
	unsigned int uiBoucle;
	for(uiBoucle = 0; uiBoucle < uiSOMTailleArrivant; uiBoucle++)
	{
		paSOMArrivant[uiBoucle]->ARCModifierDestination(uiNumeroParam);
	}
}

unsigned int Csommet::SOMLireTailleArrivant(){
	return uiSOMTailleArrivant;
}

unsigned int Csommet::SOMLireTaillePartant(){
	return uiSOMTaillePartant;
}

int Csommet::SOMLireIndiceArrivant(unsigned int uiDestinationParam){
	unsigned int uiBoucle;
	for(uiBoucle = 0 ; uiBoucle < uiSOMTailleArrivant ; uiBoucle++){
		if(paSOMArrivant[uiBoucle]->ARCLireDestination() == uiDestinationParam)
		{
			return uiBoucle;
		}
	}
	return -1;
}

int Csommet::SOMLireIndicePartant(unsigned int uiDestinationParam){
	unsigned int uiBoucle;
	for(uiBoucle = 0 ; uiBoucle < uiSOMTaillePartant ; uiBoucle++){
		if(paSOMPartant[uiBoucle]->ARCLireDestination() == uiDestinationParam)
		{
			return uiBoucle;
		}
	}
	return -1;
}

Carc ** Csommet::SOMLireArrivant(){
	return paSOMArrivant;
}


Carc ** Csommet::SOMLirePartant(){
	return paSOMPartant;
}

void Csommet::SOMAjouterArcArrivant(unsigned int uiDestinationParam){
	int iIndice = SOMLireIndiceArrivant(uiDestinationParam);
	if(iIndice == -1)
	{
		CException  exception(PROBLEME_ARC_EXISTANT, "L'arc existe déja.");
		throw exception;
	}
	Carc * pNouvelArc = new Carc(uiDestinationParam); // Créer le nouvel arc
	uiSOMTailleArrivant++; // incrementer la taille du tableau de 1
	paSOMArrivant =(Carc**) realloc(paSOMArrivant, (uiSOMTailleArrivant) * sizeof(Carc*)); // réallouer le tableau 
	paSOMArrivant[uiSOMTailleArrivant - 1] = pNouvelArc; //Ajouter au tableau le nouvel arc
	
}

void Csommet::SOMSupprimerArcArrivant(unsigned int uiDestinationParam){
	unsigned int uiIndice;
	uiIndice = SOMLireIndiceArrivant(uiDestinationParam);
	if(uiIndice == -1){
		CException  exception(PROBLEME_ARC_INEXISTANT, "L'arc n'existe pas.");
		throw exception;
	}
	
	delete paSOMArrivant[uiIndice];
	uiSOMTailleArrivant--;
	while(uiIndice < uiSOMTailleArrivant)
	{
		paSOMArrivant[uiIndice] = paSOMArrivant[uiIndice+1];
	}
	paSOMArrivant=(Carc **) realloc(paSOMArrivant,(uiSOMTailleArrivant)*sizeof(Carc*));
}

void Csommet::SOMAjouterArcPartant(unsigned int uiDestinationParam){
	int iIndice = SOMLireIndicePartant(uiDestinationParam);
	if(iIndice == -1)
	{
		CException  exception(PROBLEME_ARC_EXISTANT, "L'arc existe déja.");
		throw exception;
	}
	Carc * pNouvelArc = new Carc(uiDestinationParam); // Créer le nouvel arc
	uiSOMTaillePartant++; // incrementer la taille du tableau de 1
	paSOMPartant =(Carc**) realloc(paSOMPartant, (uiSOMTaillePartant) * sizeof(Carc*)); // réallouer le tableau 
	paSOMPartant[uiSOMTaillePartant - 1] = pNouvelArc; //Ajouter au tableau le nouvel arc
}

void Csommet::SOMSupprimerArcPartant(unsigned int uiDestinationParam){
	unsigned int uiIndice;
	uiIndice = SOMLireIndicePartant(uiDestinationParam);
	if(uiIndice == -1){
		CException  exception(PROBLEME_ARC_INEXISTANT, "L'arc n'existe pas.");
		throw exception;
	}
	delete paSOMPartant[uiIndice];
	uiSOMTaillePartant--;
	while(uiIndice < uiSOMTaillePartant)
	{
		paSOMPartant[uiIndice] = paSOMPartant[uiIndice+1];
	}
	paSOMPartant=(Carc **) realloc(paSOMPartant,(uiSOMTaillePartant)*sizeof(Carc*));
}






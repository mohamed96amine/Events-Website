#ifndef CSOMMET_H
#define CSOMMET_H

#include "Carc.h"
#include "CException.h"


#define PROBLEME_ALLOCATION 0
#define PROBLEME_ARC_EXISTANT 1
#define PROBLEME_ARC_INEXISTANT 2


class Csommet{
	
private:

	unsigned int uiSOMNumero;
	Carc ** paSOMArrivant;
	Carc ** paSOMPartant;
	unsigned int uiSOMTailleArrivant;
	unsigned int uiSOMTaillePartant;

public:

	Csommet();

	/**************************************************************
	* Constructeur de recopie.
	**************************************************************
	*
	* Entree: Un Objet Csommet.
	* sortie: Un Objet Csommet.
	* necessite: n�ant.
	* entraine: Le nouveau objet Csommet est retourn�.
	*/
	Csommet(const Csommet&);

	/**************************************************************
	* Constructeur .
	**************************************************************
	*
	* Entree: Le Num�ro du sommet.
	* sortie: Un Objet Csommet.
	* necessite: n�ant.
	* entraine: Le nouveau objet Csommet est retourn�.
	*/
	Csommet(unsigned int);

	/**************************************************************
	* Destructeur .
	**************************************************************
	*
	* Entree: n�ant.
	* sortie: n�ant.
	* necessite: n�ant.
	* entraine: L'objet est d�truit.
	*/
	~Csommet();
	
	/**************************************************************
	* Methode qui retourne le num�ro du sommet .
	**************************************************************
	*
	* Entree: n�ant.
	* sortie: le num�ro du sommet.
	* necessite: n�ant.
	* entraine: Le num�ro du sommet est retourn�.
	*/
	unsigned int SOMLireNumero();

	/**************************************************************
	*  Methode qui modifie le num�ro du sommet.
	**************************************************************
	*
	* Entree: le nouveau num�ro .
	* sortie: n�ant.
	* necessite: n�ant.
	* entraine: La modification du num�ro.
	*/
	void SOMModifierNumero(unsigned int);

	/**************************************************************
	* Methode qui retourne le nombre d'arcs arrivants.
	**************************************************************
	*
	* Entree: n�ant.
	* sortie: le nombre d'arcs arrivants.
	* necessite: n�ant.
	* entraine: le nombre d'arcs arrivants est retourn�.
	*/
	unsigned int SOMLireTailleArrivant();

	/**************************************************************
	* Methode qui retourne le nombre d'arcs partants.
	**************************************************************
	*
	* Entree: n�ant.
	* sortie: le nombre d'arcs partants.
	* necessite: n�ant.
	* entraine: le nombre d'arcs partants est retourn�.
	*/
	unsigned int SOMLireTaillePartant();
	
	/**************************************************************
	* Methode qui retourne les arcs arrivants.
	**************************************************************
	*
	* Entree: n�ant.
	* sortie: les arcs partants.
	* necessite: n�ant.
	* entraine: les arcs arrivants sont retourn�s.
	*/
	Carc **SOMLireArrivant();

	/**************************************************************
	* Methode qui retourne les arcs partants.
	**************************************************************
	*
	* Entree: n�ant.
	* sortie: les arcs partants.
	* necessite: n�ant.
	* entraine: les arcs partants sont retourn�s.
	*/
	Carc **SOMLirePartant();

	/**************************************************************
	* Methode qui retourne l'indice d'un arc arrivant.
	**************************************************************
	*
	* Entree: la destination du sommt d'ou l'arc vient.
	* sortie: entier.
	* necessite: n�ant.
	* entraine: l'indice de l'arc est retourn� s'il existe , -1 sinon.
	*/
	int SOMLireIndiceArrivant(unsigned int);

	/**************************************************************
	* Methode qui retourne l'indice d'un arc partant.
	**************************************************************
	*
	* Entree: la destination de l'arc.
	* sortie: entier.
	* necessite: n�ant.
	* entraine: l'indice de l'arc est retourn� s'il existe, -1 sinon.
	*/
	int SOMLireIndicePartant(unsigned int);

	/**************************************************************
	* Methode qui ajoute un arc arrivant.
	**************************************************************
	*
	* Entree: Un Carc.
	* sortie: n�ant.
	* necessite: n�ant.
	* entraine: l'ajout d'un Carc au sommet.
	*/
	void SOMAjouterArcArrivant(unsigned int);

	/**************************************************************
	* Methode qui supprime un arc arrivant.
	**************************************************************
	*
	* Entree: l'indice de l'arc arrivant � supprimer.
	* sortie: n�ant.
	* necessite: n�ant.
	* entraine: la suppression du Carc arrivant du sommet.
	*/
	void SOMSupprimerArcArrivant(unsigned int);

	/**************************************************************
	* Methode qui ajoute un arc partant.
	**************************************************************
	*
	* Entree: Un Carc.
	* sortie: n�ant.
	* necessite: n�ant.
	* entraine: l'ajout d'un Carc au sommet.
	*/
	void SOMAjouterArcPartant(unsigned int);

	/**************************************************************
	* Methode qui supprime un arc partant.
	**************************************************************
	*
	* Entree: l'indice de l'arc partant � supprimer.
	* sortie: n�ant.
	* necessite: n�ant.
	* entraine: la suppression du Carc partant du sommet.
	*/
	void SOMSupprimerArcPartant(unsigned int);


	
};


#endif
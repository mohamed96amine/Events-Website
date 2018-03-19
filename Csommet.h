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
	* necessite: néant.
	* entraine: Le nouveau objet Csommet est retourné.
	*/
	Csommet(const Csommet&);

	/**************************************************************
	* Constructeur .
	**************************************************************
	*
	* Entree: Le Numéro du sommet.
	* sortie: Un Objet Csommet.
	* necessite: néant.
	* entraine: Le nouveau objet Csommet est retourné.
	*/
	Csommet(unsigned int);

	/**************************************************************
	* Destructeur .
	**************************************************************
	*
	* Entree: néant.
	* sortie: néant.
	* necessite: néant.
	* entraine: L'objet est détruit.
	*/
	~Csommet();
	
	/**************************************************************
	* Methode qui retourne le numéro du sommet .
	**************************************************************
	*
	* Entree: néant.
	* sortie: le numéro du sommet.
	* necessite: néant.
	* entraine: Le numéro du sommet est retourné.
	*/
	unsigned int SOMLireNumero();

	/**************************************************************
	*  Methode qui modifie le numéro du sommet.
	**************************************************************
	*
	* Entree: le nouveau numéro .
	* sortie: néant.
	* necessite: néant.
	* entraine: La modification du numéro.
	*/
	void SOMModifierNumero(unsigned int);

	/**************************************************************
	* Methode qui retourne le nombre d'arcs arrivants.
	**************************************************************
	*
	* Entree: néant.
	* sortie: le nombre d'arcs arrivants.
	* necessite: néant.
	* entraine: le nombre d'arcs arrivants est retourné.
	*/
	unsigned int SOMLireTailleArrivant();

	/**************************************************************
	* Methode qui retourne le nombre d'arcs partants.
	**************************************************************
	*
	* Entree: néant.
	* sortie: le nombre d'arcs partants.
	* necessite: néant.
	* entraine: le nombre d'arcs partants est retourné.
	*/
	unsigned int SOMLireTaillePartant();
	
	/**************************************************************
	* Methode qui retourne les arcs arrivants.
	**************************************************************
	*
	* Entree: néant.
	* sortie: les arcs partants.
	* necessite: néant.
	* entraine: les arcs arrivants sont retournés.
	*/
	Carc **SOMLireArrivant();

	/**************************************************************
	* Methode qui retourne les arcs partants.
	**************************************************************
	*
	* Entree: néant.
	* sortie: les arcs partants.
	* necessite: néant.
	* entraine: les arcs partants sont retournés.
	*/
	Carc **SOMLirePartant();

	/**************************************************************
	* Methode qui retourne l'indice d'un arc arrivant.
	**************************************************************
	*
	* Entree: la destination du sommt d'ou l'arc vient.
	* sortie: entier.
	* necessite: néant.
	* entraine: l'indice de l'arc est retourné s'il existe , -1 sinon.
	*/
	int SOMLireIndiceArrivant(unsigned int);

	/**************************************************************
	* Methode qui retourne l'indice d'un arc partant.
	**************************************************************
	*
	* Entree: la destination de l'arc.
	* sortie: entier.
	* necessite: néant.
	* entraine: l'indice de l'arc est retourné s'il existe, -1 sinon.
	*/
	int SOMLireIndicePartant(unsigned int);

	/**************************************************************
	* Methode qui ajoute un arc arrivant.
	**************************************************************
	*
	* Entree: Un Carc.
	* sortie: néant.
	* necessite: néant.
	* entraine: l'ajout d'un Carc au sommet.
	*/
	void SOMAjouterArcArrivant(unsigned int);

	/**************************************************************
	* Methode qui supprime un arc arrivant.
	**************************************************************
	*
	* Entree: l'indice de l'arc arrivant à supprimer.
	* sortie: néant.
	* necessite: néant.
	* entraine: la suppression du Carc arrivant du sommet.
	*/
	void SOMSupprimerArcArrivant(unsigned int);

	/**************************************************************
	* Methode qui ajoute un arc partant.
	**************************************************************
	*
	* Entree: Un Carc.
	* sortie: néant.
	* necessite: néant.
	* entraine: l'ajout d'un Carc au sommet.
	*/
	void SOMAjouterArcPartant(unsigned int);

	/**************************************************************
	* Methode qui supprime un arc partant.
	**************************************************************
	*
	* Entree: l'indice de l'arc partant à supprimer.
	* sortie: néant.
	* necessite: néant.
	* entraine: la suppression du Carc partant du sommet.
	*/
	void SOMSupprimerArcPartant(unsigned int);


	
};


#endif
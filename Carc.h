#ifndef CARC_H
#define CARC_H



class Carc {

private:
	unsigned int uiDestination;

public:
	
	/**************************************************************
	* Constructeur par defaut.
	**************************************************************
	*
	* Entree: néant
	* sortie: néant
	* necessite: néant
	* entraine: Initialise l'objet.
	*/
	Carc();

	/**************************************************************
	* Constructeur .
	**************************************************************
	*
	* Entree: entier
	* sortie: néant
	* necessite: néant
	* entraine: Initialise l'objet.
	*/
	Carc(unsigned int);

	/**************************************************************
	* Constructeur de recopie.
	**************************************************************
	*
	* Entree: néant
	* sortie: néant
	* necessite: néant
	* entraine: Initialise l'objet.
	*/
	Carc(Carc const &);

	/**************************************************************
	*  Methode qui retourne le numero de la destination.
	**************************************************************
	*
	* Entree: néant
	* sortie: int la destination.
	* necessite: néant
	* entraine: retourne le numero de la destination.
	*/
	int ARCLireDestination();

	/**************************************************************
	* Methode qui modfiie le numero de la destination.
	**************************************************************
	*
	* Entree: entier le numero
	* sortie: néant.
	* necessite: néant.
	* entraine: Modifie le numero de la destination
	*/
	void ARCModifierDestination(unsigned int);



};

#endif
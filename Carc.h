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
	* Entree: n�ant
	* sortie: n�ant
	* necessite: n�ant
	* entraine: Initialise l'objet.
	*/
	Carc();

	/**************************************************************
	* Constructeur .
	**************************************************************
	*
	* Entree: entier
	* sortie: n�ant
	* necessite: n�ant
	* entraine: Initialise l'objet.
	*/
	Carc(unsigned int);

	/**************************************************************
	* Constructeur de recopie.
	**************************************************************
	*
	* Entree: n�ant
	* sortie: n�ant
	* necessite: n�ant
	* entraine: Initialise l'objet.
	*/
	Carc(Carc const &);

	/**************************************************************
	*  Methode qui retourne le numero de la destination.
	**************************************************************
	*
	* Entree: n�ant
	* sortie: int la destination.
	* necessite: n�ant
	* entraine: retourne le numero de la destination.
	*/
	int ARCLireDestination();

	/**************************************************************
	* Methode qui modfiie le numero de la destination.
	**************************************************************
	*
	* Entree: entier le numero
	* sortie: n�ant.
	* necessite: n�ant.
	* entraine: Modifie le numero de la destination
	*/
	void ARCModifierDestination(unsigned int);



};

#endif
#ifndef CEXCEPTION_H
#define CEXCEPTION_H


#include <iostream>


class CException{

private:
	unsigned int uiEXENum;
	char* pcEXEMsg;

public:

	
	/**************************************************************
	* Constructeur par defaut.
	**************************************************************
	*
	* Entree: n�ant.
	* sortie: Un Objet CException.
	* necessite: n�ant.
	* entraine: Le nouveau objet CException est retourn�.
	*/
	CException();
		
	/**************************************************************
	* Constructeur de recopie.
	**************************************************************
	*
	* Entree: Un Objet CException.
	* sortie: Un Objet CException.
	* necessite: n�ant.
	* entraine: Le nouveau objet CException est retourn�.
	*/
	CException(CException const& EXEObjetParam);

	/**************************************************************
	* Constructeur .
	**************************************************************
	*
	* Entree: Le Num�ro de l'exception.
	* sortie: Un Objet CException.
	* necessite: n�ant.
	* entraine: Le nouveau objet CException est retourn�.
	*/
	CException(unsigned int uiValeurParam);


	/**************************************************************
	* Constructeur .
	**************************************************************
	*
	* Entree: Le Num�ro de l'exception et le message � afficher.
	* sortie: Un Objet CException.
	* necessite: n�ant.
	* entraine: Le nouveau objet CException est retourn�.
	*/
	CException(unsigned int uiEXENumParam, char * pcEXEMsgParam);


	/**************************************************************
	* Destructeur .
	**************************************************************
	*
	* Entree: n�ant.
	* sortie: n�ant.
	* necessite: n�ant.
	* entraine: L'objet est d�truit.
	*/
	~CException();
		
	
	// Methodes : 
	/**************************************************************
	* Methode qui retourne le num�ro de l'exception .
	**************************************************************
	*
	* Entree: n�ant.
	* sortie: le num�ro de l'exception.
	* necessite: n�ant.
	* entraine: Le num�ro de l'exception est retourn�.
	*/
	unsigned int EXELireNum();

	/**************************************************************
	*  Methode qui modifie le  le num�ro de l'exception.
	**************************************************************
	*
	* Entree: le nouveau num�ro .
	* sortie: n�ant.
	* necessite: n�ant.
	* entraine: La modification du num�ro.
	*/
	void EXEModifierNum(unsigned int uiEXENumParam);

	/**************************************************************
	* Methode qui retourne le message l'exception .
	**************************************************************
	*
	* Entree: n�ant.
	* sortie: n�ant.
	* necessite: n�ant.
	* entraine: Le message de l'exception est retourn�.
	*/
	char * EXELireMsg();

	/**************************************************************
	*  Methode qui modifie le  le message de l'exception.
	**************************************************************
	*
	* Entree: le nouveau message .
	* sortie: n�ant.
	* necessite: n�ant.
	* entraine: La modification du message.
	*/
	void EXEModifierMsg(char * pcEXEMsgParam);
};

#endif
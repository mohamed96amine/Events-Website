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
	* Entree: néant.
	* sortie: Un Objet CException.
	* necessite: néant.
	* entraine: Le nouveau objet CException est retourné.
	*/
	CException();
		
	/**************************************************************
	* Constructeur de recopie.
	**************************************************************
	*
	* Entree: Un Objet CException.
	* sortie: Un Objet CException.
	* necessite: néant.
	* entraine: Le nouveau objet CException est retourné.
	*/
	CException(CException const& EXEObjetParam);

	/**************************************************************
	* Constructeur .
	**************************************************************
	*
	* Entree: Le Numéro de l'exception.
	* sortie: Un Objet CException.
	* necessite: néant.
	* entraine: Le nouveau objet CException est retourné.
	*/
	CException(unsigned int uiValeurParam);


	/**************************************************************
	* Constructeur .
	**************************************************************
	*
	* Entree: Le Numéro de l'exception et le message à afficher.
	* sortie: Un Objet CException.
	* necessite: néant.
	* entraine: Le nouveau objet CException est retourné.
	*/
	CException(unsigned int uiEXENumParam, char * pcEXEMsgParam);


	/**************************************************************
	* Destructeur .
	**************************************************************
	*
	* Entree: néant.
	* sortie: néant.
	* necessite: néant.
	* entraine: L'objet est détruit.
	*/
	~CException();
		
	
	// Methodes : 
	/**************************************************************
	* Methode qui retourne le numéro de l'exception .
	**************************************************************
	*
	* Entree: néant.
	* sortie: le numéro de l'exception.
	* necessite: néant.
	* entraine: Le numéro de l'exception est retourné.
	*/
	unsigned int EXELireNum();

	/**************************************************************
	*  Methode qui modifie le  le numéro de l'exception.
	**************************************************************
	*
	* Entree: le nouveau numéro .
	* sortie: néant.
	* necessite: néant.
	* entraine: La modification du numéro.
	*/
	void EXEModifierNum(unsigned int uiEXENumParam);

	/**************************************************************
	* Methode qui retourne le message l'exception .
	**************************************************************
	*
	* Entree: néant.
	* sortie: néant.
	* necessite: néant.
	* entraine: Le message de l'exception est retourné.
	*/
	char * EXELireMsg();

	/**************************************************************
	*  Methode qui modifie le  le message de l'exception.
	**************************************************************
	*
	* Entree: le nouveau message .
	* sortie: néant.
	* necessite: néant.
	* entraine: La modification du message.
	*/
	void EXEModifierMsg(char * pcEXEMsgParam);
};

#endif
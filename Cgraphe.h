
#ifndef CGRAPH_H
#define CGRAPH_H

#include "Csommet.h"
#include "Carc.h"

#define PROBLEME_SOMMET_INEXISTANT 3

class Cgraphe{
	
private:
	Csommet ** psGRASommet;
	unsigned int uiGRATailleSommet;

public:
	/**************************************************************
	* Constructeur par defaut.
	**************************************************************
	*
	* Entree: néant.
	* sortie: Un Objet Cgraphe.
	* necessite: néant.
	* entraine: Le nouveau objet Cgraphe est retourné.
	*/
	Cgraphe();

	/**************************************************************
	* Constructeur de recopie.
	**************************************************************
	*
	* Entree: Un Objet Cgraphe.
	* sortie: Un Objet Cgraphe.
	* necessite: néant.
	* entraine: Le nouveau objet Cgraphe est retourné.
	*/
	Cgraphe(const Cgraphe &);

	/**************************************************************
	* Constructeur .
	**************************************************************
	*
	* Entree: Le chemin vers un fichier contenant un objet Cgraphe.
	* sortie: Un Objet Cgraphe.
	* necessite: néant.
	* entraine: Le nouveau objet Cgraphe est retourné.
	*/
	Cgraphe(char *);

	/**************************************************************
	* Destructeur .
	**************************************************************
	*
	* Entree: néant.
	* sortie: néant.
	* necessite: néant.
	* entraine: L'objet est détruit.
	*/
	~Cgraphe();

	/**************************************************************
	* Methode qui retourne les sommets du graphe.
	**************************************************************
	*
	* Entree: néant.
	* sortie: les sommets du graphe.
	* necessite: néant.
	* entraine: les sommets du graphe sont retournés.
	*/
	Csommet ** GRALireSommets();

	/**************************************************************
	* Methode qui retourne le sommet à l'indice passé en paramètre.
	**************************************************************
	*
	* Entree: l'indice.
	* sortie: le sommet à l'indice passé en paramètre.
	* necessite: néant.
	* entraine: le sommet à l'indice passé en paramètre est retourné.
	*/
	Csommet * GRALireSommet(unsigned int);

	/**************************************************************
	* Methode qui retourne le nombre de sommets.
	**************************************************************
	*
	* Entree: néant.
	* sortie: le nombre de sommets.
	* necessite: néant.
	* entraine: le nombre de sommets est retourné.
	*/
	unsigned int GRALireTailleSommet();

	/**************************************************************
	* Methode qui ajoute un arc.
	**************************************************************
	*
	* Entree: Sommet de depart, Sommet d'arrivée.
	* sortie: néant.
	* necessite: néant.
	* entraine: l'ajout d'un Carc au graphe.
	*/
	void GRAAjouterArc(unsigned int, unsigned int);

	/**************************************************************
	* Methode qui modifie un arc.
	**************************************************************
	*
	* Entree: Numéro du sommet de depart, Numéro du ancien sommet de depart, Numéro du nouveau sommet d'arrivée.
	* sortie: néant.
	* necessite: néant.
	* entraine: la modification d'un Carc.
	*/
	void GRAModifierArc(unsigned int, unsigned int, unsigned int);

	/**************************************************************
	* Methode qui supprime un arc du graphe.
	**************************************************************
	*
	* Entree: Numéro du sommet de depart, Numéro du sommet d'arrivée.
	* sortie: néant.
	* necessite: néant.
	* entraine: la suppresion d'un Carc du graphe.
	*/
	void GRASupprimerArc(unsigned int, unsigned int);

	/**************************************************************
	* Methode qui ajoute un sommet.
	**************************************************************
	*
	* Entree: numero.
	* sortie: néant.
	* necessite: néant.
	* entraine: l'ajout d'un Csommet au graphe.
	*/
	void GRAAjouterSommet(unsigned int);

	/**************************************************************
	* Methode qui modifie un sommet du graphe.
	**************************************************************
	*
	* Entree: Le numéro du sommet à changer, le nouveau numéro.
	* sortie: néant.
	* necessite: néant.
	* entraine: la modification d'un sommet au graphe.
	*/
	void GRAModifierSommet(unsigned int, unsigned int);

	/**************************************************************
	* Methode qui supprime un sommet du graphe.
	**************************************************************
	*
	* Entree: Numéro du sommet .
	* sortie: néant.
	* necessite: néant.
	* entraine: la suppresion du sommet du graphe.
	*/
	void GRASupprimerSommet(unsigned int);


	/**************************************************************
	* Methode qui affiche la graphe .
	**************************************************************
	*
	* Entree: néant.
	* sortie: néant.
	* necessite: néant.
	* entraine: Affiche le graphe à l'ecran.
	*/
	void GRAAfficherGraphe();


	/**************************************************************
	* Operteur =.
	**************************************************************
	*
	* Entree: Un objet Cgraphe.
	* sortie: Un objet Cgraphe.
	* necessite: néant.
	* entraine: Recopier l'objet passé en paramètre dans l'objet courant.
	*/
	Cgraphe& operator=(const Cgraphe &);

	Cgraphe& GRAinverse(Cgraphe GRAg);
};

#endif
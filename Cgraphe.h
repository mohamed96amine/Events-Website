
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
	* Entree: n�ant.
	* sortie: Un Objet Cgraphe.
	* necessite: n�ant.
	* entraine: Le nouveau objet Cgraphe est retourn�.
	*/
	Cgraphe();

	/**************************************************************
	* Constructeur de recopie.
	**************************************************************
	*
	* Entree: Un Objet Cgraphe.
	* sortie: Un Objet Cgraphe.
	* necessite: n�ant.
	* entraine: Le nouveau objet Cgraphe est retourn�.
	*/
	Cgraphe(const Cgraphe &);

	/**************************************************************
	* Constructeur .
	**************************************************************
	*
	* Entree: Le chemin vers un fichier contenant un objet Cgraphe.
	* sortie: Un Objet Cgraphe.
	* necessite: n�ant.
	* entraine: Le nouveau objet Cgraphe est retourn�.
	*/
	Cgraphe(char *);

	/**************************************************************
	* Destructeur .
	**************************************************************
	*
	* Entree: n�ant.
	* sortie: n�ant.
	* necessite: n�ant.
	* entraine: L'objet est d�truit.
	*/
	~Cgraphe();

	/**************************************************************
	* Methode qui retourne les sommets du graphe.
	**************************************************************
	*
	* Entree: n�ant.
	* sortie: les sommets du graphe.
	* necessite: n�ant.
	* entraine: les sommets du graphe sont retourn�s.
	*/
	Csommet ** GRALireSommets();

	/**************************************************************
	* Methode qui retourne le sommet � l'indice pass� en param�tre.
	**************************************************************
	*
	* Entree: l'indice.
	* sortie: le sommet � l'indice pass� en param�tre.
	* necessite: n�ant.
	* entraine: le sommet � l'indice pass� en param�tre est retourn�.
	*/
	Csommet * GRALireSommet(unsigned int);

	/**************************************************************
	* Methode qui retourne le nombre de sommets.
	**************************************************************
	*
	* Entree: n�ant.
	* sortie: le nombre de sommets.
	* necessite: n�ant.
	* entraine: le nombre de sommets est retourn�.
	*/
	unsigned int GRALireTailleSommet();

	/**************************************************************
	* Methode qui ajoute un arc.
	**************************************************************
	*
	* Entree: Sommet de depart, Sommet d'arriv�e.
	* sortie: n�ant.
	* necessite: n�ant.
	* entraine: l'ajout d'un Carc au graphe.
	*/
	void GRAAjouterArc(unsigned int, unsigned int);

	/**************************************************************
	* Methode qui modifie un arc.
	**************************************************************
	*
	* Entree: Num�ro du sommet de depart, Num�ro du ancien sommet de depart, Num�ro du nouveau sommet d'arriv�e.
	* sortie: n�ant.
	* necessite: n�ant.
	* entraine: la modification d'un Carc.
	*/
	void GRAModifierArc(unsigned int, unsigned int, unsigned int);

	/**************************************************************
	* Methode qui supprime un arc du graphe.
	**************************************************************
	*
	* Entree: Num�ro du sommet de depart, Num�ro du sommet d'arriv�e.
	* sortie: n�ant.
	* necessite: n�ant.
	* entraine: la suppresion d'un Carc du graphe.
	*/
	void GRASupprimerArc(unsigned int, unsigned int);

	/**************************************************************
	* Methode qui ajoute un sommet.
	**************************************************************
	*
	* Entree: numero.
	* sortie: n�ant.
	* necessite: n�ant.
	* entraine: l'ajout d'un Csommet au graphe.
	*/
	void GRAAjouterSommet(unsigned int);

	/**************************************************************
	* Methode qui modifie un sommet du graphe.
	**************************************************************
	*
	* Entree: Le num�ro du sommet � changer, le nouveau num�ro.
	* sortie: n�ant.
	* necessite: n�ant.
	* entraine: la modification d'un sommet au graphe.
	*/
	void GRAModifierSommet(unsigned int, unsigned int);

	/**************************************************************
	* Methode qui supprime un sommet du graphe.
	**************************************************************
	*
	* Entree: Num�ro du sommet .
	* sortie: n�ant.
	* necessite: n�ant.
	* entraine: la suppresion du sommet du graphe.
	*/
	void GRASupprimerSommet(unsigned int);


	/**************************************************************
	* Methode qui affiche la graphe .
	**************************************************************
	*
	* Entree: n�ant.
	* sortie: n�ant.
	* necessite: n�ant.
	* entraine: Affiche le graphe � l'ecran.
	*/
	void GRAAfficherGraphe();


	/**************************************************************
	* Operteur =.
	**************************************************************
	*
	* Entree: Un objet Cgraphe.
	* sortie: Un objet Cgraphe.
	* necessite: n�ant.
	* entraine: Recopier l'objet pass� en param�tre dans l'objet courant.
	*/
	Cgraphe& operator=(const Cgraphe &);

	Cgraphe& GRAinverse(Cgraphe GRAg);
};

#endif
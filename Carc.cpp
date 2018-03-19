#include "Carc.h"




Carc::Carc(){
	uiDestination = 0;
}


Carc::Carc(unsigned int iDestionationParam){
	uiDestination = iDestionationParam;
}


Carc::Carc(Carc const &ARCObjectParam){
	uiDestination = ARCObjectParam.uiDestination;
}


int Carc::ARCLireDestination(){
	return uiDestination;
}


void Carc::ARCModifierDestination(unsigned int iDestionationParam){
	uiDestination = iDestionationParam;
}


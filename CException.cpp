#include "CException.h"


CException::CException(){
	uiEXENum = 0;
	pcEXEMsg = NULL;
}


CException::CException(CException const& EXEObjetParam){
	uiEXENum = EXEObjetParam.uiEXENum;
	pcEXEMsg = _strdup(EXEObjetParam.pcEXEMsg);
}


CException::CException(unsigned int uiValeurParam){
	uiEXENum = uiValeurParam;
	pcEXEMsg = NULL;
}


CException::CException(unsigned int uiEXENumParam, char * pcEXEMsgParam){
	uiEXENum = uiEXENumParam;
	pcEXEMsg = _strdup(pcEXEMsgParam);
}


CException::~CException(){
	free(pcEXEMsg);
}


unsigned int CException::EXELireNum(){
	return uiEXENum;
}


void CException::EXEModifierNum(unsigned int uiEXENumParam){
	uiEXENum = uiEXENumParam;
}


char * CException::EXELireMsg(){
	return pcEXEMsg;
}


void CException::EXEModifierMsg(char * pcEXEMsgParam){
	pcEXEMsg = _strdup(pcEXEMsgParam);
}


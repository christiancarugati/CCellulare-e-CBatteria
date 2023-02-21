#pragma once
#include "CBatteria.h"
class CCellulare
{
private:

	CBatteria batteria;
	int numSMS;
	int numTelefonate;
	int secondiChiamate;

public:

	CCellulare();
	void chiama();
	void mandaSMS();
	void setSecChiamata();

};


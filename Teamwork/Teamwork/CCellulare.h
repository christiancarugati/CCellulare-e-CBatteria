#pragma once
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
	void setSMS();
	void setSecChiamata();

};


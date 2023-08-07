#include "Harl.hpp"

Harl::Harl(void)
{
	fmap.insert(std::make_pair("DEBUG",&Harl::debug));	
	fmap.insert(std::make_pair("INFO",&Harl::info));	
	fmap.insert(std::make_pair("WARNING",&Harl::warning));	
	fmap.insert(std::make_pair("ERROR",&Harl::error));	
	std::cout << "Harl spawned"<< std::endl;
	return;
}
Harl::~Harl(void)
{
	std::cout << "Harl as disapear" << std::endl;
	return;
}
void Harl::debug(void)
{
	std::cout << "Ce message contient des informations contextuelles sur le systeme" << std::endl;
	return;
}
void Harl::info(void)
{
	std::cout << "Ce message contient des informations detaillés" << std::endl;
	return;
}
void Harl::warning(void)
{
	std::cout << "ce message signal un probleme potentiel dans le systeme " << std::endl;
	return;
}
void Harl::error(void)
{
	std::cout << "Ce message signal un erreur irrecuperable dans le systeme" << std::endl;
	return;
}
void Harl::complain(std::string level)
{
	MFP f = fmap[level];
	if(f)
	{
		(this->*f)();
	}
}	

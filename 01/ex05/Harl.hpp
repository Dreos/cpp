#include <iostream>
#include <map>
#ifndef HARL_H
#define HARL_H

class Harl
{
	public :
		Harl(void);
		~Harl(void);
		void complain(std::string level);
	private :
		typedef void (Harl::*MFP)(void);
    		std::map <std::string, MFP> fmap;
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
};

#endif

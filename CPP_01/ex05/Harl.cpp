// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Harl.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: riael <Don't give up | #42gether>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2024/08/16 23:34:27 by riael             #+#    #+#             //
//   Updated: 2024/08/16 23:37:37 by riael            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //
#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug(void)
{
	std::cout << "[DEBUG] My lawyer has advised me to say this is a debug msg" << std::endl;

}
void Harl::info(void)
{
	std::cout << "[INFO] My lawyer has advised me to say this is an info msg" << std::endl;
}
void Harl::warning(void)
{
	std::cout << "[WARNING] My lawyer has advised me to say this is a warning msg" << std::endl;
}
void Harl::error(void)
{
	std::cout << "[ERROR] My lawyer has advised me ot say this is an error msg" << std::endl;
}

void Harl::complain(std::string level)
{
	int i;

	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*functions[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	i = 0;
	while (i < 4)
	{
		if (levels[i] == level)
			(this->*functions[i])();
		i++;
	}
}

// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: riael <Don't give up | #42gether>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2024/08/16 23:39:53 by riael             #+#    #+#             //
//   Updated: 2024/08/16 23:39:54 by riael            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Harl.hpp"

int main (void)
{
	Harl harl;

	harl.complain("DEBUG");
	harl.complain("INFO");
    harl.complain("WARNING");
	harl.complain("ERROR");
	harl.complain("INFO");
    harl.complain("INFO");
    harl.complain("ERROR");
    harl.complain("ERROR");
    harl.complain("ERROR");
	return (0);
}
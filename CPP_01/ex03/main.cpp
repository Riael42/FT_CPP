// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: riael <Don't give up | #42gether>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2024/08/16 22:42:43 by riael             #+#    #+#             //
//   Updated: 2024/08/16 22:43:03 by riael            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"



int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club"); //can't do snake_case cause the subject forces us to do this
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club); //can't do snake_case cause the subject forces us to do this
		jim.attack();
		club.setType("some other type of club"); //can't do snake_case cause the subject forces us to do this
		jim.attack();
	}
	return 0;
}

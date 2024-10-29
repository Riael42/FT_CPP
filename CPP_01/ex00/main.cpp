// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: riael <Don't give up | #42gether>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2024/08/16 21:58:14 by riael             #+#    #+#             //
//   Updated: 2024/08/16 21:58:16 by riael            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
    return new Zombie(name); //allocated on heap because it returns
}

void randomChump(std::string name)
{
    Zombie zombie(name) //allocated on stack because void functions can't return variables
    zombie.announce(); //stack allocation is faster so more ef🐟ent 
}

int main() 
{
    Zombie* zombie = newZombie("NewZombie");
    zombie->announce();
    delete zombie;

    randomChump("RandomChump");

    return 0;
}
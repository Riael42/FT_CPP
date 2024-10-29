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

int main() 
{
    Zombie *horde = Zombie::zombieHorde(10, "Zombie");  
    horde->set_name("Banana"); //if first zombie is banana then it returned pointer to first zombie
    for (int i = 0; i < 10; i += 1)
    {
        std::cout<<"Zombie number: "<<i + 1<<":     ";
        horde[i].announce();
    }
    std::cout<<"\n deleting all zombies \n";
    delete[] horde; 
    return (0);
}
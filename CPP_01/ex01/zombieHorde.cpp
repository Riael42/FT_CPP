// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   zombieHorde.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: riael <Don't give up | #42gether>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2024/08/16 22:08:18 by riael             #+#    #+#             //
//   Updated: 2024/08/16 22:08:19 by riael            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //
#include "Zombie.hpp"

Zombie *Zombie::zombieHorde(int N, std::string name)
{
    Zombie *horde = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        horde[i].set_name(name);
    }
    return horde;
}
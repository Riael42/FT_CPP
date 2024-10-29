// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanA.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: riael <Don't give up | #42gether>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2024/08/16 22:47:10 by riael             #+#    #+#             //
//   Updated: 2024/08/16 22:47:11 by riael            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //
#pragma once

#include "Weapon.hpp"
#include <string>

class HumanA
{
    private:
        std::string name;
        Weapon &weapon; //reference to weapon since humana is always armed
    public:
        HumanA(std::string name, Weapon &weapon); //weapon in constructor
        ~HumanA();
        void attack();
} ;
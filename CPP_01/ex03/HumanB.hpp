// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanB.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: riael <Don't give up | #42gether>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2024/08/16 22:50:57 by riael             #+#    #+#             //
//   Updated: 2024/08/16 22:51:05 by riael            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#pragma once

#include "Weapon.hpp"
#include <string>

class HumanB
{
    private:
        std::string name;
        Weapon *weapon; //pointer to weapon because it can be null
    public:
        HumanB(std::string name);
        ~HumanB();
        void attack();
        void setWeapon(Weapon &weapon);
} ;
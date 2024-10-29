// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Weapon.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: riael <Don't give up | #42gether>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2024/08/16 22:43:48 by riael             #+#    #+#             //
//   Updated: 2024/08/16 22:43:49 by riael            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Weapon.hpp"

    const std::string &Weapon::getType()
    {
        return type;
    }
    void Weapon::setType(const std::string &newType)
    {
        type = newType;
    }
    Weapon::Weapon(std::string type)
    {
        setType(type);
    }

    Weapon::~Weapon()
    {
    }
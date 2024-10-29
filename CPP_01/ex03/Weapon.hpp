// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Weapon.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: riael <Don't give up | #42gether>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2024/08/16 22:39:56 by riael             #+#    #+#             //
//   Updated: 2024/08/16 22:39:58 by riael            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //
#pragma once //c++ ifndef

#include <string>

class Weapon
{
private:
    std::string type;
public:
    const std::string &getType();
    void setType(const std::string &newType);
    Weapon(std::string type);
    ~Weapon();
};

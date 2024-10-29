// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: riael <Don't give up | #42gether>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2024/08/16 21:49:23 by riael             #+#    #+#             //
//   Updated: 2024/08/16 21:49:24 by riael            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#pragma once //C++ ifndef

#include <iostream>
#include <string>

class Zombie 
{
private:
    std::string name;

public:
    Zombie(std::string name);
    ~Zombie();
    void announce(void);
};
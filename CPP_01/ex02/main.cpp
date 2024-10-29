// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: riael <Don't give up | #42gether>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2024/08/16 22:31:57 by riael             #+#    #+#             //
//   Updated: 2024/08/16 22:31:58 by riael            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <string>

int main(void)
{
    std::string brain = "HI THIS IS BRAIN";
    std::string *stringPTR = &brain; 
    std::string &stringREF = brain; 

    std::cout << "Memory address of brain variable: " << &brain << std::endl; 
    std::cout << "Memory address held by stringPTR: " << stringPTR << std::endl; 
    std::cout << "Memory address held by stringREF: " << &stringREF << std::endl; 
    std::cout << std::endl;

    std::cout << "Value of brain variable: " << brain << std::endl; 
    std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "Value pointed to by stringREF: " << stringREF << std::endl; 
}

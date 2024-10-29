// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   megaphone.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: riael <Don't give up | #42gether>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2024/06/10 15:08:51 by riael             #+#    #+#             //
//   Updated: 2024/06/10 15:08:52 by riael            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

int main(int argcpp, char **argv) //argcpp instead of argc to show this is a c++ manner
{
    if (argcpp == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBAKC NOISE *";
    else
    {
        for (int i = 1; i < argcpp; i++) //this would be illegal if we had a norm
        {
            std::string str(argv[i]);
            for (std::string::iterator iter = str.begin(); iter != str.end(); ++iter) //std::string c++98 compatible
                std::cout << (char)std::toupper(*it); 
            if (i != argcpp - 1)
                std::cout << " ";
        }
    }
        std::cout << std::endl;
}
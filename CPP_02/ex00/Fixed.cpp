// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: riael <Don't give up | #42gether>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/01/07 09:11:08 by riael             #+#    #+#             //
//   Updated: 2025/01/07 10:13:11 by riael            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //
#include "Fixed.hpp"

Fixed::Fixed ()
{
	this->val = 0;
	std::cout<<"A default constructor that initializes the fixed-point number value to 0."<<std::endl;
}

Fixed::Fixed(const Fixed &copy_src)
{
	std::cout<<"A copy constructor."<<std::endl;
	*this = copy_src;
}

Fixed &Fixed::operator = (const Fixed &src) //done this way to allow chaining 
{											//despite having coded for 2 years while being told
	std::cout<<"A copy assignment operator overload."<<std::endl; //same line declaration is bad
	this->val = src.getRawBits();
	return *this;
}

int	Fixed::getRawBits(void) const
{
	std::cout<<"getRawBits member function called"<<std::endl;
	return (this->val);
}

void Fixed::setRawBits(int const num)
{
	this->val = num;
}

Fixed::~Fixed()
{
	std::cout<<"Deconstructor called"<<std::endl;
}

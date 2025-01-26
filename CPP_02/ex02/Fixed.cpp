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

Fixed::Fixed(const int num)
{
	std::cout<<"A constructor that takes an integer as a parameter."<<std::endl; //converts it to corresponding fixed point value
	this->val = num << frac_bits;
}

Fixed::Fixed(const float num)
{
	std::cout<<"A constructor that takes a float as a parameter."<<std::endl; //converts it to corresponding fixed point value
	this->val = roundf(num * (1 << frac_bits));
}

float Fixed::toFloat(void) const
{
	return ((float)this->val / (float)(1 << frac_bits));
}

int Fixed::toInt(void) const
{
	return (this->val >> frac_bits);
}

std::ostream &operator << (std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}


bool Fixed::operator>(const Fixed &fixed) const {
    return (this->val > fixed.getRawBits());
}

bool Fixed::operator<(const Fixed &fixed) const {
    return (this->val < fixed.getRawBits());
}

bool Fixed::operator>=(const Fixed &fixed) const {
    return (this->val >= fixed.getRawBits());
}

bool Fixed::operator<=(const Fixed &fixed) const {
    return (this->val <= fixed.getRawBits());
}

bool Fixed::operator==(const Fixed &fixed) const {
    return (this->val == fixed.getRawBits());
}

bool Fixed::operator!=(const Fixed &fixed) const {
    return (this->val != fixed.getRawBits());
}

Fixed Fixed::operator+(const Fixed &fixed) const {
    Fixed res;
    res.setRawBits(this->val + fixed.getRawBits());
    return res;
}

Fixed Fixed::operator-(const Fixed &fixed) const {
    Fixed res;
    res.setRawBits(this->val - fixed.getRawBits());
    return res;
}

Fixed Fixed::operator*(const Fixed &fixed) const {
    Fixed res;
    res.setRawBits((this->val * fixed.getRawBits()) >> frac_bits); 
    return res;
}

Fixed Fixed::operator/(const Fixed &fixed) const {
    Fixed res;
    res.setRawBits((this->val << frac_bits) / fixed.getRawBits()); //don't divide by 0 pls
    return res;
}

Fixed& Fixed::operator++() { 
    this->val++;
    return *this;
}

Fixed Fixed::operator++(int) { // Post-increment 
    Fixed res(*this);
    this->val++;
    return res;
}

Fixed& Fixed::operator--() { // 
    this->val--;
    return *this;
}

Fixed Fixed::operator--(int) { // Post-decrement 
    Fixed res(*this);
    this->val--;
    return res;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return a;
	return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return a;
	return b;
}
const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
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

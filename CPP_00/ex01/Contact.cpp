// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Contact.cpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: riael <Don't give up | #42gether>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2024/06/10 15:09:01 by riael             #+#    #+#             //
//   Updated: 2024/06/10 15:09:02 by riael            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Contact.hpp"
#include <string>
#include <iostream>
#include <limits>

std::string   Contact::getFirstName() const
{
    return (this->firstName);
}

std::string   Contact::getLastName() const
{
    return (this->lastName);
}

std::string   Contact::getNickName() const
{
    return (this->nickName);
}

std::string   Contact::getDarkestSecret() const
{
    return (this->darkestSecret);
}

std::string   Contact::getPhoneNumber() const
{
    return (this->phoneNumber);
}

Contact Contact::createFromCin()
{
    Contact         new_contact;
    std::string     input;

    new_contact.isEmpty = false;
    std::cout << "First name: ";
    std::cin >> input;
    new_contact.setFirstName(input);

    std::cout << "Last name: ";
    std::cin >> input;
    new_contact.setLastName(input);


    std::cout << "Nickname: ";
    std::cin >> input;
    new_contact.setNickName(input);


    std::cout << "Darkest secret: ";
    std::cin >> input;
    new_contact.setDarkestSecret(input);


    std::cout << "Phone number: ";
    std::cin >> input;
    new_contact.setPhoneNumber(input);

    return(new_contact);
}

//This issue has been unsolved since 2010
//I do not believe there is a way to solve it
//https://cplusplus.com/forum/beginner/26873/

void Contact::setFirstName(std::string firstName)
{
    if (firstName.empty() || std::cin.fail() == true)
    {
        throw std::runtime_error("Error: The first name can't be empty");
        std::terminate();
    }
    this->firstName = firstName;
}

void Contact::setLastName(std::string lastName)
{
    if (lastName.empty()|| std::cin.fail() == true)
    {
        throw std::runtime_error("Error: The last name can't be empty");
        std::terminate();
    }
    this->lastName = lastName;
}

void Contact::setNickName(std::string nickName)
{
    if (nickName.empty()|| std::cin.fail() == true)
    {
        throw std::runtime_error("Error: The nickname can't be empty");
        std::terminate();
    }
    this->nickName = nickName;
}

void Contact::setDarkestSecret(std::string darkestSecret)
{
    if (darkestSecret.empty()|| std::cin.fail() == true)
    {
        throw std::runtime_error("Error: The darkest secret can't be empty");
        std::terminate();
    }
    this->darkestSecret = darkestSecret;
}

void Contact::setPhoneNumber(std::string phoneNumber)
{
    if (phoneNumber.empty()|| std::cin.fail() == true)
    {
        throw std::runtime_error("Error: The phone number can't be empty");
        std::terminate();
    }
    this->phoneNumber = phoneNumber;
}


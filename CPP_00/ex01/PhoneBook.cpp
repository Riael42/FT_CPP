// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PhoneBook.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: riael <Don't give up | #42gether>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2024/06/10 15:09:07 by riael             #+#    #+#             //
//   Updated: 2024/06/10 15:09:09 by riael            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "PhoneBook.hpp"
#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <limits>

PhoneBook::PhoneBook()
{
    index = 0;
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::start_phonebook()
{
    std::string input;

    int i = 0;
    while (i < 5)
    {
        display_menu();
        std::cin >> input;
        if (std::cin.fail() == true)
        {
            //this error has been a thing since 2010
            //don't think there's a way to fix it 
            //https://cplusplus.com/forum/beginner/26873/
            throw std::runtime_error("Cin has crashed quitting program!");
            std::terminate();
        }
        run_command(input);
        i += 1;
    }
}

void PhoneBook::display_menu()
{
    std::cout <<"[MAIN MENU]" << std::endl;
    std::cout << "42 phonebook activated" << std::endl;
    std::cout << "Enter a command: ADD, SEARCH, EXIT" << std::endl;
}

void PhoneBook::run_command(std::string input)
{
    if (input == "ADD")
        save_contact();
    else if (input == "SEARCH")
        search_contact();
    else if (input == "EXIT")
        exit(0);
    else
        discard_input(input);
}

void PhoneBook::discard_input(std::string input) 
{
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.sync(); 
    input = "";
    std::cout << "Your input has been discarded" << std::endl;
}
void PhoneBook::save_contact()
{
    Contact new_contact;

    std::cout<< "Enter a new contact" << std::endl;
    new_contact = new_contact.createFromCin();
    if (contacts[index].isEmpty == false)
    {
        contacts[index] = new_contact;
        index += 1;
    }
    if (index == 8)
        index = 0;
}

void PhoneBook::print_contacts()
{
    std::cout << "|   Index  |First Name| Last Name| Nickname |" <<std::endl;
    int i = 0;
    while (i < index)
    {
        std::cout << "|";
        std::cout << std::setw(10) << i;
        std::cout << "|";
        if (contacts[i].getFirstName().length() > 10)
            std::cout << contacts[i].getFirstName().substr(0, 9) << ".";
        else
            std::cout << std::setw(10) << contacts[i].getFirstName();
        std::cout << "|";
        if (contacts[i].getLastName().length() > 10)
            std::cout << contacts[i].getLastName().substr(0, 9) << ".";
        else
            std::cout << std::setw(10) << contacts[i].getLastName();
        std::cout << "|";
        if (contacts[i].getNickName().length() > 10)
            std::cout << contacts[i].getNickName().substr(0, 9) << ".";
        else
            std::cout << std::setw(10) << contacts[i].getNickName();
        std::cout << "|" << std::endl;
        i++;
    }
}

void PhoneBook::search_contact()
{
    int input;

    print_contacts();
    std::cout << "Enter an index between 0 and " << index << ": " << std::endl;
    std::cin >> input;
    std::cout << "Starting search..." << std::endl;
    if (std::cin.fail() == true)
        return;
    if (input < 0 || input > index || contacts[input].getFirstName().empty())
        print_search_error();
    else
        {
            if (index == 0)
                std::cout << "No contacts in the phonebook" << std::endl;
            else
            {
            std::cout << contacts[input].getFirstName() << std::endl;
            std::cout << contacts[input].getLastName() << std::endl;
            std::cout << contacts[input].getNickName() << std::endl;
            std::cout << contacts[input].getDarkestSecret() << std::endl;
            std::cout << contacts[input].getPhoneNumber() << std::endl;
            }
        }
}

void PhoneBook::print_search_error()
{
    std::cout << "You are an input but we do not grant you the rank of valid." << std::endl;
}
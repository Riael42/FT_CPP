#pragma once //C++ equivalent of ifndef 

#include "Contact.hpp"
#include <string>
#include <iostream>

class PhoneBook
{
public:

    PhoneBook();
    ~PhoneBook();

    void    start_phonebook();
    void    display_menu();
    void    run_command(std::string input);
    void    discard_input(std::string input);
    void    save_contact();
    void    search_contact();
    void    print_search_error();
    void    print_contacts();

private:
    Contact contacts[8]; //I broke the norm and I liked it
    int index;

};
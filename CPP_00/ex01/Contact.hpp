#pragma once 

#include <string>
#include <iostream>

class Contact
{
    private: 
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string darkestSecret;
        std::string phoneNumber;
        void                setFirstName(std::string firstName);
        void                setLastName(std::string lastName);
        void                setNickName(std::string nickName);
        void                setDarkestSecret(std::string darkestSecret);
        void                setPhoneNumber(std::string phoneNumber);

    public:
        std::string   getFirstName() const;
        std::string   getLastName() const;
        std::string   getNickName() const;
        std::string   getDarkestSecret() const;
        std::string   getPhoneNumber() const;
        Contact             createFromCin();
        bool                isEmpty;
};
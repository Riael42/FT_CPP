// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Harl.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: riael <Don't give up | #42gether>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2024/08/16 23:38:12 by riael             #+#    #+#             //
//   Updated: 2024/08/16 23:38:13 by riael            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //
#pragma once

#include <iostream>

class Harl
{
	private:
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
	public:
		void	complain( std::string level );
        Harl();
        ~Harl();
};

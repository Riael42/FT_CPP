// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: riael <Don't give up | #42gether>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/01/07 09:01:55 by riael             #+#    #+#             //
//   Updated: 2025/01/07 09:14:06 by riael            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //
#pragma once

#include <iostream>

class Fixed
{
	private:
		int					val;
		static const int	frac_bits = 8;
	public:
		Fixed();
		Fixed(const Fixed	&copy_src);
		~Fixed();
		Fixed	&operator=(const Fixed	&copy_src);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

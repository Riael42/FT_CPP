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
#include <math.h> //why in god's name would you use cmath in c++?

class Fixed
{
	private:
		int					val;
		static const int	frac_bits = 8;
	public:
		Fixed();
		Fixed(const Fixed	&copy_src);
		Fixed(const float num);
		Fixed(const int num);
		~Fixed();
		Fixed	&operator=(const Fixed	&copy_src);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

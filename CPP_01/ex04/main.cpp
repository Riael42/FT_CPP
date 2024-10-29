// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: riael <Don't give up | #42gether>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2024/08/16 23:06:33 by riael             #+#    #+#             //
//   Updated: 2024/08/16 23:06:40 by riael            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //
#include <iostream>
#include <fstream>
#include <string>

int main(int argcpp, char* argv[]) 
{
	if (argcpp != 4) //err check arguments 
	{
		std::cerr << "Usage: " << argv[0] << " filename s1 s2" << std::endl;
		return 1;
	}

	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	std::ifstream input_file(filename);
	if (!input_file.is_open()) 
	{
		std::cerr << "Error: unable to open file " << filename << std::endl;
		return 1;
	}

	std::ofstream output_file(filename + ".replace");
	if (!output_file.is_open()) 
	{
		std::cerr << "Error: unable to open file " << filename << ".replace" << std::endl;
		return 1;
	}

	std::string line;
	while (std::getline(input_file, line)) 
	{
		std::string new_line = "";
		size_t pos = 0;
		while ((pos = line.find(s1)) != std::string::npos) 
		{
			new_line += line.substr(0, pos) + s2;
			line.erase(0, pos + s1.length());
		}
		new_line += line;
		output_file << new_line << std::endl;
	}

	input_file.close();
	output_file.close();

	return 0;
}

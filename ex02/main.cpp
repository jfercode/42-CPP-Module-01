/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaferna2 < jaferna2@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 18:32:03 by jaferna2          #+#    #+#             */
/*   Updated: 2025/05/05 18:43:04 by jaferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include <string>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string& stringREF = str;

	std::cout << "Memory address of string variable: " 
			  << &str
			  << std::endl
			  << "Memory address helded of stringPTR variable: " 
			  << stringPTR 
			  << std::endl
			  << "Memory address helded of stringREF variable: "
			  << &stringREF
			  << std::endl;
	std::cout << "Value of string variable: " 
			  << str
			  << std::endl
			  << "Value pointed to by stringPTR: " 
			  << *stringPTR 
			  << std::endl
			  << "Value pointed to by stringREF: "
			  << stringREF
			  << std::endl;
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belguabd <belguabd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:16:20 by belguabd          #+#    #+#             */
/*   Updated: 2024/11/16 17:51:45 by belguabd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <sstream>
#include <cmath>

static int parse_input(const std::string &data)
{
    if (data.size() > 1 && std::isalpha(data[0]))
        std::cout << "Error in your input!!\n", std::exit(1);

    for (size_t i = 1; data[i]; i++)
        if (std::isalpha(data[i]) && data[i] != 'f')
            std::cout << "Error in your input!!\n", std::exit(1);
    return (0);
}
static long double ft_atoi(const std::string &data)
{
    long double num;

    std::size_t pos = data.find('f', 0);
    if (pos != std::string::npos)
        std::stringstream(data.substr(0, pos)) >> num;
    else
        std::stringstream(data) >> num;
    return num;
}

void ScalarConverter::convert(const std::string &data)
{
    parse_input(data);
    long double num = ft_atoi(data);
    if (std::isalpha(data[0]))
        num = data[0];
    char char_value = static_cast<char>(num);
    int int_value = static_cast<int>(num);
    double double_value = static_cast<double>(num);
    float flaot_value = static_cast<float>(num);

    if (std::isprint(char_value))
        std::cout << "char: " << char_value << std::endl;
    else
        std::cout << "char: " << "Non displayable" << std::endl;
    
    std::cout << "int: " << int_value << std::endl;
    std::cout << "float: " << flaot_value << (std::floor(num) == num ? ".0f" : "f") << std::endl;
    std::cout << "double: " << double_value << (std::floor(num) == num ? ".0" : "") << std::endl;
};
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belguabd <belguabd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 17:22:10 by belguabd          #+#    #+#             */
/*   Updated: 2024/11/29 13:38:53 by belguabd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP


#include <iostream>
#include <cstdint>

struct Data
{
    int age;
};

class Serialization
{
public:
    Serialization();
    Serialization(const Serialization &other);
    Serialization &operator=(const Serialization &other);
    ~Serialization();
    static uintptr_t serialize(Data *ptr);
    static Data *deserialize(uintptr_t raw);
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belguabd <belguabd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 09:16:28 by belguabd          #+#    #+#             */
/*   Updated: 2024/11/17 11:13:53 by belguabd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "C.hpp"
#include "Utils.hpp"

int main()
{
    Base *ptr = generate();
    Base &ref = *ptr;
    identify(ptr);
    identify(ref);
}
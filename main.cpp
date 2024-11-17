/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belguabd <belguabd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 08:35:41 by belguabd          #+#    #+#             */
/*   Updated: 2024/11/17 10:13:23 by belguabd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>
using namespace std;

class Base
{
public:
    virtual ~Base() {}
};

class Derived : public Base
{
public:
    void display() { cout << "Derived class" << endl; }
};

int main()
{
    Base baseObj;
    Derived derivedObj;
    Derived derivedObj1;

    Base &baseRef = derivedObj;

    try
    {
        Derived &derivedRef = dynamic_cast<Derived &>(baseRef); // Safe cast
        derivedRef.display();
    }
    catch (const bad_cast &e)
    {
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 19:05:55 by sbhatta           #+#    #+#             */
/*   Updated: 2023/12/14 08:29:04 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate(void)
{
    int random;
    std::srand(std::time(0));

    random = (std::rand() % 3) + 1;
    
    switch(random)
    {
        case 1:
            return (new A());
        case 2:
            return (new B());
        case 3:
            return (new C());
    }
    return (0);  
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "The actual type of the object pointed to by p is: 'A'" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "The actual type of the object pointed to by p is: 'B'" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "The actual type of the object pointed to by p is: 'C'" << std::endl;
    else
        std::cout << "Cannot detect the object type" << std::endl;
}

void identify(Base& p)
{
    try{
        if (dynamic_cast<A*>(&p))
            std::cout << "The actual type of the object pointed to by p is: 'A'" << std::endl;
    }
    catch (const std::exception& e){}
    try{
        if (dynamic_cast<B*>(&p))
            std::cout << "The actual type of the object pointed to by p is: 'B'" << std::endl;
    }
    catch (const std::exception& e){}
    try{
        if (dynamic_cast<C*>(&p))
            std::cout << "The actual type of the object pointed to by p is: 'C'" << std::endl;
    }
    catch (const std::exception& e){}
}

int main(void)
{
    Base *store;

    store = generate();
    identify(store);
    identify(&(*store));
    delete store;
    return (0);
}
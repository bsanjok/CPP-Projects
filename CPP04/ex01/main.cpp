/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:16:22 by sbhatta           #+#    #+#             */
/*   Updated: 2023/12/06 12:33:43 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"


int main()
{
    const Animal* a[4];
    Dog *basic;
    basic = new Dog();
    basic->getBrain()->setIdea(0, "First idea");
    Dog tmp = *basic;

    std::cout << "basic's idea: " << basic->getBrain()->getIdea(0) << std::endl;
    std::cout << "tmp's idea: " << tmp.getBrain()->getIdea(0) << std::endl;
    basic->getBrain()->setIdea(0, "Changed my mind!");
    std::cout << "basic's idea: " << basic->getBrain()->getIdea(0) << std::endl;
    std::cout << "tmp's idea: " << tmp.getBrain()->getIdea(0) << std::endl;
    std::cout << "DELETING BASIC!" << std::endl;
    delete basic;
    std::cout << "tmp's idea: " << tmp.getBrain()->getIdea(0) << std::endl;
    for (int i = 0; i < 3; ++i)
    {
        if (i < 2)
            a[i] = new Dog();
        else
            a[i] = new Cat();
    }
    for (int i = 0; i< 3; ++i)
        delete a[i];
    return 0; 
}

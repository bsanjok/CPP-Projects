/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:59:08 by sbhatta           #+#    #+#             */
/*   Updated: 2023/12/05 16:54:23 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {
    private:
        Brain* _brain;
    public:
    Dog();
    virtual ~Dog();
    Dog(const Dog &obj);
    Dog& operator=(const Dog &rhs);

    virtual void makeSound() const;
    Brain* getBrain();
};
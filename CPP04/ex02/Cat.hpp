/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:03:10 by sbhatta           #+#    #+#             */
/*   Updated: 2023/12/05 17:48:34 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal{

private:
    Brain* _brain;
public:
    Cat();
    virtual ~Cat();
    Cat(const Cat &obj);
    Cat& operator=(const Cat &rhs);

    virtual void makeSound() const;
    Brain* getBrain();
};
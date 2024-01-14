/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:03:10 by sbhatta           #+#    #+#             */
/*   Updated: 2023/12/05 13:16:57 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include "Animal.hpp"
class Cat : public Animal{

private:

public:
    Cat();
    virtual ~Cat();
    Cat(const Cat &obj);
    Cat& operator=(const Cat &rhs);

    virtual void makeSound() const;
};
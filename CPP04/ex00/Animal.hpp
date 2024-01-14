/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:53:13 by sbhatta           #+#    #+#             */
/*   Updated: 2023/12/05 13:18:21 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>

class Animal {

private:

protected:
    std::string _type;

public:
    Animal();
    virtual ~Animal();
    Animal(const Animal &obj);
    Animal(std::string type);
    Animal& operator=(const Animal &rhs);

    const std::string getType() const;
    virtual void makeSound() const;
};
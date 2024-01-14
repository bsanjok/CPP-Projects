/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 13:25:38 by sbhatta           #+#    #+#             */
/*   Updated: 2023/12/05 13:35:07 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>

class WrongAnimal{

private:

protected:
    std::string _type;

public:
    WrongAnimal();
    ~WrongAnimal();
    WrongAnimal(const WrongAnimal &obj);
    WrongAnimal(std::string type);
    WrongAnimal& operator=(const WrongAnimal &rhs);
    
    const std::string getType() const;
    void makeSound() const;
};
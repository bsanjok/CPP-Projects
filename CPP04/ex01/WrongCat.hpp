/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 13:31:49 by sbhatta           #+#    #+#             */
/*   Updated: 2023/12/05 13:33:50 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

private:

public:
    WrongCat();
    ~WrongCat();
    WrongCat(const WrongCat &obj);
    WrongCat& operator=(const WrongCat &rhs);

    void makeSound() const;

};
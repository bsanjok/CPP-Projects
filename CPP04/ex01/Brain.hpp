/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:26:50 by sbhatta           #+#    #+#             */
/*   Updated: 2023/12/05 17:47:26 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>

class Brain
{

private:
    std::string *_ideas;
    
public:
    Brain();
    ~Brain();
    Brain(const Brain &obj);
    Brain& operator=(const Brain &rhs);

    std::string getIdea(int index);
    void setIdea(int index, std::string idea);
};
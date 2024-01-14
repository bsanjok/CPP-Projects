/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 18:30:39 by sbhatta           #+#    #+#             */
/*   Updated: 2023/12/13 19:05:20 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdint.h>

struct Data {
    int var;
    char ch;
};

class Serializer {

private:
    ~Serializer();
    Serializer();
    Serializer(const Serializer &obj);
    Serializer& operator=(const Serializer &rhs);

public:
    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
};
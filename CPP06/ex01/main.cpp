/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 18:37:18 by sbhatta           #+#    #+#             */
/*   Updated: 2023/12/14 08:22:22 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
    Data obj;
    Data *objptr;
    Data *deseralizedptr;

    objptr = &obj;
    uintptr_t serialized = 0; 
    
    std::cout << "BEFORE SERIALIZING" << std::endl;
    std::cout << "Serialized: " << serialized << std::endl;
    std::cout << "objptr: " << objptr << std::endl;
    serialized = Serializer::serialize(objptr);
    std::cout << std::endl << "AFTER SERIALIZING" << std::endl;
    std::cout << "Serialized: " << serialized << std::endl;
    std::cout << "objptr: " << objptr << std::endl;
    deseralizedptr = Serializer::deserialize(serialized);
    std::cout << std::endl << "AFTER DESERIALIZING" << std::endl;
    std::cout << "Serialized: " << serialized << std::endl;
    std::cout << "deserialized ptr: " << deseralizedptr << std::endl;
    std::cout << "objptr: " << objptr << std::endl;
    objptr->var = 1;
    std::cout << "objptr->int var: " << objptr->var << std::endl;
    return (0);
}
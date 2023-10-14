/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 13:34:50 by sbhatta           #+#    #+#             */
/*   Updated: 2023/10/07 13:45:52 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    Harl instance;

    instance.complain("DEBUG");
    instance.complain("INFO");
    instance.complain("WARNING");
    instance.complain("ERROR");
    return (0);
}

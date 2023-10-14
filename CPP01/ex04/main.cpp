/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 20:24:08 by sbhatta           #+#    #+#             */
/*   Updated: 2023/10/08 11:07:08 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Nosed.hpp"

int main(int argc, char **argv)
{
    std::ifstream       fin;
    std::ofstream       fout;
    std::stringstream   buff;
    
    if (argc != 4)
    {
        std::cout << "Do me a favor, **ENTER 3 ARGS**, No more, No less! thanks!" << std::endl;
        return (0);
    }
    if (!argv || !argv[1] || !argv[2] || !argv[3] )
        return (0);
        
    Nosed sedLife((std::string) argv[2], (std::string)argv[3], (std::string)argv[1]);
    if (sedLife.getS1().length() == 0)
    {
        std::cout << "How about we actually add some string to s1 arg?" << std::endl;
        return (0);
    }
    
    fin.open(argv[1]);
    if (!fin)
    {
        std::cout << "Are you sure there is such file as '" << argv[1] << "'?" << std::endl;
        return (0);
    }
    
    buff << fin.rdbuf();
    sedLife.setBuffer(buff.str());
    buff.clear();
    if (!sedLife.myReplace())
        return (0);
    fout.open(sedLife.getFout().c_str());
    if (!fout)
    {
        std::cout << "Damn! I couldn't open '" << sedLife.getFout() << "' for you :(" << std::endl;
        return (0);
     }
    fout << *sedLife.getBuffer();
    fin.close();
    fout.close();
    return (0);
    
}

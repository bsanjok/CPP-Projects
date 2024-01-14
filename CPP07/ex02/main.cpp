/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 12:37:04 by sbhatta           #+#    #+#             */
/*   Updated: 2023/12/15 13:28:19 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.tpp"

int main(void)
{
    std::cout << "<MAKING INTEGER ARRAY>" << std::endl;
    Array<int> holder(0);
    Array<int> integers(10);
    holder = integers;
    integers[2] = 4;
    integers[4] = 2; 
    for(int i = 0; i < 10; i++)
    {
        std::cout << "integers[" << i << "]: " << integers[i] << std::endl;
    }
    std::cout << std::endl << "<DEEP COPY: ASSIGNMENT OPERATOR TEST>" << std::endl;
    for(int i = 0; i < 10; i++)
    {
        std::cout << "holder[" << i << "]: " << holder[i] << std::endl;
    }
    std::cout << std::endl << "<DEEP COPY: COPY CONSTRUCTOR TEST>" << std::endl;
    Array<int>holder2(holder);
    holder[1] = 3;
    holder[3] = 1;
    for(int i = 0; i < 10; i++)
    {
        std::cout << "holder[" << i << "]: " << holder[i] << std::endl;
    }
    for(int i = 0; i < 10; i++)
    {
        std::cout << "holder2[" << i << "]: " << holder2[i] << std::endl;
    }
    std::cout << std::endl << "<EXCEPTION TEST>" << std::endl;
    try
    {
         std::cout << "integers[" << 10 << "]: " << integers[10] << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl << "<MAKING STRING ARRAY>" << std::endl;
    Array<std::string> strings(5);
    strings[2] = "Sanjok";
    strings[4] = "Bhatta";
    for(int i = 0; i < 5; i++)
    {
        std::cout << "integers[" << i << "]: " << strings[i] << std::endl;
    }
    try
    {
         std::cout << "integers[" << 5 << "]: " << strings[5] << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}

// #include "Array.tpp"
// #include <stdlib.h>

// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }


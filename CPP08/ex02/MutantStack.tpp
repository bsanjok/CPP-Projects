/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 18:10:17 by sbhatta           #+#    #+#             */
/*   Updated: 2023/12/17 19:24:55 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template<typename T, typename Container>
MutantStack<T, Container>::MutantStack()
{
    
}

template<typename T, typename Container>
MutantStack<T, Container>::~MutantStack()
{
    
}

template<typename T, typename Container>
MutantStack<T, Container>::MutantStack(const MutantStack &obj) : std::stack<T, Container>(obj)
{

}

template<typename T, typename Container>
MutantStack<T, Container>& MutantStack<T, Container>::operator=(const MutantStack &rhs)
{
    if (this != &rhs)
    {
        std::stack<T, Container>::operator=(rhs);
    }
    return (*this);
}

template<typename T, typename Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::begin()
{
    return (std::stack<T, Container>::c.begin());
}

template<typename T, typename Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::end()
{
    return (std::stack<T, Container>::c.end());
}

template<typename T, typename Container>
typename MutantStack<T, Container>::const_iterator MutantStack<T, Container>::cbegin() const
{
    return (std::stack<T, Container>::c.begin());
}

template<typename T, typename Container>
typename MutantStack<T, Container>::const_iterator MutantStack<T, Container>::cend() const
{   
    return (std::stack<T, Container>::c.end());
}

template<typename T, typename Container>
typename MutantStack<T, Container>::reverse_iterator MutantStack<T, Container>::rbegin()
{
    return (std::stack<T, Container>::c.rbegin());
}

template<typename T, typename Container>
typename MutantStack<T, Container>::reverse_iterator MutantStack<T, Container>::rend()
{
    return (std::stack<T, Container>::c.rend());
}

template<typename T, typename Container>
typename MutantStack<T, Container>::const_reverse_iterator MutantStack<T, Container>::crbegin() const
{
    return (std::stack<T, Container>::c.rbegin());
}

template<typename T, typename Container>
typename MutantStack<T, Container>::const_reverse_iterator MutantStack<T, Container>::crend() const
{   
    return (std::stack<T, Container>::c.rend());
}

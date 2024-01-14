/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 16:41:37 by sbhatta           #+#    #+#             */
/*   Updated: 2023/12/17 19:59:57 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.tpp"

int main(void)
{
    MutantStack<int, std::deque<int> > mstack;
    std::deque<int> my;
    MutantStack<int, std::deque<int> >::iterator iter;

    for (int i = 10; i >= 1; i--)
    {
        
        my.push_back(i);
        mstack.push(i);
    }
    iter = mstack.begin();
    for(int i = 0; i < 10; i++)
    {
        std::cout << *iter << ", ";
        iter++;
    }
    std::cout << std::endl;
    std::cout << "deque begin: " << *(my.begin()) << std::endl;
    std::cout << "deque end: " << *(my.end() - 1) << std::endl;
    std::cout << "deque rbegin: " << *(my.rbegin()) << std::endl;
    std::cout << "deque rend: " << *(my.rend() - 1) << std::endl;
    std::cout << std::endl;
    const MutantStack<int, std::deque<int> > const_mstack = mstack;
    std::cout << "TOP: " << mstack.top() << std::endl;
    std::cout << "begin: " << *(mstack.begin()) << std::endl;
    std::cout << "end: " << *(mstack.end() - 1) << std::endl;
    std::cout << "rbegin: " << *(mstack.rbegin()) << std::endl;
    std::cout << "end: " << *(mstack.rend() - 1) << std::endl;
    std::cout << std::endl;
    std::cout << "cbegin: " << *(const_mstack.cbegin()) << std::endl;
    std::cout << "cend: " << *(const_mstack.cend() - 1) << std::endl;
    std::cout << "crbegin: " << *(const_mstack.crbegin()) << std::endl;
    std::cout << "crend: " << *(const_mstack.crend() - 1) << std::endl;

    MutantStack<int, std::deque<int> >::iterator it_start;
    MutantStack<int, std::deque<int> >::iterator it_end;
    it_start = mstack.begin();
    it_end = mstack.end();
    std::cout << "before increment it_start: " << (*it_start) << std::endl;
    ++it_start;
    std::cout << "after increment it_start: " << (*it_start) << std::endl;
    --it_end;
    std::cout << "after decrement it_end: " << (*it_end) << std::endl;
    
    return (0);
}

// int main()
// {
// MutantStack<int> mstack;
// mstack.push(5);
// mstack.push(17);
// std::cout << mstack.top() << std::endl;
// mstack.pop();
// std::cout << mstack.size() << std::endl;
// mstack.push(3);
// mstack.push(5);
// mstack.push(737);
// //[...]
// mstack.push(0);
// MutantStack<int>::iterator it = mstack.begin();
// MutantStack<int>::iterator ite = mstack.end();
// ++it;
// --it;
// while (it != ite)
// {
// std::cout << *it << std::endl;
// ++it;
// }
// std::stack<int> s(mstack);
// return 0;
// }

// #include <list>
// int main()
// {
// std::list<int> mstack;
// mstack.push_back(5);
// mstack.push_back(17);
// std::cout << mstack.back() << std::endl;
// mstack.pop_back();
// std::cout << mstack.size() << std::endl;
// mstack.push_back(3);
// mstack.push_back(5);
// mstack.push_back(737);
// //[...]
// mstack.push_back(0);
// std::list<int>::iterator it = mstack.begin();
// std::list<int>::iterator ite = mstack.end();
// ++it;
// --it;
// while (it != ite)
// {
// std::cout << *it << std::endl;
// ++it;
// }
// std::list<int> s(mstack);
// return 0;
// }
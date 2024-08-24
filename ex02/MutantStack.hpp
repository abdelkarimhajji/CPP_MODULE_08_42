/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 12:36:33 by ahajji            #+#    #+#             */
/*   Updated: 2024/08/23 12:40:15 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MUT_HPP
#define MUT_HPP

#include <iostream>
#include <stack>
#include <list>

template <typename T>
class	MutantStack : public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::reverse_iterator iterator;
		
		MutantStack() : std::stack<T>()
		{
			
		}
		MutantStack(MutantStack const& st) : std::stack<T>(st)
		{
			
		}
		MutantStack& operator=(MutantStack const& st)
		{
			if(this != &st)
				std::stack<T>::operator=(st);
			return *this;
		}
		~MutantStack()
		{
			
		}
		iterator begin()
		{
			return this->c.rbegin();
		}
		iterator end()
		{
			return this->c.rend();
		}
};

#endif
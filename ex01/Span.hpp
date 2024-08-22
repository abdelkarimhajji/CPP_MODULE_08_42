/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 09:20:16 by ahajji            #+#    #+#             */
/*   Updated: 2024/08/22 12:19:49 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span
{
    private:
        std::vector<int> numbers;
        unsigned int max;
    public:
        Span(unsigned int max) : max(max)
        {
        
        };
        void    addNumber(int number)
        {
            int i = 0;
            while (i < this->numbers.size())
            {
                if(this->numbers[i] == number)
                    throw "same number";
                i++;
            }
            this->numbers.push_back(number);
        };
};

#endif
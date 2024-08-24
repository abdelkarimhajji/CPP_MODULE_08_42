/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 09:20:16 by ahajji            #+#    #+#             */
/*   Updated: 2024/08/24 11:50:49 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <cstdlib>

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
            if(this->numbers.size() >= this->max)
                throw "same number\n";
            this->numbers.push_back(number);
        };
        int    shortestSpan()
        {
            std::vector<int>::size_type i = 0 ;
            int shortest = std::numeric_limits<int>::max();
            if(this->numbers.size() == 0 || this->numbers.size() == 1)
                throw "dosnt has required numbers\n";
            
            while (i < numbers.size() - 1)
            {
                if(std::abs(numbers[i] - numbers[i + 1]) < shortest)
                    shortest = std::abs(numbers[i] - numbers[i + 1]);
                i++;
            }
            return shortest;
        }
        int     longestSpan()
        {
            std::vector<int>::size_type i = 0;
            int shourtTest = std::numeric_limits<int>::max();
            int maxTest = std::numeric_limits<int>::min();
            if(this->numbers.size() == 0 || this->numbers.size() == 1)
                throw "dosnt has required numbers\n";
            while(i < numbers.size())
            {
                if (numbers[i] < shourtTest)
                    shourtTest = numbers[i];
                if (numbers[i] > maxTest)
                    maxTest = numbers[i];
                i++;
            }
            return (maxTest - shourtTest);
        }
};

#endif
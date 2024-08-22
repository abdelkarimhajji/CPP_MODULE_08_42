/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 09:15:38 by ahajji            #+#    #+#             */
/*   Updated: 2024/08/22 15:04:23 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    Span span(10);

    try
    {
        span.addNumber(1);
        span.addNumber(10);
        span.addNumber(-5);
        span.addNumber(15);
        std::cout << "\nthis short difrence number : " << span.shortestSpan() << std::endl;
        std::cout << "this long number : " << span.longestSpan() << std::endl;
        
    }
    catch(const char* e)
    {
        std::cerr << e << '\n';
    }
    
    return 0;
}
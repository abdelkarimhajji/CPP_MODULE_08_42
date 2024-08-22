/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 09:15:38 by ahajji            #+#    #+#             */
/*   Updated: 2024/08/22 12:24:45 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    Span span(10);

    try
    {
        span.addNumber(1);
        span.addNumber(2);
        span.addNumber(3);
        span.addNumber(4);
        span.addNumber(4);
        
    }
    catch(const char* e)
    {
        std::cerr << e << '\n';
    }
    
    return 0;
}
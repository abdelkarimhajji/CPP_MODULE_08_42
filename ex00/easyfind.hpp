/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 11:16:26 by ahajji            #+#    #+#             */
/*   Updated: 2024/08/24 11:16:39 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

template<typename T>
int    easyfind(T array, int find)
{
    int i = 0;
    while (i < array.size())
    {
        if(array[i] == find)
            return i;
        i++;
    }
    return -1;
}
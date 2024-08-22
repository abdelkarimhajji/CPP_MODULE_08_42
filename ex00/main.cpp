/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 19:10:17 by ahajji            #+#    #+#             */
/*   Updated: 2024/08/21 21:18:26 by ahajji           ###   ########.fr       */
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
int main()
{
    std::vector<int> arr;
    arr.push_back(1);
    arr.push_back(9);
    arr.push_back(5);
    arr.push_back(2);
    std::cout << "this is the index : " << easyfind(arr, 9) << std::endl;
    return 0;
}
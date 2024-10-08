/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 19:10:17 by ahajji            #+#    #+#             */
/*   Updated: 2024/08/24 11:17:09 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

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
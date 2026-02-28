/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 12:41:13 by dmaestro          #+#    #+#             */
/*   Updated: 2026/02/28 15:50:17 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Burocrats.hpp"

int main()
{
    Burocrats paco("paco", 3);
    Burocrats pepe(paco);
    Burocrats francisco("francisco", 120);

    try{
        paco.IncreaseGrade();
    }
    catch(const std::exception &e)
    {
        std::cout << paco  << " "<< e.what()  << std::endl;
    }
      try{
        francisco.DecreaseGrade();
    }
    catch(const std::exception &e)
    {
        std::cout << francisco << " "<< e.what() << std::endl;
    }
    return 0;
}

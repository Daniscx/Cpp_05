/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42madrid.con    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 12:41:13 by dmaestro          #+#    #+#             */
/*   Updated: 2026/04/02 18:09:33 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Burocrats.hpp"

int main()
{
    try {
        Burocrats paco("paco", -12); 
        paco.IncreaseGrade();
        paco.IncreaseGrade();
        paco.IncreaseGrade();
        std::cout << paco << std::endl;
    } 
     catch(const std::exception &e){
        std::cerr << e.what() << std::endl;
     }
    
    try
    {
        Burocrats pepe("pepe", 147);
        pepe.DecreaseGrade();
        pepe.DecreaseGrade();
        pepe.DecreaseGrade();
         std::cout << pepe << std::endl;
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    try
    {
          Burocrats francisco("francisco", 3);
          francisco.IncreaseGrade();
          francisco.IncreaseGrade();
          francisco.IncreaseGrade();
          std::cout << francisco << std::endl;
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42madrid.con    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 12:41:13 by dmaestro          #+#    #+#             */
/*   Updated: 2026/04/09 16:16:09 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Burocrats.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    try {
        Burocrats paco("paco", 5); 
        ShrubberyCreationForm pvb("pepe");
        paco.singForm(pvb);
        paco.executeForm(pvb);
        paco.singForm(pvb);
        std::cout << paco << std::endl;
    } 
     catch(const std::exception &e){
        std::cerr << e.what() << std::endl;
     }
    
    try
    {
        Burocrats pepe("pepe", 137);
        PresidentialPardonForm citi("Manolo");
    
        pepe.singForm(citi);
        pepe.executeForm(citi);
         std::cout << pepe << std::endl;
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    try
    {
          Burocrats francisco("francisco", 3);
          RobotomyRequestForm  Robotomy("Angela");
        francisco.singForm(Robotomy);
        francisco.executeForm(Robotomy);
          std::cout << francisco << std::endl;
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42madrid.con    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 19:17:01 by dmaestro          #+#    #+#             */
/*   Updated: 2026/04/09 16:26:32 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("default", 72, 45)
{
    std::cout << "RobotomyRequestForm default constructor called" << std::endl;    
    this->sign = false;
       
}
RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm destructor called" << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(const std::string& target)  : AForm("RobotomyRequestForm", 72, 45)
{
    std::cout << "RobotomyRequestForm default constructor called" << std::endl;    
  this->target = target;
  this->sign = false;   
}


void RobotomyRequestForm::beExecute(const Burocrats& executor)const
{
    int i = std::rand() %2;
    switch (i)
    {
    case 0:
        std::cout << "bzbzbz bzbzbz" << target << "has been robotomized" <<  "by" << executor <<std::endl;
        break;
    case 1:
        std::cout << "BOOOOOOOOOOOM" << target << " refused to be robotomized and destroyed the machine now the lab has the need to be repair" << std::endl;
    default:
        break;
    }

}
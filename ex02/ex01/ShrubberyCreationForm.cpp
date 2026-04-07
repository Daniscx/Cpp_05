/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42madrid.con    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 15:45:01 by dmaestro          #+#    #+#             */
/*   Updated: 2026/04/07 19:13:19 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("default", 145, 137)
{
    std::cout << "ShrubberyCreationForm default constructor called" << std::endl;    
    this->sign = false;
       
}
ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)  : AForm("ShrubberyCreationForm", 145, 137)
{
        std::cout << "ShrubberyCreationForm default constructor called" << std::endl;    
  this->target = target;
  this->sign = false;   
}


void ShrubberyCreationForm::Beexecute(const Burocrats& executor)const
{
    std::cout <<"Creates a file " << this->target << "_shrubbery in the working directory and writes ASCII trees inside it" << std::endl;
}
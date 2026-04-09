/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42madrid.con    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 15:59:31 by dmaestro          #+#    #+#             */
/*   Updated: 2026/04/09 16:26:58 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("default", 25, 5)
{
    std::cout << "PresidentialPardonForm default constructor called" << std::endl;    
    this->sign = false;
       
}
PresidentialPardonForm::PresidentialPardonForm(const std::string& target)  : AForm("PresidentialPardonForm", 145, 137)
{
        std::cout << "PresidentialPardonForm default constructor called" << std::endl;    
  this->target = target;
  this->sign = false;   
}
PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

void PresidentialPardonForm::beExecute(const Burocrats& executor)const
{
    std::cout  << executor <<" informs that  " << this->target << " has been pardoned by Zaphod Beeblebrox"<< std::endl;
}
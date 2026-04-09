/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42madrid.con    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 16:32:03 by dmaestro          #+#    #+#             */
/*   Updated: 2026/04/09 18:39:00 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
Intern::Intern()
{
    std::cout << "Intern default constructor called" << std::endl;
}
Intern::~Intern()
{
    std::cout << "Intern destructor called" << std::endl;
}
const char *Intern::FormNotFound::what() const throw()
{
    return("Form not found");
}
AForm *Intern::makeForm(const std::string&name, const std::string& target)
{
    AForm *result;
    if(name == "robotomy request")
        result = new RobotomyRequestForm(target);
    else if(name == "presidential pardon")
        result = new PresidentialPardonForm(target);
    else if(name == "shrubbery creation")
        result = new  ShrubberyCreationForm(target);
    else
        throw FormNotFound();
    return(result);
    
}
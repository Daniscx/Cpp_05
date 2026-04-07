/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42madrid.con    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 15:32:48 by dmaestro          #+#    #+#             */
/*   Updated: 2026/04/07 18:54:26 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Burocrats.hpp"
#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

class ShrubberyCreationForm : public AForm
{
private:
std::string target;

public:
    ShrubberyCreationForm(/* args */);
    ShrubberyCreationForm(const std::string& target);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm(const ShrubberyCreationForm& other);
    ShrubberyCreationForm operator=(const ShrubberyCreationForm& other);
void Beexecute(Burocrats const & executor) const;

};
#endif

 

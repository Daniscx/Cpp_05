/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42madrid.con    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 15:57:29 by dmaestro          #+#    #+#             */
/*   Updated: 2026/04/09 16:11:05 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Burocrats.hpp"
#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

class PresidentialPardonForm : public AForm
{
private:
std::string target;

public:
    PresidentialPardonForm(/* args */);
    PresidentialPardonForm(const std::string& target);
    ~PresidentialPardonForm();
    PresidentialPardonForm(const PresidentialPardonForm& other);
    PresidentialPardonForm operator=(const PresidentialPardonForm& other);
void beExecute(Burocrats const & executor) const;

};
#endif

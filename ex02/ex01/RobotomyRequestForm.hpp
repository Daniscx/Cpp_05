/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42madrid.con    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 19:14:42 by dmaestro          #+#    #+#             */
/*   Updated: 2026/04/07 19:16:16 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Burocrats.hpp"
#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

class RobotomyRequestForm : public AForm
{
private:
std::string target;

public:
    RobotomyRequestForm(/* args */);
    RobotomyRequestForm(const std::string& target);
    ~RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm& other);
    RobotomyRequestForm operator=(const RobotomyRequestForm& other);
void Beexecute(Burocrats const & executor) const;

};
#endif
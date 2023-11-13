/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 10:40:41 by cgodecke          #+#    #+#             */
/*   Updated: 2023/11/13 15:40:07 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <string>
PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{

}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other)
{
	*this = other;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	_target = other._target;
	setIsSigned(other.getIsSigned());
	return (*this);
}


PresidentialPardonForm::~PresidentialPardonForm()
{
	
}


void PresidentialPardonForm::performAction() const
{
	std::cout << getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;		
}

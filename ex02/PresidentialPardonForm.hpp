/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 10:40:28 by cgodecke          #+#    #+#             */
/*   Updated: 2023/11/13 15:37:27 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALFORM_HPP
# define PRESIDENTIALFORM_HPP

#include "AForm.hpp"
#include <fstream>

class PresidentialPardonForm : public AForm
{
	private:
		std::string _target;
		virtual void	performAction() const;
	
	public:
	// Constructors
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &other);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &other);
		~PresidentialPardonForm();
};

#endif

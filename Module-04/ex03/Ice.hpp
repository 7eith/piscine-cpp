/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonteli <amonteli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 13:24:04 by amonteli          #+#    #+#             */
/*   Updated: 2022/02/02 13:24:05 by amonteli         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#ifndef ICE_HPP
#define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria
{
	protected:
		std::string _type;

	public:
		Ice();
		Ice(std::string const & type);
		virtual ~Ice();
		std::string const & getType() const;
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif
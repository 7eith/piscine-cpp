#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : Form(), _target("Default")
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), _target(target)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy)
{
	*this = copy;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	return ;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &ass)
{
	if (&ass != this)
		this->_target = ass._target;
	return (*this);
}

void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	
	if (this->getGexec() >= executor.getGrade() && this->getSign() == 1)
	{
		std::ofstream MonFichier;
		MonFichier.open(std::string(this->_target + std::string("__shrubbery")).c_str());
		MonFichier << "       _-_" << std::endl;
	  	MonFichier << "    /~~   ~~\\" << std::endl;
		MonFichier << " /~~   🍎     ~~\\" << std::endl;
		MonFichier << "{  🍎         🍎 } " << std::endl;
	 	MonFichier << " \\  _-     -_  /" << std::endl;
		MonFichier << "   ~  \\\\ //  ~" << std::endl;
		MonFichier << "_- -   | | _- _" << std::endl;
	 	MonFichier << "  _ -  | |   -_" << std::endl;
	 	MonFichier << "      // \\\\" << std::endl;

		MonFichier.close();
	}
}

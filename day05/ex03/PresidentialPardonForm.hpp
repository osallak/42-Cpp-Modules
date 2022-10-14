#ifndef __PRESIDENTIAL__ 

#include "Form.hpp"


class PresidentialPardonForm : public Form{
        public:

            PresidentialPardonForm( std::string _target );
            ~PresidentialPardonForm( void );
            PresidentialPardonForm( const PresidentialPardonForm& other);
            const PresidentialPardonForm& operator= (const PresidentialPardonForm& other);

            std::string getTarget( void ) const;
            void specialFeature( void ) const;
            void setTarget(std::string target);
        private:
                std::string _target;
};

#define __PRESIDENTIAL__ 
#endif
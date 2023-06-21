#ifndef WARLOCK_HPP

#define WARLOCK_HPP

#include <iostream>

class Warlock{
    private:
        std::string _name;
        std::string _title;
    public:
        Warlock& operator=(const Warlock& war){
            this->_name = war._name;
            this->_title = war._title;
            return *this;
        }

        Warlock(const std::string& name, const std::string& title){
            this->_name = name;
            this->_title = title;
            std::cout << this->_name << ": This looks like another boring day.\n";
        }

        const std::string getName() const{
            return _name;
        }

        const std::string getTitle() const{
            return _title;
        }

        void setTitle(const std::string& title){
            this->_title = title;
        }


};

#endif
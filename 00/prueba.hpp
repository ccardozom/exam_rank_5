#ifndef WARLOCK_HPP

#define WARLOCK_HPP

#include <iostream>

class Warlock{
    private:
        std::string _name;
        std::string _title;
    public:
        const std::string getName() const{
            return _name;
        }
        const std::string getTitle() const{
            return _title;
        }
};

#endif
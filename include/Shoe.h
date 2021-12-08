#ifndef SHOE_H
#define SHOE_H
#include <iostream>

class Shoe
{
private:
    unsigned int size = 0;       // size of shoe
    std::string bodyColor = "";  // color of shoe body
    std::string solesColor = ""; // color of shoe soles
    unsigned int ID = 0;         // an id for each shoe
public:
    virtual Shoe(unsigned int, std::string, std::string);
    virtual unsigned int get_size();      // getter
    virtual std::string get_bodyColor();  // getter
    virtual std::string get_solesColor(); // getter
    virtual bool find_ID(unsigned int);
    virtual void set_bodyColor(std::string);  // setter
    virtual void set_solesColor(std::string); // setter
    virtual void set_size(unsigned int);      // setter
    Shoe operator>(Shoe &) const;             // operator overloading > operator
};

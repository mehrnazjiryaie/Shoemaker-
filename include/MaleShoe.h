#ifndef MALESHOE_H
#define MALESHOE_H
#include <iostream>
#include <vector>

class MaleShoe
{
private:
    unsigned int size = 0;       // size of shoe
    std::string bodyColor = "";  // color of shoe body
    std::string solesColor = ""; // color of shoe soles
    unsigned int ID = 0;         // an id for each shoe
public:
    MaleShoe(unsigned int, std::string, std::string);
    unsigned int get_size();//getter
    std::string get_bodyColor();//getter
    std::string get_solesColor();//getter
    bool find_ID(unsigned int);
    void set_bodyColor(std::string);//setter
    void set_solesColor(std::string);//setter
    void set_size(unsigned int);//setter
    MaleShoe operator>(MaleShoe &) const;//operator overloading > operator
    
};

void male_shoe(std::vector<MaleShoe> &);

#endif
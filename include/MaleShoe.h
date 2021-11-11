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
    MaleShoe(unsigned int , std::string , std::string );
    unsigned int get_size();
    std::string get_bodyColor();
    std::string get_solesColor();
    bool find_ID(unsigned int);
    void set_bodyColor(std::string);
    void set_solesColor(std::string);
    void set_size(unsigned int);
    //~MaleShoe();
};

void male_shoe(std::vector <MaleShoe> &);




#endif
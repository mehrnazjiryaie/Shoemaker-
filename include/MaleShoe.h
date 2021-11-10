#ifndef MALESHOE_H
#define MALESHOE_H
#include <iostream>

class MaleShoe
{
private:
    unsigned int size = 0;       // size of shoe
    std::string bodyColor = "";  // color of shoe body
    std::string solesColor = ""; // color of shoe soles
    unsigned int ID = 0;         // an id for each shoe
public:
    MaleShoe(/* args */);
    ~MaleShoe();
};

MaleShoe::MaleShoe(/* args */)
{
}

MaleShoe::~MaleShoe()
{
}
#endif
#ifndef PRODUCTS_H
#define PRODUCTS_H


#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Products
{
  private:
    string name;
    double price;
    string productLink;
    
  public:
    Products();

    //mutators
    void setName(string name);
    void setPrice(double price);
    void setLink(string address);

    //accessors
    string getName();
    double getPrice();
    string getLink();

    void print();
};

#endif

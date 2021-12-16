//abstract base class

#ifndef CATEGORY_H
#define CATEGORY_H

#include "Products.h"
#include <fstream>
#include <iostream>
#include <string>

class Category
{
  protected:
    int size;
    Products* arr;

  public:
    virtual void setProducts() = 0;
    void reycle(){cout << "Recycling instructions." << endl;}
    void print() {for(int i = 0; i < size; i++){arr[i].print();}}   
  
};

#endif
#ifndef PLASTIC_PRODUCTS_H
#define PLASTIC_PRODUCTS_H

#include "Category.h"

class PlasticProducts : public Category
{
  public:
    // constuctor
    PlasticProducts();
    void setProducts() override;
    void recycle();
    void print(int index);
    
    // destructor
    ~PlasticProducts(){delete [] arr;}
};

#endif

#ifndef PAPER_PRODUCTS_H
#define PAPER_PRODUCTS_H

#include "Category.h"


class PaperProducts : public Category
{
  public:
    // construcor
    PaperProducts();
    void setProducts() override;
    void recycle();
    void print(int index);
    
    //destructor
    ~PaperProducts(){delete [] arr;}
};

#endif

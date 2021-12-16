#include "Products.h"

Products::Products()
{
  name = "Product-Name";
  price = 0;
}

void Products::setName(string name)
{
  this->name = name;
}

void Products::setPrice(double price)
{
  this->price = price;
}

string Products::getName()
{
  return name;
}

double Products::getPrice()
{
  return price;
}

void Products::setLink(string address)
{
  productLink = address;
}

string Products::getLink()
{
  return productLink;
}

void Products::print()
{
  cout << fixed << showpoint << setprecision(2);

  cout << endl << "Product: "<< getName() << endl;
  cout << setw(10) << "$" << price << endl;
  cout << "Link: " << getLink() << endl;
}

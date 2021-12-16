#include "PlasticProducts.h"

// creates an array of type Products
PlasticProducts::PlasticProducts()
{
  size = 3;
  arr = new Products[size];

  setProducts();
}

// sets all elements in the array with values
void PlasticProducts::setProducts()
{
  arr[0].setName("Glass Beverage Bottles (set of 6)");
  arr[0].setPrice(21.95);
  arr[0].setLink("https://www.amazon.com/dp/B08F2TGJJH/ref=cm_sw_r_cp_api_glt_fabc_PJAVK1ZYV7AZ4Z93MW3C?_encoding=UTF8&psc=1");

  arr[1].setName("Large Reusable Grocery Bags (12 pack)");
  arr[1].setPrice(22.99);
  arr[1].setLink("https://www.amazon.com/dp/B08F2TGJJH/ref=cm_sw_r_cp_api_glt_fabc_PJAVK1ZYV7AZ4Z93MW3C?_encoding=UTF8&psc=1");

  arr[2].setName("Glass Food Containers (set of 4)");
  arr[2].setPrice(24.99);
  arr[2].setLink("https://www.amazon.com/dp/B08F2TGJJH/ref=cm_sw_r_cp_api_glt_fabc_PJAVK1ZYV7AZ4Z93MW3C?_encoding=UTF8&psc=1");

}

//*** Not used by QT ***
void PlasticProducts::recycle()
{
  string fileText;
  fstream inFile("PlasticRules.txt", ios::in);

  //Checks if the file was successfully opened.
  if(inFile.fail())
  {
    cout << "There was an error opening the file." << endl;
    exit(1);
  }

  //Reads input from PlasticRules.txt and displays to the user.
  while(!inFile.eof())
  {
    getline(inFile, fileText);
    cout << fileText << endl;
  }

  //Closes the files opened.
  inFile.close();
}

// takes an index value and prints that index
// to list.txt
void PlasticProducts::print(int index)
{
    string temp;
    ofstream outFile;
  // *** CHANGE PATH ADDRESS TO THE ADDRESS LIST.TXT IS IN YOUR COMPUTER ***
    outFile.open("/Users/butters/ReuseMeApp/list.txt", ios::app);

    if (index == 0)
      {
        outFile << endl << "Product: " << arr[0].getName() << endl;
        outFile << setw(10) << "$" << arr[0].getPrice() << endl;
        outFile << "Link: " << arr[0].getLink() << endl;
      }
      else if (index == 1)
      {
        outFile << endl << "Product: " << arr[1].getName() << endl;
        outFile << setw(10) << "$" << arr[1].getPrice() << endl;
        outFile << "Link: " << arr[1].getLink() << endl;
      }
      else if (index == 2)
      {
        outFile << endl << "Product: " << arr[2].getName() << endl;
        outFile << setw(10) << "$" << arr[2].getPrice() << endl;
        outFile << "Link: " << arr[2].getLink() << endl;
      }

    outFile.close();
}

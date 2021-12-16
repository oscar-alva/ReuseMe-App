#include "PaperProducts.h"

// creates an array of type Products
PaperProducts::PaperProducts()
{
  size = 2;
  arr = new Products[size];

  setProducts();
}

// sets values for array elememts
void PaperProducts::setProducts()
{
  arr[0].setName("Linen Dinner Napkins (set of 4)");
  arr[0].setPrice(29.99);
  arr[0].setLink("https://www.amazon.com/dp/B07B2VGJZ9/ref=cm_sw_r_em_api_glt_fabc_FFCKWVAP2T41WEWEA1QW?_encoding=UTF8&th=1");

  arr[1].setName("Reusable Paper Towels");
  arr[1].setPrice(27.95);
  arr[1].setLink("https://www.amazon.com/dp/B08RJJ5LX2/ref=cm_sw_r_em_api_glt_fabc_F312E14G2VSVNAS2C2E0?_encoding=UTF8&psc=1");

}


//*** Not used by QT ***
void PaperProducts::recycle()
{
  string fileText;
  fstream inFile("PaperRules.txt", ios::in);

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

// takes in an index and prints that index to list.txt
void PaperProducts::print(int index)
{
    string temp;
    ofstream outFile;
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

    outFile.close();
}

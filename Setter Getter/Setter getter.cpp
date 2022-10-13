#include <iostream>
 
using namespace std;
 
class Laptop {
 
  private:
   string pemilik;
   double umur;
 
  public:
    void setPemilik(string var1) {
      pemilik = var1;
    }
 
    void setUmur(double var2) {
		umur = var2;
    }
 
    string getPemilik() {
      return pemilik;
    }
 
    double getUmur() {
      return umur;
    }
};
 
int main()
{
  Laptop laptopAndi;
 
  laptopAndi.setPemilik("Eugene");
  laptopAndi.setUmur(11);
 
  cout << laptopAndi.getPemilik() << endl;
  cout << laptopAndi.getUmur() << endl;
 
  return 0;
}

#include <iostream>
 
using namespace std;
 
class Laptop {
 
  private:
    string pemilik;
    string merk;
 
  public:
    Laptop(string var1, string var2) {
      pemilik = var1;
      merk = var2;
 
      cout << "Laptop " << pemilik << " sudah dibuat" << endl;
    }
 
    ~Laptop() {
      cout << "Laptop " << pemilik << " sudah dihapus" << endl;
    }
 
    string hidupkanLaptop() {
      return "Menghidupkan Laptop " + merk + " milik " + pemilik;
    }
 
};
 
int main()
{
  Laptop laptopAndi("Eugene","HP");
  Laptop laptopLisa("Kiki","Macbook");
  Laptop laptopRudi("Yujin","Asus");
 
  cout << "================================="<< endl;
  cout << laptopAndi.hidupkanLaptop() << endl;
  cout << laptopLisa.hidupkanLaptop() << endl;
  cout << laptopRudi.hidupkanLaptop() << endl;
  cout << "================================="<< endl;
 
  return 0;
}

#include <iostream>
using namespace std;
class buku{
    string judul;
     
    public:
    string setget(string judul){
        this->judul = judul;
        return this->judul;
    }
}bukunya;
 
int main()
{
    cout<<bukunya.setget("Buku Belajar Sistem Informasi");
    return 0;
}

#include <iostream>
using namespace std;
 
class mahasiswa
{
public: 
//accessspecifier
    int id;
};
 
int main ()
{
    mahasiswa eugene;
    eugene.id = 19;
    cout<<"Implementasi Access Modifier Public\n";
    cout<<eugene.id<<endl;
}

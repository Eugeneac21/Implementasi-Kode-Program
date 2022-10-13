#include <iostream>
using namespace std;
 
class siswa{
protected:
    int id;
 
public:
    int getId(){
        return id;
    }
 
    void setId(int i){
        id = i;
    }
};
 
int main (){
    siswa baru;
    baru.setId(2);
    cout<<"Implementasi access modifier protected\n";
    cout<<baru.getId()<<endl;
}


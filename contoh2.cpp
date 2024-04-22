#include <iostream>
using namespace std;

class bangunDatar{
    private:
       float panjang, lebar;
    public:
      float luas;

      void input() { //metode input persegi panjang

        cout << "Masukan panjangnya = " ;
        cin >> panjang;
        cout << "masukan Lebarnya = " ;
        cin >> lebar;
    
      }

      float hitungLuas (){
        return panjang * lebar;
      }

      void display(){
        cout << "Panjangnya = " << panjang << endl;
        cout << "Lebarnya = " << lebar << endl;
        cout << "Luasnya = " << hitungLuas() << endl;
      }

};

int main() {
    
}
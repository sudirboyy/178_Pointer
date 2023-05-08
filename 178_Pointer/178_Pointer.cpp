#include <iostream>
using namespace std;

class mahasiswa {
public:
    int nim;
    void showNim(); //Deklarasi Method
};

void mahasiswa::showNim() { //Implementasi method diluar class
    cout << "No Induk =" << nim << endl;
}

int main()
{
    mahasiswa mhs{ 1 };         //Object mhs
    mhs.showNim();              // Member Acces Operator

    mahasiswa& ref = mhs;       //Pointer Reference refMhs
    ref.nim = 2;                //Member Acces Operator

    mahasiswa* pMhs = &mhs;     //Pointer Reference pMhs
    pMhs->nim = 3;              //Arrow Operator
    mhs.showNim();
    return 0;
}


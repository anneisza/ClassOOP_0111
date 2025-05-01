#include <iostream>
using namespace std;

class Segitiga{
    private:
    float HitungLuasSegitiga(float x, float y)
    {
        return  (x * y)/ 2; 
    }

    float HitungKelilingSegitiga(float z)
    {
        return z * 3; 
    }

    public:
    int pilihan;
    int alassg, tinggisg, sisisg;
    bool HitungLuasTerhitung, HitungKelilingTerhitung;
   
    Segitiga () : HitungLuasTerhitung(false), HitungKelilingTerhitung(false){}

    void inputData()
    {
        do
        {
            cout << "==============Menu==============" << endl;
            cout << "1. Hitung Luas Segitiga" << endl;
            cout << "2. Hitung Keliling Segitiga" << endl;
            cout << "3. keluar" << endl;
            cout << "Masukkan Pilihan : " << endl;
            cin >> pilihan;
    
            switch (pilihan)
            {
            case 1 :
                cout << "Menghitung Luas Segitiga" << endl;

            while (true)
            {
                cout << "Masukkan Alas : ";
                cin >> alassg;

                if (alassg % 2 == 0 && alassg >= 2 && alassg <= 50)
                {
                    break;
                }
                else
                {
                    cout << "Alas yang dimasukkan adalah angka ganjil. Luas tidak dapat dihitung!"<<endl;
                }
            }

            while (true)
            {
                cout << "Masukkan Tinggi : ";
                cin >> tinggisg;

                if (tinggisg % 2 == 0 && tinggisg >= 2 && tinggisg <= 50)
                {
                    HitungLuasTerhitung = true;
                    break;
                }
                else
                {
                    cout << "Tinggi yang dimasukkan adalah angka ganjil. Luas tidak dapat dihitung!"<<endl;
                }
            }

                cout << "Luas Segitiga = "
                << HitungLuasSegitiga(alassg, tinggisg) << endl;
                break;
            case 2 :
                cout << "Menghitung Keliling Segitiga" << endl;
            
            while (true)
            {
                cout << "Masukkan Panjang Sisi = ";
                cin >> sisisg;
                if (sisisg % 2 == 0 && sisisg >= 2 && sisisg <= 50)
                {
                    HitungKelilingTerhitung = true;
                    break;
                }
                else
                {
                    cout << "Sisi yang dimasukkan adalah angka ganjil. Luas tidak dapat dihitung!"<<endl;
                }
            }

                cout << "Keliling Segitiga = "
                << HitungKelilingSegitiga(sisisg) << endl;
                break;
            case 3 :
                break;
            default:
                cout << "Pilihan anda salah" << endl;
                break;
            }
    
        } while (pilihan != 3);
    
    }

};
#include<iostream>
using namespace std;
int main(){
    int kode_saluran;
    string saluran;
    cout << "pilihan_saluran\n";
    cout << "1.sctv\n 2.antv\n 3.tvone\n 4.mnctv\n 5.rcti\n";
    cout << "inputkan kode_saluran : ";
    cin >> kode_saluran;
    switch (kode_saluran){
        case 1:
            saluran = "saluran yang anda pilih adalah sctv\n";
            break;
        
        case 2:
            saluran = "saluran yang anda pilih adalah antv\n";
            break;
        
        case 3:
            saluran = "saluran yang anda pilih adalah tvone\n";
            break;
        
        case 4:
            saluran = "saluran yang anda pilih adalah mnctv\n";
            break;
        
        case 5:
            saluran = "saluran yang anda pilih adalah mnctv\n";
            break;
        
        default:
            cout<<"saluran yang anda pilih salah";
    }  
    cout<<"saluran yang anda pilih adalah : "<<saluran<<endl;
}

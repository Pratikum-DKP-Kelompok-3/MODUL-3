#include <iostream>

using namespace std;

// declare
void menu();
void menuthx();
double ceksaldo(double saldo);
double tariktunai(double saldo);
double setortunai(double saldo);

int main () {
    int i;
    char s;
    cout <<"Kelompok: kelompok 3" << endl;
    cout << "Shift: shift 1" << endl;
    cout << "Nama anggota 1: Ananda Muhammad Zahir (21120120140115)" << endl;
    cout << "Nama anggota 2: Didan Hasan Murtaqi (21120120140103)" << endl;
    cout << "Nama anggota 3: Juliant Raffa (21120120130127)" << endl;
    cout << "Nama anggota 4: Sachiko Fitria Ramandanti (21120120140103)" << endl << endl;
    cout << "Press Enter To continue" << endl;
    cin.get();

    do
    {
        menu:
        system("cls");
        double saldo = 0;
        menu();
        cin >> i;
        switch (i)
        {
        case 1:
            ceksaldo(saldo);
            cin >> s;
            goto menu;
            break;
        case 2:
            tariktunai(saldo);
            cin >> s;
            goto menu;
            break;
        case 3:
            setortunai(saldo);
            cin >> s;
            goto menu;
            break; 
        }
    } while (i!=4);
    system("cls");
    menuthx();
    cin.get();
    return 0;
}

//Function

//menu
void menu(){
    cout<<" _____________________________________________________ "<<endl;
    cout<<"|                   Bank Kelompok 3                   |"<<endl;
    cout<<"|_____________________________________________________|"<<endl;
    cout<<"|___________________Menu Transaksi____________________|"<<endl;
    cout<<"|    1. Cek Saldo                                     |"<<endl;
    cout<<"|    2. Tarik Tunai                                   |"<<endl;
    cout<<"|    3. Setor Tunai                                   |"<<endl;
    cout<<"|    4. Keluar                                        |"<<endl;
    cout<<"|_____________________________________________________|"<<endl;
    cout<<" Pilihan Anda : ";
}

//menu terimakasih
void menuthx(){
    cout<<" _____________________________________________________ "<<endl;
    cout<<"|                   Bank Kelompok 3                   |"<<endl;
    cout<<"|_____________________________________________________|"<<endl;
    cout<<"|      Terima Kasih Telah Menggunakan Bank Kami       |"<<endl;                                
    cout<<"|_____________________________________________________|"<<endl;
}

//cek saldo
double ceksaldo(double saldo){
    cout << "Saldo anda adalah Rp." << saldo << endl;
    cout << "Ketik apa saja untuk kembali ke halaman utama" << endl;
    return saldo;
}

//tarik tunai
double tariktunai(double saldo){
    double tarik;
    cout << "Masukan nominal yang ingin anda ambil: Rp. ";
    cin >> tarik;
    if (tarik <= saldo)
    {
        saldo-=tarik;
    }else{
        cout << "Saldo anda tidak mencukupi" << endl;
    } 
    cout << "Saldo anda adalah Rp." << saldo << endl;
    cout << "Ketik apa saja untuk kembali ke halaman utama" << endl;
    return saldo;
}

//setor tunai
double setortunai(double saldo){
    double setor;
    cout << "Masukan nominal yang ingin anda tambahkan: Rp. ";
    cin >> setor;
    saldo+=setor;
    cout << "Saldo anda adalah Rp." << saldo << endl;
    cout << "Ketik apa saja untuk kembali ke halaman utama" << endl;
    return saldo;
}
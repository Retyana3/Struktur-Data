#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    string sks;
    cout<<"Jumlah SKS = ";
    getline(cin,sks);
    string nim;
    cout<<"NIM        = ";
    getline(cin,nim);
    string nama;
    cout<<"Nama       = ";
    getline(cin,nama);
    string matkul;
    cout<<"Mata Kuliah= ";
    getline(cin,matkul);

    float  nilai1, nilai2, nilai3;
    cout<<"Masukkan Nilai 1 = ";
    cin>>nilai1;
    cout<<"Masukkan Nilai 2 = ";
    cin>>nilai2;
    nilai3 = (nilai1 + nilai2)/2;
    
    cout<<"Nama Mahasiswa  :"<<nama<<"\n";
    cout<<"NIM             :"<<nim<<"\n";
    cout<<"Mata Kuliah     :"<<matkul<<"\n";
    cout<<"SKS             :"<<sks<<"\n";
    cout<<"Nilai Teori     :"<<nilai1<<"\n";
    cout<<"Nilai Praktek   :"<<nilai2<<"\n";
    cout<<"Nilai Akhir     :"<<nilai3<<"\n";
    getch();
}
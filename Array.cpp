#include <iostream>
using namespace std;
string kelas[30];
int pos = 0; //posisi data dimasukan
void inputData(string nama); //deklarasi fungsi precuder input data
void outputData(); //deklarasi fungsi precuder output data

int main() {

  //cout << "Hello World!";
  inputData("Muhammad Rafi Fadilah");

  inputData("Penduduk");
  outputData();
  inputData("Tanah");
  outputData();
  inputData("Uang");
  outputData();


  return 0;
}


void inputData(string nama){
    kelas[pos] = nama; //masukkan data ke array
    pos++;
}

void inputData(string nama){
    kelas[pos] = nama; //masukkan data ke array
    pos++;
    //cout << "Hello Word!";
}

void outputData(){
    for (int i = 0; i < pos; i++)
    {
        cout << kelas[i];
        if (i<pos-1)
    {
        cout << ", ";
    }else{
        cout <<"."<<endl;
    }

}
}
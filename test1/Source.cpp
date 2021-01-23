#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    ifstream fin1;
    ifstream fin2;
    fstream fout;
    fin1.open("input1.txt");
    fin2.open("input2.txt");
    fout.open("output.txt");
    int last = 0;
    if (!fin1.is_open() || !fin2.is_open()) { cout << "ошибка при открытия в" << endl; }
    else {
        cout << "файл открыт" << endl;
        string ch1, ch2;

        fin1 >> ch1;
        fin2 >> ch2;
        unsigned long long num1 = stoull(ch1, nullptr, 0), num1plus = 0;
        unsigned long long num2 = stoull(ch2, nullptr, 0), num2plus = 0;
        while (!fin1.eof()||!fin2.eof()) {
      

            if (num1+ num1plus < num2+ num2plus)
            {
                

                cout << num1 << " ";   
                fin1 >> ch1;
                num1 = stoull(ch1, nullptr, 0);
                int fin1end = fin1.eof();
                if (fin1end) { num1plus = LLONG_MAX - num1; }
            }
            else {

                cout << num2 << " "; //
                fin2 >> ch2;
                num2 = stoull(ch2, nullptr, 0);
                int fin2end = fin2.eof();
                if (fin2end) { num2plus = LLONG_MAX - num2; }
            
            }
        }

       // if (num1 >= num2)  cout << num1;


     //   if (!fin1.eof()) {
      //      while (!fin1.eof()) {
       //         fin1 >> ch1;
        //        cout << ch1 << " "; //
         //   }
       // }
      //  else if (!fin2.eof()){
       //     while (!fin2.eof()) {
      //          fin2 >> ch2;
       //         cout << ch2 << " "; //
        //    }
       // }
      

       
      
    }
    fin1.close();
    fin2.close();
    fout.close();


    system("pause");
    return 0;
}
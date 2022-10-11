#include <iostream> // input output
//#include <cmath>
using namespace std;
    int main()
    {
        bool status=true;
        string x;
        double num1=0, num2=0;
        string operation = "+" ;
        double sonuc = 0;
        cout << "HESAP MAKINESI " << endl;
        cout << "Islem: ";
        while (status)
        {
            cin >> num1 >> operation >> num2 ;
            if(operation=="+") sonuc=num1+num2;
            else if(operation=="-") sonuc=num1-num2;
            else if(operation=="*") sonuc=num1*num2; 
            else if(operation=="/") sonuc=num1/num2;

            cout << num1 << operation << num2 << "=" << sonuc << endl;
            cout << "Devam Etmek Icin 1'i , Hesap Makinesini Kapatmak Icin 0'i Tuslayiniz." << endl ;
            cin >> x;
            if(x =="1") cout << "Yeni Islem: " << endl;
            else if(x=="0") 
            {
                status = false; 
                cout << "Bye bye!";
                break;
            }

        }




    }
#include <iostream>
#include <iomanip>
#include <bitset>
using namespace std;
int main()
{
    cout<<"Visible Char\'s ASCII Code Map"<<endl;
    cout<<"| Char | Dec | Bin      | Oct  | Hex  |"<<endl;
    for(int i=32;i<=126;i++)
    {
        cout.setf(ios_base::dec|ios::left);
        cout<<"| "<<char(i)<<"    | ";
        cout<<setw(3)<<i<<" | ";
        cout<<bitset<8>(i)<<" | 0";
        cout.unsetf(ios_base::dec);
        cout.setf(ios::oct|ios::left);
        cout<<setw(3)<<i<<" | 0x";
        cout.unsetf(ios_base::oct);
        cout.setf(ios::hex);
        cout<<i<<" |";
        cout<<endl;
        cout.unsetf(ios_base::hex);
    }
    return 0;
}
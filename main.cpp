#include <string>
#include "List.h"


void Choose (string ch, List lst)
 {
     int x;
     tryagain:
     cin >> ch;
     string name, sport, choos, adress;
     int year, places, arenas;
     if (ch == "Add")
     {
         cout << "Name: ";
         cin >> name;
         cout << "Sport: ";
         cin >> sport;
         cout << "Year: ";
         cin >> year;
         cout << "Places: ";
         cin >> places;
         cout << "Arenas: ";
         cin >> arenas;
         lst.Add(name,sport, year, places, arenas);
         cout << "Count of elements: " <<lst.count_ << endl << endl;
         goto tryagain;
     }
     else if (ch == "[]")
     {
        cout << "Select a number of element: " << endl;
        cin >> x;
        cout << "List[" << x << "]" << endl;
        lst[x];
        goto tryagain;
     }
     else if (ch == "Show")
     {
        lst.Show();
        goto tryagain;
     }
     else if (ch == "Insert")
     {
         cout << "\n" << "Select a number: ";
         cin >> x;
         cout << "Name: ";
         cin >> name;
         cout << "Sport: ";
         cin >> sport;
         cout << "Year: ";
         cin >> year;
         cout << "Places: ";
         cin >> places;
         cout << "Arenas: ";
         cin >> arenas;
         lst.Add_1(name, sport , year, places, arenas, x);
         cout << "Count of elements: " <<lst.count_ << endl << endl;
         goto tryagain;
     }
     else if (ch == "Order")
     {
         lst.Order();
         cout<<endl;
         goto tryagain;
     }
     else if (ch == "End"){}
     else if (ch == "Find")
     {
         cout << "\n" << "Select a number: ";
         cin >> x;
         lst.Show_1(x);
         goto tryagain;
     }
     else if (ch=="Delete")
     {
         cout << "\n" << "Select a number: ";
         cin >> x;
         lst.Delete(x);
         cout << "Count of elements: " <<lst.count_ << endl << endl;
         goto tryagain;
     }
     else if (ch == "Filter")
     {
         cout << "Choose parameter: (name; sport; year; places; arenas) " << endl;
         cin >> choos;
         lst.Filter(choos);
         cout<<endl;
         goto tryagain;
     }
     else if (ch == "File")
     {
         lst.File();
         cout<<endl;
         goto tryagain;
     }
     else
     {
         cout << "You made a mistake, try again"<< "\n" << "\n" ;
         goto tryagain;
     }
 }

int main()
{
    cout << "Select an action: " << "\n" << "Add" << "\n" << "Delete" << "\n" << "Show" << "\n" <<"End" << "\n"<< "Find" << "\n" << "Insert"<< "\n" <<"Order"<< "\n" << "Filter" <<"\n" <<"File"  << "\n" <<"\n";
    List lst;
    string ch;
    Choose (ch, lst);
    return 0;
}

# include <iostream>
using namespace std;
class Dunya
{
public:
    Dunya ()  { cout << "Merhaba\n"; }
    ~Dunya () { cout << "Gule gule\n";}
};

int main ()
{
    Dunya (); //bu_bir_nesne;
    return 0;
}


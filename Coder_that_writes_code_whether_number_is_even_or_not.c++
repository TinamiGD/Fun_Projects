#include <iostream>

using namespace std;

int main()
{
    int q=0, w, e, r, t, y, i;
    cout << "write ur number"<< endl;
    cin >> i;
    cout << "#include <iostream>" << endl;
    cout << "using namespace std;" << endl;
    cout << "int main() {" << endl;
    cout << "int number;" << endl;
    cout << "cin >> number;" << endl;
    while (i>0)
    {
        i--;
        cout << "if (number == "<< q << ")"<<endl;
        cout << "printf(\"even\");" <<endl;
        q++;
        cout << "if (number == "<< q << ")"<<endl;
        cout << "printf(\"odd\");" << endl;
        q++;
    }
    cout << "return 0;"<< endl;
    cout << "}" << endl;
    return 0;
}

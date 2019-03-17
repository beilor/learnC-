#include <iostream>

int main(void)
{
    using std::cin;
    using std::cout;
    using std::string;
    using std::endl;
    int nYear1{0}, nYear2;
    string strName;
    char cName1[10], cName2[10];
    cout << "input a name: " << endl;
    cin >> cName1;
    cout << "input a name: " << endl;
    cin >> cName2;
    cout << "input a int:" << endl;
    cin >> nYear1;
    cout << "input a int:" << endl;
    cin >> nYear2;
    cout << cName1 << cName2 << endl;
    cout << nYear1 << " " << nYear2;
    return 0;
}
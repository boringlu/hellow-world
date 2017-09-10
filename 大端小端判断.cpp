#include <iostream>
#include <stdio.h>
using namespace std;

//ce≤‚ ‘ 

#include <iostream>

using namespace std;
int main()
{
    int nNum = 0x12345678;
    char chData = *(char*)(&nNum);
	cout<<chData<<endl;
	cout<<(char) nNum<<endl;
	cout<<(char)0x12<<endl; 
    /*if (chData == 0x12)
    {
        cout << "big" << endl;
    }
    else
    {
        cout << "small" << endl;
    }

    system("PAUSE");*/

    return 0;
}









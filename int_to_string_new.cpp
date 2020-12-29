#include"iostream"
//#include"strstream"
//不再支持
#include "sstream"
using namespace std;
/*changethe string to int*/
int main()
{
	string s1;
	string s2;
	s1 = to_string(10.5);//double到string
	cout<<s1<<endl;
	s2 = to_string(123);//int到string
    cout<<s2<<endl;
}
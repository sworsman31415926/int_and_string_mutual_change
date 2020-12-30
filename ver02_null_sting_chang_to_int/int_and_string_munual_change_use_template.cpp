#include"iostream"
//#include"strstream"
//不再支持
#include "sstream"
using namespace std;
template<class out_type,class in_value>
out_type convert(const in_value & t)
{
	stringstream stream;
	stream<<t;//向流中传值
	out_type result;//这里存储转换结果
	stream>>result;//向result中写入值
	return result;
}
 
int main()
{
	int d;
	string salary;
	string s = "";
	d = convert<int>(s);//d等于12.56
	cout<<""<<d<<endl;
	s = "0";
	d = convert<int>(s);//d等于12.56
    cout<<""<<d<<endl;
	return 0;
}
/*
d = double
$ ./a
2.10383e-314
0

tssh@DESKTOP-9LP9IL5 /cygdrive/c/Users/tssh/source/repos/Project1/int_and_string_mutual_change/int_and_string_mutual_change/ver02_null_sting_chang_to_int
$ g++ int_and_string_munual_change_use_template.cpp
d = int 
tssh@DESKTOP-9LP9IL5 /cygdrive/c/Users/tssh/source/repos/Project1/int_and_string_mutual_change/int_and_string_mutual_change/ver02_null_sting_chang_to_int
$ ./a
0
0


*/
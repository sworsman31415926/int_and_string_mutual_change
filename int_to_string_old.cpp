#include"iostream"
//#include"strstream"
//不再支持
#include "sstream"
using namespace std;
/*changethe string to int*/
int main()
{
	string input = "123456789";;
	int out_number;
	//sstream ss;//已经不再支持
	stringstream ss;
	ss<<input;
	ss>>out_number;
	cout<<"stringto int:"<<out_number<<endl;
}
/*
$ g++ int_to_string.cpp
In file included from /usr/lib/gcc/x86_64-pc-cygwin/10/include/c++/backward/strstream:50,
                 from int_to_string.cpp:2:
/usr/lib/gcc/x86_64-pc-cygwin/10/include/c++/backward/backward_warning.h:32:2: warning: #warning This file includes at least one deprecated or antiquated header which may be removed without further notice at a future date. Please use a non-deprecated interface with equivalent functionality instead. For a listing of replacement headers and interfaces, consult the file backward_warning.h. To disable this warning use -Wno-deprecated. [-Wcpp]
   32 | #warning \
      |  ^~~~~~~
警告：此文件至少包含一个已弃用或过时的标头，将来可能会在不另行通知的情况下将其删除。 请改用具有同等功能的不建议使用的界面。 有关替换标头和接口的列表，请查阅文件reverse_warning.h。 要禁用此警告，请使用-Wno不推荐使用。
*/
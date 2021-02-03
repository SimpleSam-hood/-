#include<iostream>
using namespace std;
int main()
{
	char name[20];//char name[]这样定义是错的，因为没有定义元素个数 
	char jjj[]={"ggg"};//应该这样定义 
	int kkk[]={1,2};//int类型也一样 
	cin.get(name,20);
	cout<<jjj;
}

#include<string>
#include<iostream>

using namespace std;

int main(){
	//string s1("hello"); 
	//string s2("casen");
	//////使用迭代器操作
	//string::iterator p = s1.begin();//字符串迭代器
	//s1.insert(p,'A');  //在迭代器p的位置插入一个 ‘A'
	//s1.insert(p, 3, 'B');  //在迭代器位置插入 3 个 'B'
	//string::iterator b = s2.begin();
	//string::iterator e = s2.end();
	//s1.insert(p, b, e);  //将s2中的字符利用迭代器来插入s1中的迭代器p的位置
	////赋值
	//s1.assign(b, e); //s1中所有的字符都被替换为 迭代器 b 和 e 之间的元素
	//s1.assign(8, 'K');  //将s1中所有值都替换为 8 个 'K'
	//s1.erase(p); //删除s1中迭代器p指向的元素
	//string::iterator p2 = s1.end();
	//s1.erase(p, p2);  //删除s1中迭代器 p 到 p2 之间的元素，包括p指向的元素，不包括 p2 指向的元素
	//////使用下标操作
	//s1.insert(0, 3, 'A');  //在位置0，插入3个‘A'
	//s1.insert(5, s2); //在位置 5 ，插入字符串 s2
	//s1.insert(0, s2, 2, 3); //在s1中位置0，插入字符串s2中位置2开始的三个字符
	//s1.assign(s2); //将s2赋值给s1
	//s1.erase(2, 3); //从位置2，开始，删除3个
	
	//string s("Hello world");
	//string s2 = s.substr(6, 5); //从s字符串的位置 6 开始的 5 个字符串来初始化s2,如果s中不足 5 个，那就有多少给多少
	//string s3 = s.substr(6);  //从s字符串的位置 6 开始的所有字符串来舒适化s3
	//string s4 = s.substr(); //利用s的所有字符来初始化s4,相当于 s4=s;
	//s.append("casen");  //在s字符串的最后添加 "casen" 
	//s.insert(s.size(), "casen"); //作用同上
	//s.replace(4, 3, "xkf"); //将s字符串中位置4开始的 3 个字符替换为 “123”
	//s.replace(4, 3, "xukai"); //替换时候不要求 替换个数的要求
	////替换相当于先删除了一部分，然后再插入新的一部分

	//string name("CasenXu");
	////精确查找
	//string::size_type pos1 = name.find("sen"); //查找“sen“ 的位置，返回值为一个位置 pos1=2;
	//if (pos1==string::npos)  //判断是否找到了
	//{
	//	cout << "Found it" << endl;  
	//}
	//name = "r2d3";
	//string numerics("0123456789");
	//string::size_type pos = name.find_first_of(numerics);  //查找name中的第一个数字
	//if (pos1==string::npos)
	//{
	//	cout << "Found it" << endl;
	//}
	////查找name所有的数字
	//string::size_type pos = 0;
	//while ((pos = name.find_first_of(numerics, pos)) != string::npos)
	//{
	//	cout << name[pos] << endl;
	//	pos++;
	//}
	//pos = 0;
	////查找name中所有不是数字的字符
	//while ((pos = name.find_first_not_of(numerics, pos)) != string::npos)
	//{
	//	cout << name[pos] << endl;
	//	pos++;
	//}
	//string letters("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
	//pos = 0;
	////查找name中所有的字母
	//while ((pos = name.find_first_of(letters, pos)) != string::npos)
	//{
	//	cout << name[pos] << endl;
	//	pos++;
	//}

	//string s1("abcxyz");
	//string s2("abdxyz");
	////利用关系运算符来比较
	//if (s1 == s2) cout << "不相等"<<endl;
	//if (s1 != s2) cout << "相等" << endl;
	//if (s1 > s2) cout << "s1大" << endl;
	//if (s1 < s2) cout << "s2大" << endl;
	////利用compare比较
	//s1.compare(s2); //大于零 s1 大，小于零s1小，等于0，相等
	//s1.compare(3, 3, s2);  //利用s1第 3 个位置开始的三个字符来和s2作对比
	//s1.compare(3, 3, s2, 3, 3); //利用s1的第3个位置开始得三个字符和s2中第3个字符开始的三个字符进行比较
	////也可以用指针
	//char *p = "aabbcc";
	//s1.compare(3, 3, p, 3, 3);  

	return 0;
}
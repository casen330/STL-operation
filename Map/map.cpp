#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){

	map<int, string> a;
	multimap<int, string> ma;
	//                                  key键  value值
	a.insert(map<int, string>::value_type(1, "one"));
	a.insert(map<int, string>::value_type(2, "two"));
	a.insert(map<int, string>::value_type(3, "three"));

	a.insert(make_pair(-1, "Minus one"));
	
	a.insert(pair<int, string>(1000, "One thousand"));

	a[10000] = "One million"; //只能用于map，不可以用于multimap

	//针对map的最简单的查找
	cout << a[3] << endl; //显示结果为 3 对应的 value 值

	cout << "map里共有" << a.size() << "个key-value对数据" << endl;
	cout << "这些数据是：" << endl;
	map<int, string>::const_iterator iter;
	for (iter = a.begin(); iter != a.end(); iter++)
	{
		cout << "key:" << iter->first;
		cout << "value:" << iter->second;
		cout << endl;
	}

	//multimap
	ma.insert(multimap<int, string>::value_type(3, "Three"));
	ma.insert(make_pair(-1, "minus one"));
	ma.insert(pair<int, string>(1000, "one thousand two"));
	ma.insert(pair<int, string>(1000, "one thousand"));
	cout << "multimap中的数据：";
	multimap<int, string>::const_iterator im;
	for (im = ma.begin(); im != ma.end(); ++im){
		cout << "Key:" << im->first;
		cout << "value:" << im->second;
		cout << endl;
	}
	//查看其中有几个要搜索的值的数据
	cout << "有" << ma.count(1000) << "个1000" << endl;

	//查找某个值
	//查找返回的类型为 迭代器
	multimap<int, string>::const_iterator fi;
	fi = ma.find(1000);
	if (fi!=ma.end())
	{
		cout << "found it";
		size_t n = ma.count(1000);  //统计找到的1000的个数
		for (size_t i = 0; i < n; i++)
		{
			cout << "\t Key:" << fi->first;
			cout << "\t Value:" << fi->second;
		}
	}

	//删除
	if (ma.erase(-1)>0)  //通过key来删除
	{
		cout << endl << "删除-1成功";
	}
	// 也可以先查找再删除
	multimap<int, string>::iterator iFI = ma.find(1000);
	if (iFI != ma.end())
	{
		ma.erase(iFI);
	}
	//删除一个范围
	ma.erase(ma.lower_bound(1000), ma.upper_bound(1000));  //从第下界1000到上界限1000全都删除


	return 0;
}
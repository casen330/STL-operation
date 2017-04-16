#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){

	map<int, string> a;
	multimap<int, string> ma;
	//                                  key��  valueֵ
	a.insert(map<int, string>::value_type(1, "one"));
	a.insert(map<int, string>::value_type(2, "two"));
	a.insert(map<int, string>::value_type(3, "three"));

	a.insert(make_pair(-1, "Minus one"));
	
	a.insert(pair<int, string>(1000, "One thousand"));

	a[10000] = "One million"; //ֻ������map������������multimap

	//���map����򵥵Ĳ���
	cout << a[3] << endl; //��ʾ���Ϊ 3 ��Ӧ�� value ֵ

	cout << "map�ﹲ��" << a.size() << "��key-value������" << endl;
	cout << "��Щ�����ǣ�" << endl;
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
	cout << "multimap�е����ݣ�";
	multimap<int, string>::const_iterator im;
	for (im = ma.begin(); im != ma.end(); ++im){
		cout << "Key:" << im->first;
		cout << "value:" << im->second;
		cout << endl;
	}
	//�鿴�����м���Ҫ������ֵ������
	cout << "��" << ma.count(1000) << "��1000" << endl;

	//����ĳ��ֵ
	//���ҷ��ص�����Ϊ ������
	multimap<int, string>::const_iterator fi;
	fi = ma.find(1000);
	if (fi!=ma.end())
	{
		cout << "found it";
		size_t n = ma.count(1000);  //ͳ���ҵ���1000�ĸ���
		for (size_t i = 0; i < n; i++)
		{
			cout << "\t Key:" << fi->first;
			cout << "\t Value:" << fi->second;
		}
	}

	//ɾ��
	if (ma.erase(-1)>0)  //ͨ��key��ɾ��
	{
		cout << endl << "ɾ��-1�ɹ�";
	}
	// Ҳ�����Ȳ�����ɾ��
	multimap<int, string>::iterator iFI = ma.find(1000);
	if (iFI != ma.end())
	{
		ma.erase(iFI);
	}
	//ɾ��һ����Χ
	ma.erase(ma.lower_bound(1000), ma.upper_bound(1000));  //�ӵ��½�1000���Ͻ���1000ȫ��ɾ��


	return 0;
}
#include<string>
#include<iostream>

using namespace std;

int main(){
	//string s1("hello"); 
	//string s2("casen");
	//////ʹ�õ���������
	//string::iterator p = s1.begin();//�ַ���������
	//s1.insert(p,'A');  //�ڵ�����p��λ�ò���һ�� ��A'
	//s1.insert(p, 3, 'B');  //�ڵ�����λ�ò��� 3 �� 'B'
	//string::iterator b = s2.begin();
	//string::iterator e = s2.end();
	//s1.insert(p, b, e);  //��s2�е��ַ����õ�����������s1�еĵ�����p��λ��
	////��ֵ
	//s1.assign(b, e); //s1�����е��ַ������滻Ϊ ������ b �� e ֮���Ԫ��
	//s1.assign(8, 'K');  //��s1������ֵ���滻Ϊ 8 �� 'K'
	//s1.erase(p); //ɾ��s1�е�����pָ���Ԫ��
	//string::iterator p2 = s1.end();
	//s1.erase(p, p2);  //ɾ��s1�е����� p �� p2 ֮���Ԫ�أ�����pָ���Ԫ�أ������� p2 ָ���Ԫ��
	//////ʹ���±����
	//s1.insert(0, 3, 'A');  //��λ��0������3����A'
	//s1.insert(5, s2); //��λ�� 5 �������ַ��� s2
	//s1.insert(0, s2, 2, 3); //��s1��λ��0�������ַ���s2��λ��2��ʼ�������ַ�
	//s1.assign(s2); //��s2��ֵ��s1
	//s1.erase(2, 3); //��λ��2����ʼ��ɾ��3��
	
	//string s("Hello world");
	//string s2 = s.substr(6, 5); //��s�ַ�����λ�� 6 ��ʼ�� 5 ���ַ�������ʼ��s2,���s�в��� 5 �����Ǿ��ж��ٸ�����
	//string s3 = s.substr(6);  //��s�ַ�����λ�� 6 ��ʼ�������ַ��������ʻ�s3
	//string s4 = s.substr(); //����s�������ַ�����ʼ��s4,�൱�� s4=s;
	//s.append("casen");  //��s�ַ����������� "casen" 
	//s.insert(s.size(), "casen"); //����ͬ��
	//s.replace(4, 3, "xkf"); //��s�ַ�����λ��4��ʼ�� 3 ���ַ��滻Ϊ ��123��
	//s.replace(4, 3, "xukai"); //�滻ʱ��Ҫ�� �滻������Ҫ��
	////�滻�൱����ɾ����һ���֣�Ȼ���ٲ����µ�һ����

	//string name("CasenXu");
	////��ȷ����
	//string::size_type pos1 = name.find("sen"); //���ҡ�sen�� ��λ�ã�����ֵΪһ��λ�� pos1=2;
	//if (pos1==string::npos)  //�ж��Ƿ��ҵ���
	//{
	//	cout << "Found it" << endl;  
	//}
	//name = "r2d3";
	//string numerics("0123456789");
	//string::size_type pos = name.find_first_of(numerics);  //����name�еĵ�һ������
	//if (pos1==string::npos)
	//{
	//	cout << "Found it" << endl;
	//}
	////����name���е�����
	//string::size_type pos = 0;
	//while ((pos = name.find_first_of(numerics, pos)) != string::npos)
	//{
	//	cout << name[pos] << endl;
	//	pos++;
	//}
	//pos = 0;
	////����name�����в������ֵ��ַ�
	//while ((pos = name.find_first_not_of(numerics, pos)) != string::npos)
	//{
	//	cout << name[pos] << endl;
	//	pos++;
	//}
	//string letters("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
	//pos = 0;
	////����name�����е���ĸ
	//while ((pos = name.find_first_of(letters, pos)) != string::npos)
	//{
	//	cout << name[pos] << endl;
	//	pos++;
	//}

	//string s1("abcxyz");
	//string s2("abdxyz");
	////���ù�ϵ��������Ƚ�
	//if (s1 == s2) cout << "�����"<<endl;
	//if (s1 != s2) cout << "���" << endl;
	//if (s1 > s2) cout << "s1��" << endl;
	//if (s1 < s2) cout << "s2��" << endl;
	////����compare�Ƚ�
	//s1.compare(s2); //������ s1 ��С����s1С������0�����
	//s1.compare(3, 3, s2);  //����s1�� 3 ��λ�ÿ�ʼ�������ַ�����s2���Ա�
	//s1.compare(3, 3, s2, 3, 3); //����s1�ĵ�3��λ�ÿ�ʼ�������ַ���s2�е�3���ַ���ʼ�������ַ����бȽ�
	////Ҳ������ָ��
	//char *p = "aabbcc";
	//s1.compare(3, 3, p, 3, 3);  

	return 0;
}
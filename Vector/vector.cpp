#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<algorithm>

using namespace std;

int main(){
	vector<int> ivec(100,0);
	cout << ivec.capacity();
	cout << ivec.size();
	vector<int> v;
	list<int> l;
	deque<int> d;

	//deque�����в���������������һ��㣬���Ǻ����
	d.push_back(50);  //���������˶����������룬ɾ������
	d.push_front(10);


	//������ȱ��
	v.push_back(10);   //�������ݱȽ�����ӦΪ��������������С�Ĳ���
	v.push_back(90);
	v.push_back(50);
	vector<int>::iterator vi = v.begin();
	++vi;
	++vi;
	v.insert(vi, 70);  //�����ķ�ʽ�������ݷǳ�������ΪҪ�������в���λ���к������е���������ƶ�
	vi = v.begin();
	++vi;
	v.erase(vi);  //ɾ��Ҳ�ǳ�����ҲҪ��ɾ��λ�ú��������������ǰ�ƶ�

	//�������ŵ㣬�����ʱ��
	sort(v.begin(), v.end());
	if (binary_search(v.begin(),v.end(),70))  //���ֲ��ң��ɲ����±꣩
	{
		cout << "Found it." << endl;
	}

	l.push_back(10);   //��������ʱ��list�ǳ��죬û������������С�Ĳ���
	l.push_back(90);
	l.push_back(50);
	list<int>::iterator li = l.begin();
	++li;
	++li;
	l.insert(li, 70);  //�������ݷǳ��죬ֱ�Ӵ����ڵ�Ϳ�����
	li = l.begin();
	++li;
	l.erase(li); //ɾ�����ݷǳ��죬ֻ��Ҫɾ���ڵ㼴��

	//list��ȱ�㣬����Ƚ���
	l.sort();
	if (binary_search(l.begin(),l.end(),70))  //���ֲ��ң������������Ķ��ֲ��ң��ٶȱȽ�����û���±꣩
	{
		cout << "Found it." << endl;
	}
	return 0;
}
# 中级 #
## 1. 顺序容器 STL deque 类 ##


- deque是一个动态数组
- 与vector非常类似，vector只能在末尾操作
- 但deque可以在数组开头和末尾插入和删除数据

    	#include<iostream>
		#include<deque>
		using namespace std;
		int main(){
			//声明一个deque
			deque<int> a;
			//在后面加入数据
			a.push_back(3);
			a.push_back(4);
			//在前面加入数据
			a.push_front(2);
			a.push_front(1);
			//显示
			cout<<"插入前："<<endl;
			for(deque<int>::iterator iter=a.begin();
				iter != a.end(); ++iter)
				{
					cout<<*iter<<endl;
				}
			//从前面删除
			a.pop_back();
			//从后面删除
			a.pop_front();
			//显示
			cout<<"删除后："<<endl;
			for(deque<int>::iterator iter=a.begin();
				iter != a.end(); ++iter)
				{
					cout<<*iter<<endl;
				}
			return 0;
		}

使用算法计算容器的下标：

	#include<algorithm>
	//计算容器中到迭代器位置的下标
	size_t offset = distance(a.begin(),iter);

##2. 顺序容器 STL list 类 ##

- 实例化std::list对象
	
		list<int> a，b; //创建链表

- 在list开头插入元素
		
		a.push_front(300);
		a.push_front(200);
		a.push_front(100);

- 在list中间插入元素

		a.insert(a.begin(),10); //a.begin()制定插入的位置，10为插入的数据
		a.insert(a.end(),4,20); //在末尾插入4个20

- 在list末尾插入元素		

		a.push_back(500);

		// 将一个链表中的数据全部插入到另一个链表中
		a.insert(iter, b.begin(), b.end()); //将b链表中的所有数据插入到a链表中

- 显示链表内容，不可以使用下标，要是用迭代器

		for(list<int>::iterator iter = a.begin();
			iter != a.end(); ++iter)
			{
				cout << *iter << endl;
			}

- 删除list中的元素

		// 新建一个迭代器，然后使用迭代器向链表中插入一个2，并且迭代器指向2
		list<int>::iterator ite;
		ite = a.insert(a.begin(),2);
		// 删除迭代器所指向的元素,删除一个元素
		a.erase(ite);
		// 删除两个迭代器之间的所有元素；从哪里到哪里，从是包括的，到是不包括的
		a.erase(a.begin(),ite);

- 对list中元素进行反转和排序

		//翻转
		a.reverse();
		//排序
		a.sort();
		
## 3. STL stack ##

- （堆）栈： LIFO（last in,first out) 后进先出


- 自适应容器（容器适配器）


- 栈适配器 STL stack  (可以用list,vector,deque) 

		stack<int,deque<int>>  a; //默认是用deque
		stack<int>  a`;
		stack<int,vector<int>> b; //可以使用vector
		stack<int,list<int>>   c; //可以使用链表

- 默认的五种操作
		
		a.empty(); //堆栈是否为空
		a.size();  //堆栈的大小  返回一个值，描述栈中数据个数
		a.pop();   //从堆栈中弹出一个元素,这个数据就删除了,删除且不返回数据
		a.top();   //查看栈顶的数据， 只查看，不删除
		a.push(item); //把一个数据压入堆栈

- 堆栈主要用在系统软件开发，比如操作系统，堆栈被称为专业程序员使用的

		
## STL queue ##

- 队列：FIFO（first in，first out) 先进先出

- 自适应容器（容器适配器）

- 栈适配器 STL queue  (不可以用vector) 

		queue<int,deque<int>>   q;
		queue<int> q; //默认是deuqe
		queue<int,list<int>>    q;

- 几种操作
		
		q.empty();  //检查队列是否为空
		q.size();   //检查队列有多少个元素
		q.front();  //查看队首的数据
		q.back();   //查看队尾的数据
		q.pop();    //从队首删除数据
		q.push(item); //从队尾插入数据

- 队列主要用在系统软件开发，比如操作系统，堆栈被称为专业程序员使用的

## STL 优先级队列 priority_queue ##

- 自适应容器（容器适配器）：不能用list

- 最大值优先级队列
- 最大值优先级别队列中最大的数据总是在最前面

		 priority_queue<int> pq; //最大值优先级队列,默认的使用vector来做的

- 最小值优先级队列
- 最小值优先级队列中最小的数总是在最前面

		#include<functional>
		priority_queue<int, deque<int>, greater<int>> pq2; //最小值优先级队列

- 优先级队列适配器：STL priority_queue

		priority_queue<int,deque<int>> pq;
		priority_queue<int,vector<int>> pq;

- 几种操作

		pq.empty();  //检查优先级队列是否为空
		pq.size();   //查看优先级队列的大小
		pq.top();	 //查看优先级队列首位的数据
		pq.pop();	 //删除优先级队列首位的数据
		pq.push(item); //向优先级队列中插入数据

## 顺序容器的定义 ##

- 顺序容器  vector  list  deque

		需要包含相应的头文件 
		#include<vector>
		#include<list>
		#include<deque>

- 顺序容器适配器  stack  queue  priority_queue
- 可以使用 迭代器 或 指针 用一种迭代器去初始化另一种迭代器
		
		vector<int> a(10,3);
		deque<int> deq(a.begin(),a.end());

		list<string> slist(64); //list中有64个空串
		list<int> ilist(64); //list中有64个0

- 容器中也可以使容器类型

		vector< vector<string> > lines; //里面的空格不可以少
		vector< list<string> >  vlist; //里面也可以是不同的类型

### vector: 可以非常快速的进行随机访问 ###
### list: 可以快速的插入和删除 ###
### deque:  类似于 vector,但是可以在两端进行操作 ###
### stack:  First in, Last out ###
### queue:  First in, First out ###
### priority_queue:  按照优先级排列 ###

## 迭代器和迭代器范围 ##

- 每一种容器都有自己的迭代器
- 所有的迭代器接口都是一样的
- 在整个标准库中，经常使用形参为一对迭代器的构造函数
- 常用的迭代器操作有：

		*iter、++iter、--iter、iter1=iter2、iter1 != iter2

- vector和deque容器的迭代器的额外操作

		iter + n、iter - n、 >、>=、<、<=

- 迭代器范围
		
		begin/end, first/last

		vector<int> a;
		a.begin(); //指向容器的第一元素
		a.end();  //指向容器最后一个元素的下一个，结束标记

		vector<int>::iterator x = a.begin();
		vector<int>::iterator m = x + a.size()/2; //指向容器的中间位置
		
		从。。。到。。。（包括从，而不包括到）[a, b); 

- 使用迭代器失效的容器操作

- 容器的各种操作

		vector<int>::size_type          a1;  //
		vector<int>::iterator           a2;  //
		vector<int>::const_iterator     a3;  //常量迭代器
		vector<int>::reverse_iterator   a4;  //逆序迭代器，从容器的最后一个元素向前迭代
		vector<int>::const_reverse_iterator a5;  //常逆序迭代器
		vector<int>::difference_type    a6;  //用来保存容器中两个数据之间的距离
		vector<int>::value_type         a7;
		vector<int>::reference          a8;  //引用（需要初始化）
		vector<int>::const_reference	a9;  //常引用（需要初始化）

		list、deque 同样有这些操作

- 循环vector、deque、list

		for(vector<int>::size_type i=0; i<a.size(); ++i){ }

- list没有下标，所以不能使用下标操作list，
- vector、list、deque都可以使用迭代器操作

		const vector<int> a(10,2); //常向量，初始化以后的数据就不可以修改了
		vector<int>::const_iterator iter=a.begin();  //要用常迭代器

- 在顺序容器中添加元素（vector、list、deque)

		c.push_back(t); //在后面加入数据
		c.push_front(t); //在前面加入数据 （vector 不可以用）
		c.insert(p,t);  //插入在迭代器的前面插入t，P为迭代器
		c.insert(p,n,t); //一次插入n个t元素在迭代器里面
		c.insert(p,b,e); //用两个迭代器，将容器中，b，e为迭代器之间的数据插入到c这个容器的p位置之前

- 添加入的元素都为副本，只是把数据拷贝了一份
- 添加数据可能到时迭代器失效，要重新通过c.end();来确定向量的结尾
- 不要把.end() 返回的迭代器保存起来，会避免使用无效的迭代器

- 比较两个容器的大小：
	- 如果两个容器的长度，和里面的所有值都相同，则两个容器一样大
	- 从容器的第一元素开始对比，哪个大，那就哪个容器大
	- 如果两个容器里前面的数据都一样，那哪个容器长，哪个容器就大
	- 容器的大小比较类似于字符串的大小比较


- 容器大小的操作
		
		a.size(); 的返回类型为 vector<int>::size_type
		a.max_size(); //容器所能容纳的最大值
		a.resize(t); //将容器的大小调整为t,可变大，可缩小
		a.resize(t,m); //调整容器的大小为t，新增加的值为m

		resize 也可能使迭代器失效，所以不要缓存 resize
		 
- 访问元素

	- 在使用front 和 back 之前，一定要先检查一下容器是否为空
	

			c.back();  //返回最后一个元素  返回的是一个引用
			vector<int>::reference a = c.back();
			c.front();  //返回第一个元素   返回的是一个引用
			c[n];    //使用下标操作
			c.at(n);

			c[n] 和 c.at(n)只适合 vector 和 deque 容器

- 删除元素

		c.erase(p);  //使用迭代器，删除迭代器所指向的元素
		c.erase(b,e);  //删除两个迭代器所指向的区间 [b, e)
		c.clear();  //全部删除
		c.pop_back();  //最后一个删除
		c.pop_front();  //最前面一个删除

	- c.pop_front() 只适用于 list 和 deque 容器

- 赋值与交换（swap）
		
		c1 = c2;    // 把 c2 容器中的数据拷贝到 c1 容器中（ 要求类型必须相同）
		c1.swap(c2);  //把 c1 容器中的数据和 c2 容器中的数据进行交换
		c2.swap(c1);  //功能同上		

		c.assign(b,e);  //容器相互赋值（要求类型兼容即可） 
		c.assign(n,t); //使用指定数量的元素重新赋值 n 个 t，会将原来的数据全部清空 

	- 使用assign：类型兼容即可
	- 使用swap： 类型必须相同

## Vector 容器的自增长 ##

	vector<int> ivec;
	ivec.size();  //向量的大小
	ivec.capacity();  //向量的容量，就是向量最多可以存放的数据量

- vector是用数组做出来的
- 数组的优点和缺点

 - 向量扩大容量的原理是先新建一个更大的数组，然后把已有的数据全部拷贝过来，替换原来的容器

			ivec.reserve(n); //可以设置向量的容器一下增加到n个，那么在n个数据未填满时，向量是不会重新改变大小的。

## 顺序容器的选用 ##

- 顺序容器
 - vector的优点和缺点
	 - 插入，删除比较慢，需要将插入和删除位置之后的数都进行移动，扩充容器容量比较慢
	 - 排序很快
	 - 查找很快
 - list的优点和缺点
	 - 插入，删除特别快
	 - 排序很慢
	 - 查找很慢
 - deque的优点和缺点
	 - 所有操作都比vector	慢
	 - 操作很灵活，可以从两端插入和删除 

- 插入操作如何影响容器的选择
		
		如果需要在容器的中间位置频繁的插入，删除数据，那就选择list
		如果在容器中见插入的很少，而且需要排序，那就使用 vector
		deque的所有操作都比vector慢一点点，但是操作很灵活，可以在两端都操作
		当不知道用哪个容器的时候，就选用vector向量
		迭代器对所有的容器操作都是一样的

- 实例代码：

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

			//deque的所有操作都比向量慢了一点点，但是很灵活
			d.push_back(50);  //可以在两端都操作，插入，删除数据
			d.push_front(10);


			//向量的缺点
			v.push_back(10);   //插入数据比较慢，应为会有扩充容器大小的步骤
			v.push_back(90);
			v.push_back(50);
			vector<int>::iterator vi = v.begin();
			++vi;
			++vi;
			v.insert(vi, 70);  //这样的方式插入数据非常慢，因为要把容器中插入位置中后面所有的数据向后移动
			vi = v.begin();
			++vi;
			v.erase(vi);  //删除也非常慢，也要把删除位置后面的所有数都向前移动
		
			//向量的优点，排序的时候
			sort(v.begin(), v.end());
			if (binary_search(v.begin(),v.end(),70))  //二分查找（可操作下标）
			{
				cout << "Found it." << endl;
			}

			l.push_back(10);   //插入数据时，list非常快，没有扩充容器大小的步骤
			l.push_back(90);
			l.push_back(50);
			list<int>::iterator li = l.begin();
			++li;
			++li;
			l.insert(li, 70);  //插入数据非常快，直接创建节点就可以了
			li = l.begin();
			++li;
			l.erase(li); //删除数据非常快，只需要删除节点即可
		
			//list的缺点，排序比较慢
			l.sort();
			if (binary_search(l.begin(),l.end(),70))  //二分查找，但不是真正的二分查找，速度比较慢（没有下标）
			{
				cout << "Found it." << endl;
			}
			return 0;
		}


## 构造string对象的方法 ##

-  字符串的各种构造函数

		string s1;  // 创建一个空字符串 s1
		string s2(5,'a');  //创建一个字符串 s2，里面有 5 个 a
		string s3(s2);  //创建一个字符串s3,用s2初始化它
		string s4(s3.begin(),s3.begin()+s3.size()/2); //用s3中的一般来构造s4
		
		//c语言字符串，结尾有'\0'
		char *cp="case";
		char c_array[]="world";
		//非c语言的字符串
		char no_null[]={'h','i'};  //结尾没有'\0'

		string ss1(cp);  //可以用C语言的字符串来初始化string字符串
		string ss2(c_array,5); //c_array就是字符数组的初始位置开始，使用5个字符来初始化string 字符串

		string sss1="casen";
		string sss2(s1,2);  //用从sss1中位置2开始，初始化sss2
		string sss3(s1,0,2);  //用字符串sss1中从位置0开始的2个字符来初始化sss3
		string sss4(s1,0,8); //用sss1中从位置0开始，最多8个字符来初始化sss4,如果sss1中不足8个字符，那就有几个用几个

## 修改string对象的方法 ##

	string s1("hello"); 
	string s2("casen");
	

	////使用迭代器操作
	string::iterator p = s1.begin();//字符串迭代器
	s1.insert(p,'A');  //在迭代器p的位置插入一个 ‘A'
	s1.insert(p, 3, 'B');  //在迭代器位置插入 3 个 'B'

	string::iterator b = s2.begin();
	string::iterator e = s2.end();
	s1.insert(p, b, e);  //将s2中的字符利用迭代器来插入s1中的迭代器p的位置
	//赋值
	s1.assign(b, e); //s1中所有的字符都被替换为 迭代器 b 和 e 之间的元素
	s1.assign(8, 'K');  //将s1中所有值都替换为 8 个 'K'

	s1.erase(p); //删除s1中迭代器p指向的元素

	string::iterator p2 = s1.end();
	s1.erase(p, p2);  //删除s1中迭代器 p 到 p2 之间的元素，包括p指向的元素，不包括 p2 指向的元素

	////使用下标操作
	s1.insert(0, 3, 'A');  //在位置0，插入3个‘A'
	s1.insert(5, s2); //在位置 5 ，插入字符串 s2
	s1.insert(0, s2, 2, 3); //在s1中位置0，插入字符串s2中位置2开始的三个字符
	s1.assign(s2); //将s2赋值给s1
	s1.erase(2, 3); //从位置2，开始，删除3个
	s1[0]="A";  //将字符串s1中位置0 的字符替换为 "A"

## 只适合string类型的操作 ##

- 只有string类型可以用，其他的容器不可以用
	- 三个substr重载函数   ： 可以用来获取字符串的一部分
	- 六个append重载函数   ： 用来在字符串的后面添加新的字符或字符串
	- 十个replace重载函数	  ： 将字符串中的一部分替换
	
				string s("Hello world");
				string s2 = s.substr(6, 5); //从s字符串的位置 6 开始的 5 个字符串来初始化s2,如果s中不足 5 个，那就有多少给多少
				string s3 = s.substr(6);  //从s字符串的位置 6 开始的所有字符串来舒适化s3
				string s4 = s.substr(); //利用s的所有字符来初始化s4,相当于 s4=s;

				s.append("casen");  //在s字符串的最后添加 "casen" 
				s.insert(s.size(), "casen"); //作用同上

				s.replace(4, 3, "xkf"); //将s字符串中位置4开始的 3 个字符替换为 “123”
				s.replace(4, 3, "xukai"); //替换时候不要求 替换个数的要求

				 替换相当于先删除了一部分，然后再插入新的一部分

## string 类型的查找 ##

	string name("CasenXu");
	//精确查找
	string::size_type pos1 = name.find("sen"); //查找“sen“ 的位置，返回值为一个位置 pos1=2;
	if (pos1==string::npos)  //判断是否找到了
	{
		cout << "Found it" << endl;  
	}

	name = "r2d3";
	string numerics("0123456789");
	string::size_type pos = name.find_first_of(numerics);  //查找name中的第一个数字
	if (pos1==string::npos)
	{
		cout << "Found it" << endl;
	}
	//查找name所有的数字
	string::size_type pos = 0;
	while ((pos = name.find_first_of(numerics, pos)) != string::npos)
	{
		cout << name[pos] << endl;
		pos++;
	}

	pos = 0;
	//查找name中所有不是数字的字符
	while ((pos = name.find_first_not_of(numerics, pos)) != string::npos)
	{
		cout << name[pos] << endl;
		pos++;
	}


	string letters("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
	pos = 0;
	//查找name中所有的字母
	while ((pos = name.find_first_of(letters, pos)) != string::npos)
	{
		cout << name[pos] << endl;
		pos++;
	}

- s.find(args); 			   //从左向右精确匹配的查找
- s.rfind(args);  			   //从右向左精确匹配的查找
- s.find_first_of(args);       //从左向右查找任意的字符
- s.find_first_not_of(args);   //从左向右查找任何一个都匹配不到的字符
- s.find_last_of(args);        //从右向左查找任意字符
- s.find_last_not_of(args);    //从右向左查找任何一个都不匹配的字符

## stirng 对象的比较方法 ##

- 可以用关系操作符来比较，如：< > = ....
- 也可以使用 compare 函数来进行比较

- 所有的比较都是 " 区分大小写的 "

		string s1("abcxyz");
		string s2("abdxyz");

		//利用关系运算符来比较
		if (s1 == s2) cout << "不相等"<<endl;
		if (s1 != s2) cout << "相等" << endl;
		if (s1 > s2) cout << "s1大" << endl;
		if (s1 < s2) cout << "s2大" << endl;

		//利用compare比较
		s1.compare(s2); //大于零 s1 大，小于零s1小，等于0，相等
		s1.compare(3, 3, s2);  //利用s1第 3 个位置开始的三个字符来和s2作对比
		s1.compare(3, 3, s2, 3, 3); //利用s1的第3个位置开始得三个字符和s2中第3个字符开始的三个字符进行比较
		//也可以用指针
		char *p = "aabbcc";
		s1.compare(3, 3, p, 3, 3);  	

## STL map 与 multimap （也是容器）（速度非常快）##

- 这两种容器是用来保存键值对数据的（一对一对的数据）
- map（映射，一对一）、multimap（多映射，键可以重复，一对多）
- 红黑树；
- 基本操作：

		insert：4中方法
		count和find
		erase：3中方法

- 示例代码：

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

- 不能在找到了之后直接进行修改，可以先删除，再重新插入一个新的，来代替修改工作


## STL set 与 multiset （也是容器） ##

- 插入相比vector，list等比较慢
- set与multiset 会再插入后自动排序
- set（集，不能保存重复的数据）、multiset（多集，可以保存重复的数据）
- 红黑树；（数据结构）（二叉树）（自动排序的红黑树）
- 基本操作：

		insert
		count和find
		erase

- 示例代码：
		
		set<int> a;
		multiset<int> ma;
		//插入后会自动排序的 
		a.insert(60);  
		a.insert(-1);
		a.insert(3000);
		cout << "显示set里面的数据：" << endl;
		set<int>::const_iterator i = a.begin();
		while (i!=a.end())
		{
			cout << *i << endl;
			++i;
		}
	
		ma.insert(3000);
		ma.insert(a.begin(), a.end());  //利用a来初始化ma
		ma.count(3000);  //统计其中 3000 的个数
	
		//查找
		set<int>::iterator i_found = a.find(-1); //利用find函数来查找 	-1，返回的是一个迭代器
		if (i_found!=a.end())
		{
			cout << "Found it" << *i_found << endl;
		}

		//删除
		a.erase(3000);  //单个删除，也可以使用两个迭代器来删除一个范围内的	值，
		a.clear(); //删除a中所有的数据
	

- 不能在找到了之后直接进行修改，可以先删除，再重新插入一个新的，来代替修改工作

## 容器通用的显示方法（模板函数） ##

	//统一显示容器中的数据(模板函数），可以显示所有的容器
	template <typename Container> void PrintContents(const Container &a)
	{
		Container::const_iterator iter = a.begin();
		while (iter!=a.end())
		{
			cout << *iter << endl;
			++iter;
		}
		cout << endl;
	}


## 算法（algorithm） ##

- 有100多种算法
- 函数对象（function objects）
- 函数适配器（function adapters）
- 三个头文件

		#include<algorithm>  //算法头文件
		#include<numeric>    //数值算法头文件
		#include<functional> //函数对象、函数适配器头文件

## STL 函数对象 ##

- 预定义的函数对象
- 自定义的函数对象
- 容器和函数对象
- 算法和函数对象

		//函数对象
		class PrintInt
		{
		public:
			void operator()(int number) const
			{
				cout << number << " ";
			}
		};

		//普通函数
		void printNum(int number){
			cout << number << " ";
		}

		set<int> a; //自动排序的红黑树
		set<int, less<int>> a1;  //less<int>为默认的函数（可省略），表示从小到大排序
		set<int, greater<int>> a2; //表示从大到小排序

		//算法
		for_each(a.begin(), a.end(),printNum);// 利用函数或函数对象对迭代器区间内的数做处理
		for_each(a.begin(), a.end(), PrintInt()); //利用函数对象来处理数据

## STL算法 - 元素计数 ##

- count     （对所有的容器都可以使用）（线性查找，速度比较慢）

		vector<int> a;
		count(a.begin(),a.end(),m);   //查找向量a中有几个m

- count_if  （对所有的容器都可以使用）

		count_if(a.begin(),a.end(),f); //查找符合函数f的值的个数
								   函数适配器   函数对象	
		count_if(a.begin(),a.end(),bind2nd(greater<int>(),4));判断向量a中有多少个数是大于4的

- 关联容器的等效成员函数
	- set.count   （效率比直接用count算法效率高
	- multiset.count
	- map.count
	- multimap.count

## STL 算法- 最小值和最大值 ##

- 头文件 #include<algorithm>
- min_element(b,e)  //b，e为迭代器    返回值为一个迭代器
- min_element(b,e,op)  //op为函数对象
- max_element(b,e)
- max_element(b,e,op)

## STL 算法- 查找算法 ##

- 常用的查找算法
- find  （对所有的容器都是可用的）（返回的类型是一个迭代器）

		find();
		find_if();
		//例：
		vector<int> ivec;
		vector<int>::iterator pos;
													第一个能被3整除的数，返回迭代器
		pos=find_if(ivec.begin(),ivec.end(),not1(bind2nd(modulus<int>,3));	
		
	
	- 注意
		- 如果是已序区间，可以使用已序区间查找算法
		- 关联式容器有等效的成员函数find();
		- string有等效的成员函数find();
				string s("abcdaxs");
				string::size_type pos=s.find("ax");
				if(pos != string::npos)
					cout<<"Find it"<<endl;
- search  （对所有的容器都是可用的） （用来查找连续的值）  （返回结果也为迭代器） 

		search_n(b,e,c,v);  //b迭代器开始，e迭代器结尾，连续的 c 个 v
		search_n(b,e,c,v,p); // 同上，p 为谓词
		//例：
		pos=search_n(a.begin(),a.end(),3,6,greater<int>()); //查找连续的三个大于六的值，返回迭代器
		por=serach_n_if(a.begin(),a.end(),3,bind2nd(greater<int>(),6));  //等同于上式

	- 注意
		- 该算法的第二种形式应该是 search_n_if(b,e,c,p);

#### distance(a.begin(),pos)+1;  可以用来求迭代器的位置序号 ####

- 下面这连个算法是一对儿，第二个应该叫 search_end(),但是被命名为find_end()
	- 在一个区间中找一个子区间
	
		search()    //从左向右找
		find_end()  //最后一个符合的子区间
		//例：
		deque<int> ideq;
		list<int> ilist;
		deque<int>::iterator pos;
		pos = search(ideq.begin(),ideq.end(),ilist.begin(),ilist.end());//在deque中查找子区间list
	
	- 例：利用谓词查找连续的  “奇数，偶数，奇数”
			
			示例代码：
			#include<iostream>
			#include<algorithm>
			#include<vector>
			using namespace std;

			//二元谓词
			bool checkEven(int elem, int even){
				if (even)
					return elem % 2 == 0;
				else
					return elem % 2 == 1;
			}
			int main(){
				vector<int> ivec;
				//向量中插入0~9
				for (int  i = 0; i < 9; i++)
				{
					ivec.push_back(i);
				}
				//创建一个判断区间
				bool checkEvenArgs[] = { false, true, false };
				vector<int>::iterator pos;
				//谓词查找
				pos = search(ivec.begin(), ivec.end(), checkEvenArgs, checkEvenArgs + 3, checkEven);
				if (pos != ivec.end())
				{
													//	返回序列位置
					cout << "found it in number:" << distance(ivec.begin(),pos)+1 << endl;
				}
			}
				
- find_first_of(b,e,sb,se)  （用来查找 某个序列中 任何一个，返回第一个找到的迭代器）
	- 例如在 "dsb2dgi3c"中查找第一个数字的位置，就可以使用find_first_of(num);其中num是包含0~9的容器		
- find_first_of(b,e,sb,,se,bp)	（也可以传入谓词来查找）

		vector<int>::iterator pos2;
		//查找ivec2向量中是否包含 searchList 列表中的一个或多个，找到第一个就停止
		pos2 = find_first_of(ivec2.begin(), ivec2.end(), searchList.begin(), searchList.end()); 
		
		//从后面开始找，使用逆向迭代器
		vector<int>::reverse_iterator rpos;
		rpos = find_first_of(ivec.rbegin(),ivec.rend(),searchList(),searchList.end());
		//rpos.base(); //将逆向迭代器转换为正向迭代器，转换以后再求距离就不需要再加1了
		cout<<"找到的位置为："<<distance(ivec.begin(),rpos.base())<<endl;


- adjacent_find() 查找连续的两个相等的，或者连续的两个符合谓词约束的数  （返回值依然为迭代器）

		adjancet_find(b,e)
		adjancet_find(b,e,p)

- 已序区间的查找算法
	- 在查找前必须先对区间进行排序，然后再使用下列查找算法	
		
			binary_search(b,e,v)  //返回值为bool类型，找到了为true，否则为false
			binary_search(b,e,v,p)
			includes(b,e,sb,se)   //查找b,e之间有没有sb,se之间所有的元素 ； 被查找的sb,se之间也需要排序
			includes(b,e,sb,se,p)

			lower_bound(b,e,v)  //查找第一个 v 的位置 （返回的结果是一个迭代器）（可用于在一个有序数列中插入一个数，但不需要重新排序，也不会打破序列的排序）			
			upper_bound(b,e,v)  //查找最后一个 v 的位置 （返回的结果是一个迭代器）（返回的是大于 v 的第一个位置）
			//例：a.insert(lower_bound(a.begin(),a.end(),m),m); //在a中m位置处再插入一个m

			equal_range()  //可以同时查找到第一个 v 和最后一个 v 位置 （返回的结果是一个迭代器）
			pair<list<int>::iterator,list<int>::iterator> range;  //equal_range()需要使用一对迭代器
			range = equal_range(ilist.begin(),ilist.end(),v); //返回 v 的第一位置和最后一个位置的下一个

			关联式容器有等效的成员函数，性能更佳
			multiset<int> iset;
			iset.lower_bound(v);
			iset.upper_bound(v);
			iset.equal_bound(v);


## string查找函数 和 STL查找算法的比较 ##

	- string函数						STL算法
	- find()						find()
	- rfind()						find() + 逆向迭代器
	- find()						search()
	- rfind()						find_end()
	- find_first_of()				find_first_of()
	- find_last_of()					find_first_of() + 逆向迭代器


## STL 算法 -  for_each  （遍历所有的数） ##

	for_each(b,e,p) // b,e 为一对迭代器，指明一个区间。p为函数或函数对象

	//使用for_each（）算法遍历数据
	//例：
	void print(int elem)
		cout<<elem<<' ';
	for_each(a.begin(),a.end(),print);  //使用for_each()来遍历并显示所有的数据
	
	//使用for_each() 和 函数对象修改数据
	可以使用函数或函数对象来修改数据

	//使用for_each() 的返回值

## STL 算法- 区间的比较 ##

- equal(b,e,b2)   比较两个容器中的数据是不是相等，b,e为第一个容器的迭代器，b2位第二个容器开中的开始比较的位置的迭代器
- equal(b,e,b2,p)

		// 比较,equal返回值为bool类型
		bool result = equal(ivec.begin(), ivec.end(), ilist.begin());
		if (result)
		{
			cout << "这两个区间相等" << endl;
		}


		//利用谓词判断连个区间中对应的数是否同为奇数或同为偶数
		bool result2 = equal(ivec.begin(), ivec.end(), ilist.begin(), bothEvenOrOdd);
		if (result2)
		{
			cout << "是同为奇数或同为偶数" << endl;
		}
		//二元谓词
		bool bothEvenOrOdd(int elem1, int elem2){
			return elem1 % 2 == elem2 % 2;
		}

		
- mismatch(b,e,b2)  查找两个容器中第一个不相等的数据 
- mismatch(b,e,b2,p)

		//找出两个区间中第一个不相等的数 （返回值是一个pair，是一对儿迭代器）
		//第一个迭代器指向第一个容器中不相等的数，第二个迭代器指向第二个容器中不相等的数	
		pair<vector<int>::iterator, list<int>::iterator> result3;
		result3 = mismatch(ivec.begin(), ivec.end(), ilist.begin());
		//如果没有找到不相等的数，那么第一个迭代器则为 end
		if (result3.first==ivec.end())
		{
			cout << "没有找到不相等的数" << endl;
		}
		else
		{
			cout << "找到了!" << endl << " 第一个数为：" << *result3.first << "第二个不相等的数为：" << *result3.second << endl;
		}
		//使用预定义的函数对象做谓词,less_equal<int>(),如果第一个容器中的数小于等于第二个容器中的数，则返回true，继续找，否则返回找的的值的迭代器
		result3 = mismatch(ivec.begin(), ivec.end(), ilist.begin(), less_equal<int>());

		
- lexicographical_compare(b,e,b2,e2)   用来比较第一个区间是不是比第二个区间小   
- lexicographical_compare(b,e,b2,e2,p)

		//检查第一个区间是不是比第二个区间的数小，（如果比较的值都一样，谁的数多，谁就大）（有一个数不相等，就根据不相等的数来比较大小）（全都相等，则相等）
		//如果第一个一个区间小于另一个区间，则返回true；返回false，则第一个区间大于等于第二个区间
		bool result4 = lexicographical_compare(ilist.begin(), ilist.end(), ivec.begin(), ivec.end());
		if (result4)
		{
			cout << "第一个区间小于第二个区间！" << endl;
		}
		else
		{
			cout << "第一个区间大于等于第二个区间！" << endl;
		}

## STL 算法- 复制元素（Copying） ##

- copy()
- copy_backward()

		//复制之前必须考虑复制的目的容器是否有足够的空间，如果没有空间可以使用插入迭代器来进行拷贝back_inserter为插入迭代器
		copy(ilist.begin(), ilist.end(), back_inserter(ivec));

		//从前面开始复制
		copy(ilist.begin(), ilist.end(), ivec.begin());
		//从后面开始复制
		copy_backward(ilist.begin(), ilist.end(), ivec.end());

		//可以利用copy将内容拷贝到输出流中，使用输出流迭代器
		copy(ilist.begin(), ilist.end(), ostream_iterator<int>(cout, " ")); //效果类似于for循环的显示数据

		//逆向迭代器拷贝
		copy(ilist.rbegin(), ilist.rend(), ivec.back());
		reverse_copy(ilist.begin(), ilist.end(), ivec.begin()); //可以替换逆向迭代器拷贝，这个速度更快

- 注意：
	- 没有copy_if()算法，可以使用remove_copy_if()算法
	- 复制过程中红要逆转元素测序，使用reverse_copy()算法
	- 把容器内所有元素赋值给另一个容器，要使用赋值操作符或容器的assign()成员函数
	- 复制过程中删除某些元素，使用remove_copy()和remove_copy_if()算法
	- 复制中改变元素，使用transform()或replace_copy()算法

## STL 算法- transform() ##

- transform()算法哟两种形式：

		transform(b1,e1,b2,op)  //把一个集合区间中的元素，通过转换变换，复制到另一个集合区间中（复制和修改同时操作，通过op进行修改）b1,e1为第一个区间，b2为目标区间
		transform(b1,e1,b2,b3,op) //把两个集合利用 op 进行集合，得到的结果再拷贝到另一个集合中，b1,e1,b2,e2可以使同一个集合，也可以不同 

- 注意：
	- 如果目标与源相同，transform()就和for_each()一样
	- 如果想以某值替换符合规则的元素，应使用replace()算法

			例：
			//利用transform进行变换                     预定义的函数对象，取负数
			transform(ivec.begin(), ivec.end(), ivec.begin(), negate<int>());
	
			//利用transform进行变换的时候，要保证目标容器有位置，否则使用插入迭代器
			transform(ivec.begin(), ivec.end(), back_inserter(ilist),bind2nd(multiplies<int>(),10));
			//也可以利用transform将数据绑定到cout中，类似于显示
			transform(ilist.begin(), ilist.end(), ostream_iterator<int>(cout, " "), negate<int>());	

			//利用transform将两个容器融合操作后再存入一个目标容器
			transform(ivec.begin(), ivec.end(), ivec.begin(), ivec.begin(), multiplies<int>());

			transform(ivec.begin(), ivec.end(), ivec.rbegin(), back_inserter(ilist), plus<int>());
			//将数据绑定至  cout流中
			transform(ivec.begin(), ivec.end(), ilist.begin(),ostream_iterator<int>(cout, " "), plus<int>());

## 对比 for_each() 算法 和 transform() 算法 ##

- for_each()	    速度快        不灵活
- transform()	    速度慢        非常灵活

- 只有一个容器的时候，使用for_each(),有多个容器的时候，使用transform()

		//for_each使用的函数，传引用，所以速度快
		void square(int & elem){
			elem = elem*elem;
		}
		//transform使用的函数，不需要传引用
		int square2(int elem){
			return elem*elem;
		}

		//for_each进行操作，传引用，所以速度快很多
		for_each(a.begin(), a.end(), square);
		//transform进行操作，期间有多次拷贝，所以速度比较慢
		transform(a.begin(), a.end(), a.begin(),square2);

## STL 算法- 交换算法 ##

- swap_ranges(b,e,b2)  b,e中有多少值，就在b2中交换几个值，（返回值是一个迭代器，返回的是第一个没交换的值得迭代器）

		//将容器a中前三个值与最后三个值进行交换
		swap_range(a.begin(),a.begin()+3,a.rbegin());  //可以部分交换数据，而且可以在不同的容器之间进行交换

- 注意：下列两种方法也是交换算法
	- 容器的swap()成员函数
	- 赋值操作

- 如果把两个相同大小的容器进行交换，应该使用容器的swap()函数，速度更快
		
		//将a,b中的值进行交换
		a.swap(b);   //必须是相同的容器，而且是所有的数据都交换
		//也可以利用赋值操作
		a = b; //运行完之后，a中的值变为b中，但是b中的值没有变化，而且速度特别慢

## STL 算法- 填充新值 ##

- file(b,e,v)    用新值v来进行填充某个区间
- fill_n(b,n,v)   用新值v来填充从 b 开始的n个位置的值
- generate(b,e,p)     在某个区间中填充函数P所生成的值
- generate_n(b,n,p)   在从 b 开始的n个位置上，用函数p所生成的数来进行填充

		例：
		//使用fill进行填充，将里面所有的都替换为“casenxu”
		fill(slist.begin(), slist.end(), "casenxu");

		//使用fill_n可以选择填充的个数
		fill_n(back_inserter(slist2), 9, "casenxu");

		//将填充值绑定到cout流中,向cout中填充10个float类型的7.4
		fill_n(ostream_iterator<float>(cout, " "), 10, 7.4);

		//使用fill_n将slist2前7个的值全替换为“xu”
		fill_n(slist2.begin(),7, "xu");

		//利用generate和generate_n来填充随机数，rand为C++设定好的生成随机数的函数
		generate(ilist.begin(), ilist.end(), rand);
	
		generate_n(back_inserter(ilist), 5, rand);

## STL 算法- 替换算法 ##

- replace(b,e,ov,nv)  //把区间 b,e中所有旧的值 ov（oldvalue）替换为新的值 nv(newvalue)
- replace_if(b,e,p,v)  //用一个函数对象或函数P 把区间 b,e 中符合规则的都换成 v
- replace_copy(b1,e1,b2,ov,nv)  // 一边复制一边替换，把 ov,替换成 nv
- replace_copy(b1,e1,b2,p,v)  //用函数对象或函数 p 作为约束，在复制的时候将 b1,e1区间中符合规则的都替换成 v

		//用replace进行替换，将其中等于6的值都换成42
		replace(ilist.begin(), ilist.end(), 6, 42); 
		//利用replace_if 将ilist中小于5的数都替换成0；  less<int>()为预定义的函数对象  预定义的函数适配器 bind2nd()
		replace_if(ilist.begin(), ilist.end(), bind2nd(less<int>(), 5), 0);

		//利用replace_copy将ilist2中的数据都copy到 cout流中，在copy过程中将5替换为55
		replace_copy(ilist2.begin(), ilist2.end(), ostream_iterator<int>(cout, " "), 5, 55);
		//利用replace_copy_if将ilist2中的数据copy到cout流中，在替换中使用预定义函数对象，将小于5的都替换为44
		replace_copy_if(ilist2.begin(), ilist2.end(), ostream_iterator<int>(cout, " "), bind2nd(less<int>(), 5), 44);
		//在copy过程中将其中奇数都替换为0
		replace_copy_if(ilist2.begin(), ilist2.end(), ostream_iterator<int>(cout, " "), bind2nd(modulus<int>(), 2), 0);

## STL算法 - 删除算法 ##

- remove()
- remove_if()

		//remove不是真正的删除，而是逻辑的删除
		//按照原数据的begin和end迭代器显示为：       1 2 3 4 5 6
		//删除3后按照原数据的begin和end迭代器显示为：1 2 4 5 6 6  原数据中元素个数并没有减小，如果要真的删除，需要使用erase
		remove(ilist.begin(), ilist.end(), 3);

		//remove 返回值为迭代器，返回的是逻辑终点
		list<int>::iterator end;   
		end = remove(ilist.begin(), ilist.end(), 3);  //返回的迭代器就是到原数据的最后一个的下一个
		//可以求出共删除了多少个
		cout << "一共删除了：" << distance(end, ilist.end()) << "个" << endl;

		//真正的删除
		ilist.erase(end, ilist.end()); //将remove返回的迭代器与原迭代器之间的数全部删除，就实现了真正的删除

		//整合remove和erase实现真正的删除
		ilist.erase(remove(ilist.begin(), ilist.end(), 3), ilist.end());
		
		//整合 remove_if 和 erase 实现从其中真正的删除 小于4的数
		ilist.erase(remove_if(ilist.begin(), ilist.end(), bind2nd(less<int>(), 4)), ilist.end());

- 注意：
	- 并不是真正的删除，而是把后面的元素向前移动，覆盖被删除元素
	- 返回新的逻辑终点

- remove_copy()   把原区间中所有的数据复制到目标区间，在复制过程中，逻辑删除某些值
- remove_copy_if()

		multiset<int> iset;
		//将ilist的值都复制到iset中，在复制过程中，删除小于3的所有值
		remove_copy_if(ilist.begin(), ilist.end(), inserter(iset, iset.end()), bind2nd(less<int>(), 3));

		//把ilist中的数据复制到 cout流中，并删除其中的3
		remove_copy(ilist.begin(), ilist.end(), ostream_iterator<int>(cout, " "), 3);

		//删除其中大于4的
		remove_copy_if(ilist.begin(), ilist.end(), ostream_iterator<int>(cout, " "), bind2nd(greater<int>(), 4));


- unique是删除连续的重复的数据，例如：12234445  使用unique之后就是  12345
- 返回类型为迭代器，指向最后一个可用数据的下一个 
- unique(b,e)      
- unique(b,e,p)
- unique_copy(b1,e1,b2)
- unique_copy(b1,e1,b2,p)

		//使用unique删除重复的,pos指向可用的最后一个数据的下一个
		list<int>::iterator pos;
		pos = unique(ilist.begin(), ilist.end());
		//利用谓词来删除,删除比前一个可用数据小的数据
		//例：删除前：1 4 4 6 1 2 2 3 1 6 6 6 5 7 5 4 4
		//    删除后：1 4 4 6 6 6 6 7
		pos = unique(ilist.begin(), ilist.end(), greater<int>());
		
		//使用unique_copy将一个容器中的数据复制到另一个容器中，在复制过程中将一些连续的重复的删除
		unique_copy(ilist.begin(), ilist.end(), iset.begin());
		unique_copy(ilist.begin(), ilist.end(), ostream_iterator<int>(cout," "));
		//使用谓词来约束
		unique_copy(ilist.begin(), ilist.end(), iset.begin(), greater<int>());

- 注意：
	- 应该有一个unique_if(),但是没有
	- 应该有一个unique_copy_if(),但是没有

## STL算法- 逆转和旋转 （变序性算法）##

- reverse()
- reverse_copy()
- rotate()
- rotate_copy()

		//使用reverse逆转，就是逆序
		reverse(ivec.begin(), ivec.end());

		//使用 reverse_copy 一边逆转，一边copy
		reverse_copy(ivec.begin(), ivec.end(), ostream_iterator<int>(cout, " "));

		//使用rotate 旋转,把ivec.end()指向的元素放到最开始，把其前面的数据旋转到最后
		//如下行代码：原数据：1 2 3 4 5 6 7 8 9
		//			  旋转后：9 1 2 3 4 5 6 7 8
		rotate(ivec.begin(), ivec.end()-1,ivec.end());

		//旋转复制
		set<int>::iterator pos = iset.begin();
		//pos = pos + 4;// 一般的容器可以这样做，但是Set不可以
		advance(pos, 1); //使set的迭代器向前移动一位
		//使用rotate_copy转转复制
		//	         原来的头     新的头   结尾
		rotate_copy(iset.begin(), pos, iset.end(), ostream_iterator<int>(cout, " "));

		//结合find和rotate
		rotate_copy(iset.begin(), iset.find(4), iset.end(), ostream_iterator<int>(cout, " "));

## STL 算法- 排列组合 ##

- next_permutation()   如果数据从小到大排序了，就使用这个
- prev_permutation()   如果数据从大到小排序了，就使用这个
- 在使用排列组合算法之前，必须对数据进行排序

		//使用next_permutation()叫（下一个排列组合） 
		next_permutation(ivec.begin(), ivec.end());  //返回值为true，则证明下还有排列组合，如果返回值为false，则证明无下一个排列组合

	
		//使用while显示所有的排列组合
		while (next_permutation(ivec.begin(),ivec.end()))
		{
			for (vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); ++iter)
				cout << *iter << " ";
			cout << endl;
		}

		//使用prev_permutation进行从大到小的排序
		//返回值同上
		//使用while来显示所有的排列组合
		while (prev_permutation(ivec2.begin(),ivec2.end()))
		{
			for (vector<int>::iterator iter = ivec2.begin(); iter != ivec2.end(); ++iter)
				cout << *iter << " ";
			cout << endl;
		}

## STL 算法- 重排算法、分区算法 ##

- random_shuffle()   随机重排，把容器中的数据随机的打乱顺序
- partition()   分区算法，根据一定规则把容器中的数据分区，分区后各区域的数就和原数据不同了
- stable_partition()  稳定分区, 把符合规则的数据都往前放，分区后各分区的数依然是和原数据中的顺序相同

		//使用重排算法random_shuffle打乱顺序
		random_shuffle(ivec.begin(), ivec.end());

		//使用partition进行不稳定的分区,把符合规则的数据都往前放，分区后各区域的数就和原数据不同了
		//下行代码实现把偶数往前移动，把奇数往后移动
		//返回值为迭代器，pos，指向分区的中点数据
		partition(ivec2.begin(), ivec2.end(), not1(bind2nd(modulus<int>(), 2)));
		
		//使用stable_partition进行稳定的分区,分区后各分区的数依然是和原数据中的顺序相同
		stable_partition(ivec3.begin(), ivec3.end(), not1(bind2nd(modulus<int>(), 2)));

## STL算法- 对所有元素排序 ##

- sort(b,e)
- sort(b,e,p)
- stable_sort(b,e)
- stable_sort(b,e,p)

		//使用sort排序，默认为从小到大
		sort(ivec.begin(),ivec.end());
		//使用谓词来约束从大到小排序
		sort(ivec.begin(),ivec.end(),greater<int>());

		//stable_sort稳定排序 可以保证数据在原来序列中的位置顺序，但是sort不保证数据在原来数据中的位置顺序
		stable_sort(ivec.begin(),ivec.end(),p); //p为约束函数 

- 注意：  不适用于list容器，list有成员函数sort()

## STL算法- 局部排序 ##

- partial_sort(b,se,e)   把 b,e 区间中，只把完整排序后的 b 到 se 之间的数据进行排序
- partial_sort(b,se,e,p)

		//把最小的前五个进行排序（默认从小到大）
		partial_sort(ivec.begin(),ivec.begin()+5,ivec.end());
		//把最大的前五个进行排序（从大到小排序）
		partial_sort(ivec.begin(),ivec.begin()+5,ivec.end(),greater<int>());

- partial_sort_copy(sb,se,db,de)
- partial_sort_copy(sb,se,db,de,p)

		//把原始数据排序后复制到另一个容器中，目标容器有几个，就把排序后的几个复制到目的容器中
		partial_sort_copy(ivec.begin(),ivec.end(),ilist.begin(),ilist.end());
		//复制排序过程中使用谓词来约束
		partial_sort_copy(ivec.begin(),ivec.end(),ilist.begin(),ilist.ed(),greater<int>());

		//如果复制到的目的容器位置比原数据多，那么在显示的时候应该使用迭代器来接受复制进去的最后一个数的下一个
		//返回值为迭代器
		vector<int>::iterarot pos;
		pos=partial_sort_copy(ivec.begin(),ivec.end(),ilist.begin(),ilist.ed(),greater<int>());
		//显示复制后的目标容器中的数据
		partial_sort_copy(ivec.begin(),pos,ostream_iterator<int>(cout," "));

## STL算法- 根据第 n 个元素排序 ##

- nth_element(b,n,e)  区间 b,e  位置 n  
- nth_element(b,n,e,p)
		
		//找出排序后最小的4个
		nth_element(ivec.begin(),ivec.begin()+3,ivec.end());
		//找出最大的4个
		nth_element(ivec.begin(),ivec.begin()+3,ivec.end(),greater<int>());
- 对比：partition()算法
	- nth_element 排序结果只有n个
	- partition 分区排序，个数不限
		
## STL 算法 - Heap算法 ##

- 大根堆：每个节点上的值都要比其根节点小
- 小根堆：每个节点上的值都要比其根节点大
- 堆排序算法（heapsort）
- make_heap()
- push_heap()
- pop_heap()
- sort_heap()

		// 把向量中所有的数据按照堆的排列方式进行排列
		make_heap(ivec.begin(),ivec.end());

		//从堆中取走一个最大的数据,并没有删除，只是把最大的放在向量的最后一个位置上，把剩下的重新排列成一个堆
		pop_heap(ivec.begin(), ivec.end());
		ivec.pop_back(); //删除向量的最后一个元素，也就是上面取出的堆的最大值
	
		//要想向量堆中使用push_heap，必须先在向量的最后加入一个新的元素
		ivec.push_back(20);
		//然后在使用push_heap
		push_heap(ivec.begin(), ivec.end());

		//把向量中的堆排序变成普通的排序
		sort_heap(ivec.begin(), ivec.end());
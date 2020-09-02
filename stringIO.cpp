#include<string>
#include<iostream>
#include <iomanip>
using namespace std;

//int main()
//{
//	int n;
//	char c;
//	float m;
//	int total = 0, num;

	//cin >> n;
	//cin >> c;
	//cin >> m;
	//cout << n << endl;
	//cout << c << '\n';
	//cout << m << endl;
	//cout << n << ' ' << c << ' ' << m << endl;

	//cin >> n >> m >> c;
	//cout << n << ' ' << m << ' ' << c << endl; 

	
	// 输入n个数字求和
	/*cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		cout << "读入了"<<num << endl;
		total += num;
	}
	cout <<"数字和为"<< total << endl; */

	//输入未知个数字
	/*while (cin >> num)
	{
		total += num;
		cout << num << endl;
	}
	cout << total << endl; */

	//按格式输入两个坐标				(0,0),(1,1)

	//int x1, x2, y1, y2;
	//cin >> c >> x1 >> c >> y1 >> c >> c >> c >> x2 >> c >> y2 >> c;
	//cout << x1 << ' ' << y1 << endl << x2 << ' ' << y2 << endl; 

	//输入按要求格式数字 [5,1,2,3,4,5]
	/*cin >> c >> n;
	for (int i = 0; i < n; i++) {
		cin >> c >> num;
		cout << num << endl;
		total += num;
	}
	cin >> c;
	cout << total << endl;*/

	//输出不同进制		//hex 16进制  oct 8进制  dec10进制

	/*cout << hex << 10 << endl;
	cout << 10 << endl;
	cout << oct << 8 << endl;
	cout << std::setbase(16) << 10 << dec << 10 << endl;*/

	//浮点数精度		保留一共4位

	//cout << setprecision(4) << 11.111111111 << endl;

	//左右对齐

	//cout << setw(6) <<setfill('!')<< left << 10 << endl;
	//cout << setw(6) << right << 1000 << endl;


	//输出日期

//	cout << 2020 << '-' << setw(2) << setfill('0') << right<<3 << '-' \
//		<< std::setw(2) << std::setfill('0') << 1 << endl;
//
//	system("pause");
//
//}

//string的cin读入 以空格回车为分隔（不读入空格）
//int main() {
//	string str1, str2, str3;
//	cin >> str1 >> str2 >> str3;
//	cout << str1 << "----" << str2 << "----" << str3 << endl;
//	system("pause");
//}

//getline两个参数

//int main() {
//	string str1, str2, str3;
//	getline(cin, str1);
//	getline(cin, str2);
//	getline(cin, str3);
//	cout << str1 << "----" << str2 << "----" << str3 << endl;
//	system("pause");
//}

//getline三个参数 原本换行符\n 不再作为停止符

//int main() {
//	string str1, str2, str3;		//area="nanjing,shanghai" name="wang,zhang" age="sdf1sf"
//	getline(cin, str1,'=');				
//	getline(cin, str2,',');
//	getline(cin, str3,'"');
//	char c = getchar();
//	cout << str1 << "----" << str2 << "----" << str3 << endl;
//	system("pause");
//}


//结尾换行符的注意点
//int main() {
//	string str1, str2, str3,str4;	//class begin"now"
//	getline(cin, str1, ' ');
//	getline(cin, str2, '"');
//	getline(cin, str3, '"');
//	char c = getchar();
//	cout << str1 << "----" << str2 << "----" << str3 << endl;
//	cout << c << endl;
//	system("pause");
//}


//取string中char
//int main() {
//	string str = "012345678";
//	cout << str[2] << endl;
//	char c = str[5];
//	cout << c << endl;
//	cout << str.at(3) << endl;
//	system("pause");
//	return 0;
//}

//string的比较
//int main() {
//	string str1, str2, str3, str4;
//	getline(cin, str1);//wan
//	getline(cin, str2);//wan
//	getline(cin, str3);//van
//	getline(cin, str4);//xan
//	cout << str1.compare(str2) << endl;
//	cout << str1.compare(str3) << endl;
//	cout << str1.compare(str4) << endl;
//	system("pause");
//}

//find查找 substr
//int main() {
//	string str = "abcdabc";
//	cout << str.find("ab") << endl;			//0		从前向后第一次找到ab
//	cout << str.find("ab", 2) << endl;		//4		从下标2开始第一次找到ab
//	cout << str.rfind("ab") << endl;		//4		从后向前第一次找到ab
//	cout << str.rfind("ab", 2) << endl;		//0		从下标2开始从后向前第一次找到ab
//	cout << str.substr(2, 3);				//cda	从下标2开始取三个字符
//	system("pause");
//}

//repalce insert erase
//int main() {
//	string str = "this is a test string.";
//	string str2 = "n example";
//	string str3 = "sample phrase";
//	str.replace(9, 5, str2);				//第9个字符开始5个字符用str2代替
//	str.replace(19, 6, str3, 7, 6);			//第19个字符开始的6个字符用
//											//str的第7个字符开始的6个字符替代
//	str.replace(8, 10, "just a");			//第8个字符开始的10个字符用字符串参数替代
//	str.replace(8, 6, "a shorty", 7);		//第8个字符开始的6个字符用字符串参数的前7个字符替代
//	str.replace(22, 1, 3, '!');				//第22个字符开始的1个字符用3个感叹号替代
//	str.erase(2, 2);
//	str.insert(2, "is");
//	system("pause");
//	return 0;
//}



//string转换
int main() {
	string str = "2147.483647";
	cout << stoi(str) << endl;
	str = "2147483648";
	cout << stoll(str) << endl;
	str = "123.45";
	cout << stof(str) << endl;
	cout << stod(str) << endl;
	system("pause");
}
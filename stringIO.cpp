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

	
	// ����n���������
	/*cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		cout << "������"<<num << endl;
		total += num;
	}
	cout <<"���ֺ�Ϊ"<< total << endl; */

	//����δ֪������
	/*while (cin >> num)
	{
		total += num;
		cout << num << endl;
	}
	cout << total << endl; */

	//����ʽ������������				(0,0),(1,1)

	//int x1, x2, y1, y2;
	//cin >> c >> x1 >> c >> y1 >> c >> c >> c >> x2 >> c >> y2 >> c;
	//cout << x1 << ' ' << y1 << endl << x2 << ' ' << y2 << endl; 

	//���밴Ҫ���ʽ���� [5,1,2,3,4,5]
	/*cin >> c >> n;
	for (int i = 0; i < n; i++) {
		cin >> c >> num;
		cout << num << endl;
		total += num;
	}
	cin >> c;
	cout << total << endl;*/

	//�����ͬ����		//hex 16����  oct 8����  dec10����

	/*cout << hex << 10 << endl;
	cout << 10 << endl;
	cout << oct << 8 << endl;
	cout << std::setbase(16) << 10 << dec << 10 << endl;*/

	//����������		����һ��4λ

	//cout << setprecision(4) << 11.111111111 << endl;

	//���Ҷ���

	//cout << setw(6) <<setfill('!')<< left << 10 << endl;
	//cout << setw(6) << right << 1000 << endl;


	//�������

//	cout << 2020 << '-' << setw(2) << setfill('0') << right<<3 << '-' \
//		<< std::setw(2) << std::setfill('0') << 1 << endl;
//
//	system("pause");
//
//}

//string��cin���� �Կո�س�Ϊ�ָ���������ո�
//int main() {
//	string str1, str2, str3;
//	cin >> str1 >> str2 >> str3;
//	cout << str1 << "----" << str2 << "----" << str3 << endl;
//	system("pause");
//}

//getline��������

//int main() {
//	string str1, str2, str3;
//	getline(cin, str1);
//	getline(cin, str2);
//	getline(cin, str3);
//	cout << str1 << "----" << str2 << "----" << str3 << endl;
//	system("pause");
//}

//getline�������� ԭ�����з�\n ������Ϊֹͣ��

//int main() {
//	string str1, str2, str3;		//area="nanjing,shanghai" name="wang,zhang" age="sdf1sf"
//	getline(cin, str1,'=');				
//	getline(cin, str2,',');
//	getline(cin, str3,'"');
//	char c = getchar();
//	cout << str1 << "----" << str2 << "----" << str3 << endl;
//	system("pause");
//}


//��β���з���ע���
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


//ȡstring��char
//int main() {
//	string str = "012345678";
//	cout << str[2] << endl;
//	char c = str[5];
//	cout << c << endl;
//	cout << str.at(3) << endl;
//	system("pause");
//	return 0;
//}

//string�ıȽ�
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

//find���� substr
//int main() {
//	string str = "abcdabc";
//	cout << str.find("ab") << endl;			//0		��ǰ����һ���ҵ�ab
//	cout << str.find("ab", 2) << endl;		//4		���±�2��ʼ��һ���ҵ�ab
//	cout << str.rfind("ab") << endl;		//4		�Ӻ���ǰ��һ���ҵ�ab
//	cout << str.rfind("ab", 2) << endl;		//0		���±�2��ʼ�Ӻ���ǰ��һ���ҵ�ab
//	cout << str.substr(2, 3);				//cda	���±�2��ʼȡ�����ַ�
//	system("pause");
//}

//repalce insert erase
//int main() {
//	string str = "this is a test string.";
//	string str2 = "n example";
//	string str3 = "sample phrase";
//	str.replace(9, 5, str2);				//��9���ַ���ʼ5���ַ���str2����
//	str.replace(19, 6, str3, 7, 6);			//��19���ַ���ʼ��6���ַ���
//											//str�ĵ�7���ַ���ʼ��6���ַ����
//	str.replace(8, 10, "just a");			//��8���ַ���ʼ��10���ַ����ַ����������
//	str.replace(8, 6, "a shorty", 7);		//��8���ַ���ʼ��6���ַ����ַ���������ǰ7���ַ����
//	str.replace(22, 1, 3, '!');				//��22���ַ���ʼ��1���ַ���3����̾�����
//	str.erase(2, 2);
//	str.insert(2, "is");
//	system("pause");
//	return 0;
//}



//stringת��
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
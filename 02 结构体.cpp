//#include<iostream>
//#include<string>
//
//using namespace std;
//
////1、创建学生类型
////定义结构体时的struct关键字不能省略
//struct Student
//{
//	//成员列表
//	string name;
//	int age;
//	int score;
//}s3;		//第三种方法
//
////2、通过学生类型创建具体学生
//int main()
//{
//	//2.1	struct Student s1
//	Student s1;		//创建结构体时的struct关键字可以省略
//	s1.name = "张三";
//	s1.age = 23;
//	s1.score = 6;
//
//	cout<<"姓名："<<s1.name<<endl;
//	cout<<"年龄："<<s1.age<<endl;
//	cout<<"成绩："<<s1.score<<endl;
//	cout<<endl;
//
//	//2.2	struct Student s2= {...}
//	struct Student s2 = {"李四",22,7};
//	cout<<"姓名："<<s2.name<<endl;
//	cout<<"年龄："<<s2.age<<endl;
//	cout<<"成绩："<<s2.score<<endl;
//	cout<<endl;
//
//	//2.3	在定义结构体时顺便创建结构变量
//	//不建议用
//	s3.name = "王五";
//	s3.age = 23;
//	s3.score = 8;
//	cout<<"姓名："<<s3.name<<endl;
//	cout<<"年龄："<<s3.age<<endl;
//	cout<<"成绩："<<s3.score<<endl;
//	cout<<endl;
//
//	system("pause");
//	return 0;
//}
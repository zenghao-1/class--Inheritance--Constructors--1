#include <iostream>
#include <string>
using namespace std;

//函数声明部分

int choose();

string setStudentName();//输入学生姓名，返回字符串

string setStudentNnmber();//输入学生学号，返回字符串

int To_Select_the_result(string YesOrNo);//判断输入的回答YesOrNo，返回int值，决定继续还是结束程序

int Result_output();//输入学生基本信息：学生姓名，学号

//class Student类主体部分

class Student
{
public:
	Student() { cout << "Student ID"; }
	Student(string name,string student_number);

	string setName() { return Name; }

	string setStudentNumber() { return Student_number; }

	void getGrades(float grades);
	float setGrades();

private:
	string Name;
	string Student_number;
	float Grades;

	string StudentName[5];
	string StudentNumber[5];
};

//class Math 类学科主体部分

class Math :public Student
{
   
};

//

enum YesOrNo
{
	YES = 1,
    No = 0,
	another=3
};


//int main主函数体

int main()
{
	int a = 1;
	while(a == 1)
	{
		int i=Result_output();
		if (i == 1)
		{
			continue;
		}
		else
		{
			break;
		}
	}


     
}

//main 函数设置

int choose()
{
	string YesOrNo;
	cout << "是否输入学生信息 :" ;
	cin >> YesOrNo;

	int Select_the_result = To_Select_the_result(YesOrNo);
	return Select_the_result;
}

string setStudentName()
{
	string Name;
	cout << "输入学生姓名:";
	cin >> Name;
	return Name;
}

string setStudentNnmber()
{
	string Number;
	cout << "输入学生学号:";
	cin >> Number;
	return Number;
}

int To_Select_the_result(string YesOrNo)
{
	if (YesOrNo == "yes" || YesOrNo == "YES"|| YesOrNo == "Yes" )
	{
		return 1;
	}
	else if(YesOrNo== "No" || YesOrNo == "NO" || YesOrNo == "no")
	{
		return 0;
	}
	else
	{
		return 2;
	}
}

int Result_output()
{
	{
		string Name;
		string Number;

		int Select_the_result = choose();

		if (Select_the_result == 0)
		{
			cout << "你退出了系统。";
			return Select_the_result;
		}
		else if (Select_the_result == 1)
		{
			Name=setStudentName();
			Number = setStudentNnmber();
			cout << "----------------------------" << endl;
			Student student(Name, Number);
			cout << "----------------------------" << endl;
			return Select_the_result;
		}
		else
		{
			cout << "输入了无效回答！请重新输入！" << endl;
			Result_output();

			return Select_the_result;
		}
	}
}

//class 函数设置

Student::Student(string name, string studen_number)
	:Name(name),Student_number(studen_number)
{
	cout << "Student Name:" << setName() << endl;
	cout << "Student Number:" << setStudentNumber() << endl;

}

void Student::getGrades(float grades)
{
	Grades = grades;
}

float Student::setGrades()
{
	return Grades;
}





 
#include <iostream>
#include <string>
using namespace std;

//������������

int choose();

string setStudentName();//����ѧ�������������ַ���

string setStudentNnmber();//����ѧ��ѧ�ţ������ַ���

int To_Select_the_result(string YesOrNo);//�ж�����Ļش�YesOrNo������intֵ�������������ǽ�������

int Result_output();//����ѧ��������Ϣ��ѧ��������ѧ��

//class Student�����岿��

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

//class Math ��ѧ�����岿��

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


//int main��������

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

//main ��������

int choose()
{
	string YesOrNo;
	cout << "�Ƿ�����ѧ����Ϣ :" ;
	cin >> YesOrNo;

	int Select_the_result = To_Select_the_result(YesOrNo);
	return Select_the_result;
}

string setStudentName()
{
	string Name;
	cout << "����ѧ������:";
	cin >> Name;
	return Name;
}

string setStudentNnmber()
{
	string Number;
	cout << "����ѧ��ѧ��:";
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
			cout << "���˳���ϵͳ��";
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
			cout << "��������Ч�ش����������룡" << endl;
			Result_output();

			return Select_the_result;
		}
	}
}

//class ��������

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





 
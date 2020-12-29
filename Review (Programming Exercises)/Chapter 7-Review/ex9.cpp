// ex9.cpp -- finish the functions according to the instructions
#include <iostream>
using namespace std;
const int SLEN=30;
struct student{
 char fullname[SLEN];
 char hobby[SLEN];
 int ooplevel;
};
int getinfo(student pa[],int n);
void display1(student st);
void display2(const student* ps);
void display3(const student pa[],int n);

int getinfo(student pa[],int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        cout << "Enter the student's fullname: ";
        cin.getline(pa[i].fullname, SLEN);
        if(pa[i].fullname != "")   // ※ how to judge the blank line ?
        {
            cout << "\nEnter the student's hobby: ";
            cin >> pa[i].hobby;
            cout << "\nEnter the student's ooplevel: ";
            cin >> pa[i].ooplevel;
            cin.get();
        }
        else
        {
            break;
        }
    }
    return i;
}                       
// getinfo() has two arguments:a pointer to the first element of
// an array of student sturctures and an int representing the 
// number of elements of the array.The function solicits and
// stores data about students.It terminates input upon filling
// the array or upon encountering a blank line for the student
// name.The function returns the actual number of array elements
// filled.

// getinfo()有两个参数：
// 一个指针指向student结构数组的第一个元素，一个int类型表示数组的元素数;
// 该函数请求并存储关于students的数据；
// 当数组填满或遇到学生姓名为空行时，输入终止；
// 该函数最终返回数组元素的实际填充个数。

void display1(student st)
{
    cout << "\nThe student's fullname: " << st.fullname << endl;
    cout << "The student's hobby: " << st.hobby << endl;
    cout << "The student's ooplevel: " << st.ooplevel << endl;
                                           // display1() takes a student structures as an argument
}                                          // and displays its contents
// display1()函数将student结构作为参数并展示它的内容

void display2(const student* ps)
{
    cout << "The student's fullname: " << ps->fullname << endl;
    cout << "The student's hobby: " << ps->hobby << endl;
    cout << "The student's ooplevel: " << ps->ooplevel << endl;
}                                           // display2() takes the address of students structure as an
                                          // argument and displays the sturture's contents
// display2()函数将student结构的地址作为参数并展示结构的内容

void display3(const student pa[],int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << "The student's fullname: " << pa[i].fullname << endl;
        cout << "The student's hobby: " << pa[i].hobby << endl;
        cout << "The student's ooplevel: " << pa[i].ooplevel << endl;
    }
}
// display3() takes the address of the first element of an array
// of student structures and the numbers of array elements as
// arguments and displays the contents of the structures
// display3()将student结构数组的第一个元素的地址和数组元素个数作为参数
// 并展示结构的内容

int main()
{
    cout<<"Enter class size: ";
    int class_size;
    cin>>class_size;
    while (cin.get()!='\n')
        continue;
    
    student *ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu,class_size);
    for (int i = 0;i < entered; i++)
    {
        display1(ptr_stu[i]);
        cout<<endl;//for distinct can delete
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu,entered);
    delete [] ptr_stu;
    cout <<"Done\n";
    return 0;//dd
}
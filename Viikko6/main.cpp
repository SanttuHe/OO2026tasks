#include <iostream>
#include <vector>
#include "student.h"
#include <algorithm>
using namespace std;


int main ()
{
    int selection =0;
    vector<Student>studentList;

    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        switch(selection)
        {
        case 0:

            {
                string N;
                int A;

                cout << "Anna minulle opiskelijan nimi" << endl;
                cin >> N;
                cout << "Anna minulle ika " << endl;
                cin >> A;

                studentList.emplace_back(N, A);

            }

            break;
        case 1:

            for(Student & s : studentList)
            {
                s.printStudentInfo();
            }
            break;

        case 2:

            sort(studentList.begin(), studentList.end(),[](Student & a, Student & b){
               return a.getName()<b.getName();

            });
            for(Student & s : studentList)
            {
                s.printStudentInfo();
            }

            break;

        case 3:
            sort(studentList.begin(), studentList.end(),[](Student & a, Student & b){
                return a.getAge()<b.getAge();

            });
            for(Student & s : studentList)
            {
                s.printStudentInfo();
            }


            break;
        case 4:
        {
            string searchName;
            cout << "Anna haettavan opiskelijan nimi: ";
            cin >> searchName;

            auto it = find_if(studentList.begin(), studentList.end(),
            [searchName](Student& s){
             return s.getName() == searchName;
            });

            if (it != studentList.end())
                it->printStudentInfo();
            else
                cout << "Opiskelijaa ei loytynyt\n";
        }
        break;
    default:
        cout<< "Wrong selection, stopping..."<<endl;
        break;
    }
}while(selection < 5);

return 0;
}

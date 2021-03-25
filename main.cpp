#include <iostream>
#include<conio.h>
#include<fstream>
#include<iomanip>
#include<cstring>
#include<windows.h>

void menu();
void passcode();
void cpasscode();

using namespace std;

class One
{
public:
    virtual void get()=0;
    virtual void show()=0;
};

class info : public One
{
public:
    string name,num, time;
    //char name [50], time[50];
    int age;
    void get()
    {
        system("cls");
        cin.ignore(1); // ignore the first white space
        cout << "\nEnter the appointment number: ";
        getline(cin,num);
        cout << "\nEnter the appointment time (hh:mm am/pm): ";
        //cin.getline (time, 50);
        getline (cin, time);
        cout << "\nEnter the patient's name: ";
        //cin.getline (name, 50);
        getline (cin, name);
        cout << "\nEnter the patient's age: ";
        cin >> age;
    }
    void show()
    {
        cout << "\nNo.: " << num;
        cout << "\nTime: " << time;
        cout << "\nName: " << name;
        cout << "\nAge: " << age;
    }
};

class marsiya : public info
{
    public:
    info PatientInfo;
    void get()
    {
        system("cls");
        ofstream out ("marsiya.txt", ios :: app);
        PatientInfo.get ();
        //out.write ((char*)& PatientInfo, sizeof (PatientInfo));
        out << "\n\tNo: " << PatientInfo.num << "\n\tTime: " << PatientInfo.time << "\n\tName: " << PatientInfo.name << "\n\tAge: " << PatientInfo.age\
         <<"\n-----------------------------------------------------------------------------------------------\n";
        out.close ();
        cout << "\nYour Entry Has Been Saved.";
        getch();
        menu ();
    }
    void show()
    {
        string tp;
        ifstream in ("marsiya.txt");
        if (!in)
        {
            cout << "No data in the file.";
            cout << "\nPress Any Key To Continue: ";
            getch ();
            menu ();
        }
        else
        {
            while (!in.eof()) // if there is more data to be read
        {
            //in.read((char*)&PatientInfo, sizeof (PatientInfo));
            //PatientInfo.show();
            getline(in, tp);
            cout << tp << "\n";

        }
        in.close();
        cout << "Press Enter to continue: ";
        getch ();
        menu ();
        }
    }
};

class issah: public info
{
    public:
    info PatientInfo;
    void get()
    {
        system("cls");
        ofstream out ("issah.txt", ios :: app);
        PatientInfo.get ();
        //out.write ((char*)& PatientInfo, sizeof (PatientInfo));
        out << "\n\tNo: " << PatientInfo.num << "\n\tTime: " << PatientInfo.time << "\n\tName: " << PatientInfo.name << "\n\tAge: " << PatientInfo.age\
        <<"\n-----------------------------------------------------------------------------------------------\n";
        out.close ();
        cout << "\nYour Entry Has Been Saved.";
        getch();
        menu ();
    }
    void show()
    {
        string tp;
        ifstream in ("issah.txt");
        if (!in)
        {
            cout << "No data in the file.";
            cout << "\nPress Any Key To Continue: ";
            getch ();
            menu ();
        }
        else
        while (!in.eof())
        {
            getline(in, tp);
            cout << tp << "\n";
        }
        in.close();
        cout << "Press Enter to continue: ";
        getch ();
        menu ();
    }
};

class dan : public info
{
    public:
    info PatientInfo;
    void get()
    {
        system("cls");
        ofstream out ("dan.txt", ios :: app);
        PatientInfo.get ();
        //out.write ((char*)& PatientInfo, sizeof (PatientInfo));
        out << "\n\tNo: " << PatientInfo.num << "\n\tTime: " << PatientInfo.time << "\n\tName: " << PatientInfo.name << "\n\tAge: " << PatientInfo.age\
        <<"\n-----------------------------------------------------------------------------------------------\n";
        out.close ();
        cout << "\nYour Entry Has Been Saved.";
        getch();
        menu ();
    }
    void show()
    {
        string tp;
        ifstream in ("dan.txt");
        if (!in)
        {
            cout << "No data in the file.";
            cout << "\nPress Any Key To Continue: ";
            getch ();
            menu ();
        }
        else
        {
            while (!in.eof())
        {
            getline(in, tp);
            cout << tp << "\n";
        }
        in.close();
        cout << "Press Enter to continue: ";
        getch ();
        menu ();
        }
    }
};
class staff : public One
{
public:
    char all [999];
    char name [50],age [20], sal [30], pos [20];

    void get()
    {
        ofstream out ("staff.txt", ios::app);
        {
            system("cls");
            cin.sync();
            cout << "\nEnter Name: ";
            cin.getline (name, 50);
            cout << "\nEnter Age: ";
            cin.getline (age, 20);
            cout << "\nEnter salary: ";
            cin.getline (sal, 30);
            cout << "\nEnter Your Position: ";
            cin.getline (pos, 20);
        }
        out << "\nName: " << name << "\nAge: " << age << "\nSalary: " << sal << "\nPosition\n: " << pos;
        out.close();
        cout << "\nYour Information Has Been Saved.\n\n\t\t\tPress Any Key To Continue: ";
        getch();
        menu ();
    }
    void show ()
    {
        ifstream in ("staff.txt");
        if (!in)
        {
            cout << "File Open Error!";
        }
        while (!in.eof())
        {
            in.getline(all,999);
            cout << all << endl;
        }
        in.close();
        cout <<  "\n\n\t\tPress Any Key To Continue: ";
        getch();
        menu ();
    }
};
class information
{
public:
    void drInfo()
    {
      system ("cls");
      system ("color F3");
      cout << "\n===============================================================================================================";
      cout << "\n\t\t(Three Doctors Available)\n\n\t(Kindly Find Information And Time Available Below)\n";
      cout << "--------------------------------------------------------------------------------------------------------------\n";
      cout << "\t\tDr. Available\n";
      cout << "\tDr. Marsiya, Gyanaecologist\n\n";
      cout << "\tMonday To Friday\t\t 9AM To 5PM\n";
      cout << "\tSaturday        \t\t 9AM To 1PM\n";
      cout << "\tSunday          \t\t OFF\n";
      cout << "\n------------------------------------------------------------------------------------------------------------\n";
      cout << "\tDr. Issah, Paediatrician\n\n";
      cout << "\tMonday To Friday\t\t 2PM To 10PM\n";
      cout << "\tSaturday        \t\t 8AM To 1PM\n";
      cout << "\tSunday          \t\t OFF\n";
      cout << "\n------------------------------------------------------------------------------------------------------------\n";
      cout << "\tDr. Dan, Pharmacist\n\n";
      cout << "\tMonday To Friday\t\t 8AM To 5PM\n";
      cout << "\tSaturday        \t\t 8AM To 1PM\n";
      cout << "\tSunday          \t\t OFF\n";
      cout << "\n------------------------------------------------------------------------------------------------------------\n";
      cout << "\nPress Any Key To Continue\n";
      getch();
      menu();
    };
    void callDr ()
    {
        system("cls");
        int choice;
        cout << "\n\n\nPress 1 for Dr.Marsiya\n\n\tPress 2 for Dr. Issah\n\n\t\t press 3 for Dr. Dan\n";
        cout << "\nAnswer: ";
        cin >> choice;

        One *ptr;
        marsiya gy;
        issah pae;
        dan pha;
        if (choice == 1)
        {
            ptr = &gy;
            ptr->get();
        }
        if (choice == 2)
        {
            ptr = &pae;
            ptr->get();
        }
        if (choice == 3)
        {
            ptr = &pha;
            ptr->get();
        }
        else
        {
        cout << "Invalid Choice";
         getch();
         menu();
        }
    };
    void pinfo()
    {
        system("cls");
        int p;
        marsiya m;
        issah i;
        dan d;

        cout << "\n\n\nPress 1 for Dr.Marsiya\n\n\tPress 2 for Dr. Issah\n\n\t\t press 3 for Dr. Dan\n";
        cout << "\nAnswer: ";
        cin >> p;
        cout << "\n\t\t*****PATIENTS APPOINTMENT****\n";
        if(p== 1)
        {
           m.show();
        }
        else if (p==2)
        {
            i.show();
        }
        else if (p== 3)
        {
            d.show();
        }
        else
        {
            cout << "Select 1, 2 or 3";
        }
        getch();
        menu();
    }
};
void menu ()
{
    system ("cls");
    system ("color FC");

    cout << "\n\n";

    cout << "\t\t\t     | ******** MAIN MENU ********  | \n";
    cout << "\t\t\t     |    THE NEWLIFE HOSPITAL |\n";
    cout << "\t\t\t     |==============================|\n";
    cout << "\n-------------------------------------------------------------------------------------------------------------\n";
    cout << "\t\t      Please Select Any option               \n";

    cout << "\n-1-\t\tPress 1 To Check Doctor's Information\n";
    cout << "\n-2-\t\tPress 2 For Doctor Appointment\n";
    cout << "\n-3-\t\tPress 3 To Create New Staff\n";
    cout << "\n-4-\t\tPress 4 To Check Patient's Appointment\n";
    cout << "\n-5-\t\tPress 5 To Check Staff Information\n";
    cout << "\n-6-\t\tPress 6 To Create or Change Password\n";
    cout << "\n-7-\t\t[Press 7 To Logout]\n\n";

    cout << "\n==============================================================================================================\n";
    cout << "\n\n\t\tPlease Enter your Choice: ";

    information a1;
    One *ptr;
    staff a2;
    int a;

    cin >> a;
    if (a == 1)
    {
        a1.drInfo ();
    }
    else if (a == 2)
    {
        a1.callDr();
    }
    else if (a == 3)
    {
        ptr = &a2;
        ptr -> get();
    }
    else if (a == 4)
    {
        a1.pinfo();
    }
    else if (a == 5)
    {
        ptr =& a2;
        ptr -> show();
    }
    else if (a == 6)
    {
        cpasscode();
    }
    else if (a == 7)
    {
        passcode ();
    }
    else
    {
        cout << "Sorry Invalid Choice.";
    }
};

void passcode()
{
    system ("cls");
    char p1[50], p2[50], p3[50];

    system ("color Fc");

    ifstream in ("password.txt");
    {
        cin.sync();

        cout << "\n\n\n\n\n\n\n\n\t\tEnter Your Password: ";
        cin.getline (p1 , 50);
        in.getline (p2, 50);
        if (strcmp (p2,p1)==0)
        {
           menu();
        }
        else
        {
            cout << "\n\n\t\tIncorrect password Please Try Again";
            Sleep (999);
            passcode();
        }
        in.close();
    }
}


void cpasscode ()
{
    char n[50];
    system ("cls");
    ofstream out ("password.txt");
    {
        cin.sync();
        cout << "\n\n\n\n\t\tEnter The New Password: ";
        cin.getline (n, 50);
        out << n;
    }
    out.close();
    cout << "\n\nYour Password Has Been Saved: ";
    getch ();
    menu ();
}

int main()
{
    passcode ();
    system ("pause");

return 0;
}







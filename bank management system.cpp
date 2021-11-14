#include<iostream>
#include<conio.h>
#include<windows.h>
#include<stdio.h>
#include<stdlib.h>
#include<cstdlib>
#include<fstream>
using namespace std;
class bank
{
private:
    float balance;
    string id,password,name,fname,address,phone,pin;
public:
    void menu();
    void bank_management();
    void atm_management();

    //this is all bank management function
    void new_user();
    void alrady_User();
    void deposit();
    void withdraw();
    void transfer();
    void payment();
    void search_record();
    void edit_record();
    void delete_record();
    void show_records();
    void show_payment();

    //this is all ATM management function
    void user_balance();
    void withdraw_atm();
    void check_details();

};
void intoduction()
{
    cout<<"\n\n\n\n\n\t\t\t";
    for(int i=1;i<=60;i++)
    {
        cout<<"*";
    }
    cout<<"\n\t\t\t ";
    for(int i=1;i<=58;i++)
    {
        cout<<"*";
    }
    cout<<"\n\t\t\t  ";
    for(int i=1;i<=56;i++)
    {
        cout<<"*";
    }
    cout<<"\n\n\t\t\t\t\t Bank & ATM Management System\n\n\t\t\t\t\t\t Project In C++\n\n\t\t\t   ";
    for(int i=1;i<=56;i++)
    {
        cout<<"*";
    }
    cout<<"\n\t\t\t  ";
       for(int i=1;i<=58;i++)
    {
        cout<<"*";
    }
    cout<<"\n\t\t\t ";
    for(int i=1;i<=60;i++)
    {
        cout<<"*";
    }
    getch();
    system("cls");
    cout<<"\n\n\t";
    for(int i=1;i<=60;i++)
    {
        cout<<"*";
    }
    cout<<"\n\t";
    for(int i=1;i<=60;i++)
    {
        cout<<"*";
    }
    cout<<"\n\n\t\t\tSoftware Developer IntroDuction";
    cout<<"\n\n\t Name:\n\t\t\t\t\tSachin Chowdhury";
    cout<<"\n\t Degree:\n\t\t\t\t\tBtech CSE";
    cout<<"\n\t University Roll:\n\t\t\t\t\t12000119065";
    cout<<"\n\t College:\n\t\t\t\t\tDr B C Roy Engineering College";
    cout<<"\n\t Contact Number:\n\t\t\t\t\t6296991633\n\n\t";
    for(int i=1;i<=60;i++)
    {
        cout<<"*";
    }
    cout<<"\n\t";
    for(int i=1;i<=60;i++)
    {
        cout<<"*";
    }
    getch();

}
void bank::menu()
{
    p:
    system("cls");
    int choice,i;
    char ch;
    string pin,password,email;
    cout<<"\n\n\t\t\t\t=======================================";
    cout<<"\n\n\t\t\t\t\t   Control Panel";
    cout<<"\n\n\t\t\t\t=======================================";
    cout<<"\n\n 1.Bank Management System";
    cout<<"\n 2.ATM Management System";
    cout<<"\n 3.Exit";
    cout<<"\n Enter your choice : ";
    cin>>choice;
    switch(choice)
    {
        case 1:
            system("cls");
            cout<<"\n\n\t\t\t\t Login Account ";
            cout<<"\n\n E-mail : ";
            cin>>email;
            cout<<"\n\n Pin Code : ";
            for(i=1;i<=6;i++)
            {
                ch = getch();
                pin +=ch;
                cout<<"*";
            }
            cout<<"\n\nPassword : ";
            for(i=1;i<=6;i++)
            {
                ch = getch();
                password +=ch;
                cout<<"*";
            }
            if(email=="chowdhurysachin4@gmail.com" && pin=="721514" && password=="sachin")
            {
                bank_management();
            }
            else
            {
                cout<<"\n\nYour E-mail,pin & password is wrong.....";
            }
            break;
        case 2:
            atm_management();
            break;
        case 3:
             exit(0);
        default:
            cout<<"\n\nYou Choose Invalude Value.....";
    }
    getch();
    //here we use goto bulid in function because we want this process repeat again and again
    goto p;
}
void bank::bank_management()
{
     p:
    system("cls");
    int choice;
    cout<<"\n\n\n\t\t\t\t\t Bank Management ";
    cout<<"\n\n 1.New User ";
    cout<<"\n 2. Alrady User";
    cout<<"\n 3.Deposite Option";
    cout<<"\n 4.Withdraw Option";
    cout<<"\n 5.Transfer Option";
    cout<<"\n 6.Payment Option";
    cout<<"\n 7 Search User Record";
    cout<<"\n 8.Edit User Record";
    cout<<"\n 9.Delete User Record";
    cout<<"\n 10.Show All Record";
    cout<<"\n 11.Payment All Record";
    cout<<"\n 12.Go Back";
    cout<<"\n\n Enter Your Choice : ";
    cin>>choice;
    switch(choice)
    {
    case 1:
        new_user();
        break;
    case 2:
        alrady_User();
        break;
    case 3:
        deposit();
        break;
    case 4:
        withdraw();
        break;
    case 5:
        transfer();
        break;
    case 6:
        payment();
        break;
    case 7:
        search_record();
        break;
    case 8:
        edit_record();
        break;
    case 9:
        delete_record();
        break;
    case 10:
        show_records();
        break;
    case 11:
        show_payment();
        break;
    case 12:
        menu();
        break;
    default:
         cout<<"\n\nYou Choose Invalude Value.....";
    }
    getch();
    goto p;
}
void bank::atm_management()
{
    p:
    system("cls");
    int choice;
    cout<<"\n\n\n\t\t\t\t\t ATM Management ";
    cout<<"\n\n 1.User Login & Check Balanace ";
    cout<<"\n 2. Withdraw Ammount ";
    cout<<"\n 3.Account Details";
    cout<<"\n 4.Go Back";
    cout<<"\n\n Enter Your Choice";
    cin>>choice;
    switch(choice)
    {
    case 1:
        user_balance();
        break;
    case 2:
        withdraw_atm();
        break;
    case 3:
        check_details();
        break;
    case 4:
        menu();
        break;
    default:
         cout<<"\n\nYou Choose Invalude Value.....";
    }
    getch();
    goto p;
}
void bank::new_user()
{
    p:
    system("cls");
    fstream file;
    int p;
    float b;
    string n,f,pa,a,ph,i;
    cout<<"\n\n\n\t\t\t\tAdd New User ";
    cout<<"\n\nUser Id : ";
    cin>>id;
    cout<<"\n\nName : ";
    cin>>name;
    cout<<"\n\nFather Name : ";
    cin>>fname;
    cout<<"\n\nAddress : ";
    cin>>address;
    cout<<"\n\nPin Code (6 digit) : ";
    cin>>pin;
    cout<<"\n\nPassword (6 digit) : ";
    cin>>password;
    cout<<"\n\nPhone Number";
    cin>>phone;
    cout<<"\n\nCurrent Ballance : ";
    cin>>balance;
    file.open("bank.txt",ios::in);
    if(!file)
    {
        file.open("bank.txt",ios::out|ios::app);
        //send the data in file cout<<
        file<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<password<<" "<<phone<<" "<<balance<<endl;
        file.close();
    }
    else
    {
        //here we check the user id same or not.if user id same the we don't create account
        file>>i>>n>>f>>a>>p>>pa>>ph>>b;
        while(!file.eof())
        {
            if(i == id)
            {
                cout<<"\n\nUser ID Alrady Exist....";
                getch();
                goto p;
            }
            file>>i>>n>>f>>a>>p>>pa>>ph>>b;
        }
        file.close();
        file.open("bank.txt",ios::out|ios::app);
        file<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<password<<" "<<phone<<" "<<balance<<endl;
        file.close();
    }
    cout<<"\n\nNew User Account Create Successfully....";
}
void bank::alrady_User()
{
    system("cls");
    int flag=0;
    fstream file;
    string test_id;
    cout<<"\n\nAlrady User Account";
    file.open("bank.txt",ios::in);
    if(!file)
    {
        cout<<"\n\nFile Opening Error....";
    }
    else
    {
        cout<<"\n\n User id :";
        cin>>test_id;
         file>>id>>name>>fname>>address>>pin>>password>>phone>>balance;
         while(!file.eof())
         {
             if(test_id==id)
             {
                 system("cls");
                  cout<<"\n\nAlrady User Account";
                  cout<<"\n\n User ID : "<<id;
                  cout<<"\n Pin Code : "<<pin;
                  cout<<"\n\n Password : "<<password;
                  flag++;
             }
             file>>id>>name>>fname>>address>>pin>>password>>phone>>balance;
         }
         file.close();
         if(flag==0)
         {
             cout<<"User ID Can't Found...";
         }
    }


}
void bank::deposit()
{
    system("cls");
    fstream file,file1;
    string t_id;
    float dep;
    int flag=0;
    cout<<"\n\n\t\t\t\tDeposit Amount Option ";
    file.open("bank.txt",ios::in);
    if(!file)
    {
        cout<<"\n\nFile opening Error....";
    }
    else
    {
        cout<<"\n\n User ID : ";
        cin>>t_id;
        file1.open("bank1.txt",ios::out|ios::app);
        file>>id>>name>>fname>>address>>pin>>password>>phone>>balance;
        while(!file.eof())
        {
            if(t_id==id)
            {
               cout<<"\n\n Amount For Deposit : ";
               cin>>dep;
               balance+=dep;
               file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<password<<" "<<phone<<" "<<balance<<endl;
                flag++;
                cout<<"\n\n\t\t\tYour Amount "<<dep<<" Sucessfully Deposit....";
            }
            else
            {

                file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<password<<" "<<phone<<" "<<balance<<endl;
            }
            file>>id>>name>>fname>>address>>pin>>password>>phone>>balance;
        }
         file.close();
         file1.close();
         remove("bank.txt");
         rename("bank1.txt","bank.txt");
         if(flag==0)
         {
             cout<<"User ID Can't Found...";
         }
    }
}
void bank::withdraw()
{
    system("cls");
    fstream file,file1;
    string t_id;
    float withdep;
    int flag=0;
    cout<<"\n\n\t\t\t\tWithdraw Amount Option ";
    file.open("bank.txt",ios::in);
    if(!file)
    {
        cout<<"\n\nFile opening Error....";
    }
    else
    {
        cout<<"\n\n User ID : ";
        cin>>t_id;
        file1.open("bank1.txt",ios::out|ios::app);
        file>>id>>name>>fname>>address>>pin>>password>>phone>>balance;
        while(!file.eof())
        {
            if(t_id==id)
            {
               cout<<"\n\n Amount For Withdraw : ";
               cin>>withdep;
               if(withdep <= balance)
               {
                   balance-=withdep;
                   file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<password<<" "<<phone<<" "<<balance<<endl;
                    cout<<"\n\n\t\t\tYour Amount "<<withdep<<" Sucessfully Withdraw....";
               }
               else
               {
                   file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<password<<" "<<phone<<" "<<balance<<endl;
                   cout<<"\n\n\t\t\t\tYour Current Balance"<<balance<<" is less.....";
               }
                flag++;
            }
            else
            {

                file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<password<<" "<<phone<<" "<<balance<<endl;
            }

            file>>id>>name>>fname>>address>>pin>>password>>phone>>balance;
        }
         file.close();
         file1.close();
         remove("bank.txt");
         rename("bank1.txt","bank.txt");
         if(flag==0)
         {
             cout<<"User ID Can't Found...";
         }
    }
}
void bank::transfer()
{
    system("cls");
    fstream file,file1;
    string s_id,r_id;
    float amount;
    int flag=0;
    cout<<"\n\n\t\t\t\tPayment Transfer Option";
    file.open("bank.txt",ios::in);
    if(!file)
    {
        cout<<"\n\nFile opening Error....";
    }
    else
    {
        cout<<"\n\n Sender User Id For Transction : ";
        cin>>s_id;
        cout<<"\n\n Recever User ID For Transction : ";
        cin>>r_id;
        cout<<"\n\n Enter Transction Amount : ";
        cin>>amount;
        file>>id>>name>>fname>>address>>pin>>password>>phone>>balance;
        while(!file.eof())
        {
            if(s_id == id && amount <= balance)
            {
                flag++;
            }
            else if(r_id == id)
            {
                flag++;
            }
            file>>id>>name>>fname>>address>>pin>>password>>phone>>balance;
        }
        file.close();
        if(flag == 2)
        {
            file.open("bank.txt",ios::in);
            file1.open("bank1.txt",ios::out|ios::app);
            file>>id>>name>>fname>>address>>pin>>password>>phone>>balance;
            while(!file.eof())
            {
                if(s_id == id)
                {
                    balance -= amount;
                    file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<password<<" "<<phone<<" "<<balance<<endl;
                }
                else if(r_id == id)
                {
                    balance += amount;
                    file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<password<<" "<<phone<<" "<<balance<<endl;
                }
                else
                {
                     file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<password<<" "<<phone<<" "<<balance<<endl;
                }
                 file>>id>>name>>fname>>address>>pin>>password>>phone>>balance;
            }
            file.close();
            file1.close();
            remove("bank.txt");
            rename("bank1.txt","bank.txt");
            cout<<"\n\n\t\t\t\t Transction Successfully.....";

        }
        else
        {
            cout<<"\n\n\t\t\tTrnsction ID can't Not Found....";
        }

    }

}
void bank::payment()
{
    system("cls");
    string t_id,b_name;
    float amount;
    int flag=0;
    SYSTEMTIME x;//SYSTEMTIME USE FOR current time
    fstream file,file1;
    cout<<"\n\n\t\t\t\tBills Payment Option";
    file.open("bank.txt",ios::in);
    if(!file)
    {
        cout<<"\n\nFile opening Error.....";
    }
    else
    {
        cout<<"\n\nEnter user ID : ";
        cin>>t_id;
        cout<<"\n\nBill Name : ";
        cin>>b_name;
        cout<<"\n\n Bill Amount : ";
        cin>>amount;
        file1.open("bank1.txt",ios::out|ios::app);
        file>>id>>name>>fname>>address>>pin>>password>>phone>>balance;
        while(!file.eof())
        {
            if(t_id == id && amount<=balance)
            {
                balance-=amount;
               file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<password<<" "<<phone<<" "<<balance<<endl;
                flag++;
            }
            else
            {
                file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<password<<" "<<phone<<" "<<balance<<endl;
            }
            file>>id>>name>>fname>>address>>pin>>password>>phone>>balance;
        }
        file.close();
        file1.close();
        remove("bank.txt");
        rename("bank1.txt","bank.txt");
        if(flag == 1)
        {
            GetSystemTime(&x);
            file.open("bill.txt",ios::out|ios::app);
            file<<t_id<<" "<<b_name<<" "<<amount<<" "<<x.wDay<<"/"<<x.wMonth<<"/"<<x.wYear<<endl;
            file.close();
            cout<<"\n\n\t\t\t\t"<<b_name<<"Bill Payment Successfully.....";
        }
        else
        {
            cout<<"\n\n User ID OR Amount Invalid...";
        }

    }
}
void bank::search_record()
{
    system("cls");
    fstream file;
    string t_id;
    int flag=0;
    cout<<"\n\n\t\t\t\t\t\Search User Record";
    file.open("bank.txt",ios::in);
    if(!file)
    {
        cout<<"\n\nFile Opening Error...";
    }
    else
    {
        cout<<"\n\nUser ID : ";
        cin>>t_id;
         file>>id>>name>>fname>>address>>pin>>password>>phone>>balance;
        while(!file.eof())
        {
            if(t_id == id)
            {
                system("cls");
                cout<<"\n\n\t\t\t\t\t\Search User Record";
                cout<<"\n\n\n User ID is : "<<id;
                cout<<"\n\n\n Name : "<<name;
                cout<<"\n\n\n Father Name : "<<fname;
                cout<<"\n\n\n Address : "<<address;
                cout<<"\n\n\n Pin : "<<pin;
                cout<<"\n\n\n Password : "<<password;
                cout<<"\n\n\n Phone Number : "<<phone;
                cout<<"\n\n\n Curent Balance : "<<balance;


            }
            file>>id>>name>>fname>>address>>pin>>password>>phone>>balance;
        }
        file.close();
        if(flag==0)
        {
            cout<<"\n\n User ID Can't Found....";
        }
    }


}
void bank::edit_record()
{
    system("cls");
    string t_id, p,n,f,a,ph;
    int flag=0;
    int pi;
    fstream file,file1;
    cout<<"\n\n\t\t\t\tEdit User Record ";
    file.open("bank.txt",ios::in);

    if(!file)
    {
        cout<<"\n\nFile Opening Error...";
    }
    else
    {
        file1.open("bank1.txt",ios::out|ios::app);
        cout<<"\n\nUser ID : ";
        cin>>t_id;
        file>>id>>name>>fname>>address>>pin>>password>>phone>>balance;
        while(!file.eof())
        {
            if(t_id == id)
            {
                cout<<"\n\nName : ";
                cin>>n;
                cout<<"\n\nFather Name : ";
                cin>>f;
                cout<<"\n\nAddress : ";
                cin>>a;
                cout<<"\n\nPin Code (6 digit) : ";
                cin>>pi;
                cout<<"\n\nPassword : ";
                cin>>p;
                cout<<"\n\nPhone Number";
                cin>>ph;
                file1<<" "<<id<<" "<<n<<" "<<f<<" "<<a<<" "<<pi<<" "<<p<<" "<<ph<<" "<<balance<<endl;
                cout<<"\n\n\t\t\t\tRecord Edit Successfully....";
                flag++;
            }
            else
            {
                 file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<password<<" "<<phone<<" "<<balance<<endl;
            }
            file>>id>>name>>fname>>address>>pin>>password>>phone>>balance;
        }
        file.close();
        file1.close();
        remove("bank.txt");
        rename("bank1.txt","bank.txt");
        if(flag==0)
        {
            cout<<"\n\n User Id Can't Found....";
        }

    }
}
void bank::delete_record()
{
    system("cls");
    string t_id, p,n,f,a,ph;
    int flag=0;
    int pi;
    fstream file,file1;
    cout<<"\n\n\t\t\t\tEdit User Record ";
    file.open("bank.txt",ios::in);

    if(!file)
    {
        cout<<"\n\nFile Opening Error...";
    }
    else
    {
        file1.open("bank1.txt",ios::out|ios::app);
        cout<<"\n\nUser ID : ";
        cin>>t_id;
        file>>id>>name>>fname>>address>>pin>>password>>phone>>balance;
        while(!file.eof())
        {
            if(t_id == id)
            {
                cout<<"\n\n\t\t\t\tRecord Deleted Successfully....";
                flag++;
            }
            else
            {
                 file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<password<<" "<<phone<<" "<<balance<<endl;
            }
            file>>id>>name>>fname>>address>>pin>>password>>phone>>balance;
        }
        file.close();
        file1.close();
        remove("bank.txt");
        rename("bank1.txt","bank.txt");
        if(flag==0)
        {
            cout<<"\n\n User Id Can't Found....";
        }

    }
}
void bank::show_records()
{
    system("cls");
    fstream file;
    int flag=0;
    cout<<"\n\n\t\t\t\t\tShow All User Records ";
    file.open("bank.txt",ios::in);
    if(!file)
    {
        cout<<"\n\nFile Opening Error";
    }
    else
    {
         file>>id>>name>>fname>>address>>pin>>password>>phone>>balance;
         while(!file.eof())
         {
             cout<<"\n\nUser ID : "<<id;
             cout<<"\nName is : "<<name;
             cout<<"\nFather Name is : "<<fname;
             cout<<"\nAddress : "<<address;
             cout<<"\nPin : "<<pin;
             cout<<"\nPassword : "<<password;
             cout<<"\nPhone Number : "<<phone;
             cout<<"\nBalance : "<<balance;
             cout<<"\n\n=============================================";
             cout<<"\n\n=============================================";
            file>>id>>name>>fname>>address>>pin>>password>>phone>>balance;
            flag++;
         }
         file.close();
         if(flag==0)
         {
             cout<<"\n\nData Base is Empty....";
         }
    }
}
void bank::show_payment()
{
    system("cls");
    fstream file;
    int flag=0;
    string c_date;
    float amount;
    cout<<"\n\n\t\t\t\t\tShow All Bill's Records ";
    file.open("bill.txt",ios::in);
    if(!file)
    {
        cout<<"\n\nFile Opening Error";
    }
    else
    {

         file>>id>>name>>amount>>c_date;
         while(!file.eof())
         {
             cout<<"\n\nUser ID : "<<id;
             cout<<"\nBil Name is : "<<name;
             cout<<"\nBil Amount : "<<amount;
             cout<<"\nDate : "<<c_date;
             cout<<"\n\n=============================================";
             cout<<"\n\n=============================================";
             file>>id>>name>>amount>>c_date;
            flag++;
         }
         file.close();
         if(flag == 0)
         {
             cout<<"\n\nData Base is Empty....";
         }
    }
}


//ATM Management System function define start

void bank::user_balance()
{
    system("cls");
     fstream file;
     int flag=0;
     string t_id,t_pin,t_password;
     char ch;
    cout<<"\n\n\t\t\t\tUser Login & Check Balance";
    file.open("bank.txt",ios::in);
    if(!file)
    {
        cout<<"\n\nFile Opening Error....";
    }
    else
    {
        cout<<"\n\n User ID : ";
        cin>>t_id;
        cout<<"\n\n\t\t\t\tPin Code : ";
        for(int i=1;i<=6;i++)
        {
            ch=getch();
            t_pin+=ch;
            cout<<"*";
        }

        cout<<"\n\n Password : ";
        for(int i=1;i<=6;i++)
        {
            ch=getch();
            t_password+=ch;
            cout<<"*";
        }
        file>>id>>name>>fname>>address>>pin>>password>>phone>>balance;
        while(!file.eof())
        {
            if(t_id == id && t_pin == pin && t_password == password)
            {
                cout<<"\n\n\t\t\t\t Your Current Balance is : "<<balance;
                flag++;
            }
            file>>id>>name>>fname>>address>>pin>>password>>phone>>balance;
        }
        file.close();
        if(flag==0)
        {
            cout<<"\n\n\t\t\t\t\t\t User ID,Pin & Password Invalid......";
        }
    }


}
void bank::withdraw_atm()
{
    system("cls");
    fstream file,file1;
    string t_id,t_pin,t_password;
    char ch;
    float withdep;
    int flag=0;
    cout<<"\n\n\t\t\t\tWithdraw Amount Option ";
    file.open("bank.txt",ios::in);
    if(!file)
    {
        cout<<"\n\nFile opening Error....";
    }
    else
    {
        cout<<"\n\n User ID : ";
        cin>>t_id;
        cout<<"\n\n\t\t\t\tPin Code : ";
        for(int i=1;i<=6;i++)
        {
            ch=getch();
            t_pin+=ch;
            cout<<"*";
        }

        cout<<"\n\n Password : ";
        for(int i=1;i<=6;i++)
        {
            ch=getch();
            t_password+=ch;
            cout<<"*";
        }
        file1.open("bank1.txt",ios::out|ios::app);
        file>>id>>name>>fname>>address>>pin>>password>>phone>>balance;
        while(!file.eof())
        {
            if(t_id==id && t_pin==pin && t_password==password)
            {
               cout<<"\n\n Amount For Withdraw : ";
               cin>>withdep;
               if(withdep <= balance)
               {
                   balance-=withdep;
                   file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<password<<" "<<phone<<" "<<balance<<endl;
                    cout<<"\n\n\t\t\tYour Amount "<<withdep<<" Sucessfully Withdraw....";
                    cout<<"\n\n\t\t\t\tYour Current Balance "<<balance;
               }
               else
               {
                   file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<password<<" "<<phone<<" "<<balance<<endl;
                   cout<<"\n\n\t\t\t\t   Your Current Balance"<<balance<<" is less.....";
               }
               flag++;
            }
            else
            {

                file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<password<<" "<<phone<<" "<<balance<<endl;
            }

            file>>id>>name>>fname>>address>>pin>>password>>phone>>balance;
        }
         file.close();
         file1.close();
         remove("bank.txt");
         rename("bank1.txt","bank.txt");
         if(flag==0)
         {
             cout<<"\n\n\t\t\tUser ID Can't Found...";
         }
    }
}
void bank::check_details()
{
    system("cls");
    fstream file;
    string t_id,t_pin,t_password;
    char ch;
    float withdep;
    int flag=0;
    cout<<"\n\n\t\t\t\tCheck Details Option ";
    file.open("bank.txt",ios::in);
    if(!file)
    {
        cout<<"\n\nFile opening Error....";
    }
    else
    {
        cout<<"\n\n User ID : ";
        cin>>t_id;
        cout<<"\n\n\t\t\t\tPin Code : ";
        for(int i=1;i<=6;i++)
        {
            ch=getch();
            t_pin+=ch;
            cout<<"*";
        }

        cout<<"\n\n Password : ";
        for(int i=1;i<=6;i++)
        {
            ch=getch();
            t_password+=ch;
            cout<<"*";
        }
        file>>id>>name>>fname>>address>>pin>>password>>phone>>balance;
        while(!file.eof())
        {
            if(t_id==id && t_pin==pin && t_password==password)
            {
                 cout<<"\n\nUser ID : "<<id;
                 cout<<"\nName is : "<<name;
                 cout<<"\nFather Name is : "<<fname;
                 cout<<"\nAddress : "<<address;
                 cout<<"\nPin : "<<pin;
                 cout<<"\nPassword : "<<password;
                 cout<<"\nPhone Number : "<<phone;
                 cout<<"\nBalance : "<<balance;
                 flag++;
            }

            file>>id>>name>>fname>>address>>pin>>password>>phone>>balance;
        }
         file.close();
         if(flag==0)
         {
             cout<<"\n\n\t\t\tUser ID Can't Found...";
         }
    }
}
int main()
{
    bank obj;
    intoduction();
    obj.menu();
}

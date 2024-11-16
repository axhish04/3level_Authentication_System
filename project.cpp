#include<iostream>
#include<conio.h>
#include<vector>
#include<string>
using namespace std;
int a=0;
struct Register
{
    int id;
    string email,name,password,s;
    vector<string> colorPattern;
}R[25];
string rque,lque;

int ascii=178,choice;
    char ch = ascii;


void register_acc()
{
    system("cls");
    cout<<"\n";
    cout<<ch;
    cout<<" ACCOUNT REGISTRATION ";
    cout<<ch;
    char ch1;
    cout<<"\n\nEnter User ID --> ";
    cin>>R[a].id;
    cout<<"Enter Your Name --> ";
    cin>>R[a].name;
    cout<<"Enter Your Email --> ";
    cin>>R[a].email;
    cout<<"Enter Your Password --> ";
    do
    {
        ch1=getch();
        if(isdigit(ch1) || isalpha(ch1) || ispunct(ch1))
        {
            R[a].password+=ch1;
            cout<<"*";
        }
    } while (isdigit(ch1) || isalpha(ch1) || ispunct(ch1));
    cin.ignore();

    //colour selection to verify user at time of login 
    cout<<"\n\n";
    for(int i=1;i<=50;i++)
    cout<<ch;
    cout << "\n\nSelect Color Pattern (e.g., red, blue, green): ";
    string color;
    while(color != "0")
    {
        cin >> color;
        R[a].colorPattern.push_back(color);
        cout << "Add another color (or type '0' to finish): ";
    } 
    cin.ignore();
    cout<<"\n\n";
    for(int i=1;i<=50;i++)
    cout<<ch;
    cout<<"\n\n############# CHOOSE ONE QUESTION #############\n"<<endl;
    int r;
    cout<<"1. Who is your childhood hero ?";
    cout<<"\n2. What is your pet's name ?";
    cout<<"\n3. What is your dream car ?";
    cout<<"\n4. What is your favorite hobby ?";
    cout<<"\n5. What is your favorite color ?";
    cout<<"\n\nEnter choice -> ";
    cin>>r;
    cin.ignore();
    switch (r)
    {
        case 1:
        rque="Que-: Who is your childhood hero ?";
        cout<<rque<<"\nAns-: ";
        getline(cin,R[a].s);
        break;

        case 2:
        rque="Que-: What is your pet's name ?";
        cout<<rque<<"\nAns-: ";
        getline(cin,R[a].s);
        break;    
                
        case 3:
        rque="Que-: What is your dream car ?";
        cout<<rque<<"\nAns-: ";
        getline(cin,R[a].s);
        break;

        case 4:
        rque="Que-: What is your favorite hobby ?";
        cout<<rque<<"\nAns-: ";
        getline(cin,R[a].s);
        break;

        case 5:
        rque="Que-: What is your favorite color ?";
        cout<<rque<<"\nAns-: ";
        getline(cin,R[a].s);
        break;        
                
        default:
        cout<<"Enter a valid choice";
        break;
    }
    a++;
    cout<<endl;
   
    cout<<ch;
    cout<<"--------------- ACCOUNT REGISTERED SUCCESSFULLY ----------------";
    cout<<ch;
}


bool compareColorPatterns(const vector<string>& pattern1, const vector<string>& pattern2) 
{
    // Compare two color patterns
    return pattern1 == pattern2;
}
bool compare(string pattern1, string pattern2) 
{
    // Compare two color patterns
    return pattern1 == pattern2;
}

vector<string> authentication2()
{
    
     cout << "\nEnter Color Pattern (e.g., red, blue, green): ";
        string color;
        vector<string> enteredPattern;
        while (color != "0") 
        {
            cin >> color;
            enteredPattern.push_back(color);
            cout << "Add another color (or type '0' to finish): ";
        }
        cin.ignore();

        return enteredPattern;
};



void Login_acc()
{
    
    char ch1;
    if(a==0){
        cout<<"XXXXXXX No Record Found XXXXXXXX";
    }
    else
    {
        system("cls");  
        cout<<"\n";
        cout<<ch;
        cout<<" LOGIN YOUR ACCOUNT ";
        cout<<ch;
        int found=0,fndclr=0,que=0;
        string lemail , lpassword;
            do {
                cout << "\n\n**************** Level 1 Authentication *******************";
                cout << "\nEnter Your Email --> ";
                cin >> lemail;
                cout << "Enter User Password --> ";
                do {
                    ch1 = getch();
                    if (isdigit(ch1) || isalpha(ch1) || ispunct(ch1)) {
                        lpassword += ch1;
                        cout << "*";
                    }
                } while (isdigit(ch1) || isalpha(ch1) || ispunct(ch1));

                for (int i = 0; i < a; i++) {
                    if (lemail == R[i].email && lpassword == R[i].password) {
                        found++;
                        break;
                    }
                }

                if (found == 0)
                {
                    cout << "\n\n XXXXXXXX Invalid Email or Password XXXXXXXXX";
                    cout << "\n\nDo you want to try again? (y/n): ";
                    char retry;
                    cin >> retry;
                    if (retry == 'n' || retry == 'N') {
                        return;  // Exit Login_acc function
                    }
                    lpassword = "";  // Reenter password for the next attempt
                }
        } while (found == 0);

        cout<<"\n\n**************** Level 2 Authentication *******************";
        vector<string> pattern= authentication2();
        
        for(int i=0;i<a;i++)
        {
            if(compareColorPatterns(pattern, R[i].colorPattern))
            {
            
            fndclr++; 
            }
        }
        if(fndclr==0)
        {
            cout<<"\n\n XXXXXXXX Invalid Colour Pattern XXXXXXXXX";
            return;
        }
        cout<<"\n\n**************** Level 3 Authentication *******************";
        cout<<"\n\n############# CHOOSE YOUR SECURITY QUESTION #############"<<endl;
        int r;
        string p;
        do
        {   cout<<"1. Who is your childhood hero ?";
            cout<<"\n2. What is your pet's name ?";
            cout<<"\n3. What is your dream car ?";
            cout<<"\n4. What is your favorite hobby ?";
            cout<<"\n5. What is your favorite color ?";
            cout<<"\n\nEnter choice -> ";
            cin>>r;
            cin.ignore();
            switch (r)
            {
                case 1:
                    lque="Que-: Who is your childhood hero ?";
                    cout<<lque<<"\nAns-: ";
                    getline(cin,p);
                    break;

                case 2:
                   lque="Que-: What is your pet's name ?";
                    cout<<lque<<"\nAns-: ";
                    getline(cin,p);
                    break;    
                
                case 3:
                   lque="Que-: What is your dream car ?";
                    cout<<lque<<"\nAns-: ";
                    getline(cin,p);
                    break;

                case 4:
                    lque="Que-: What is your favorite hobby ?";
                    cout<<lque<<"\nAns-: ";
                    getline(cin,p);
                    break;

                case 5:
                    lque="Que-: What is your favorite color ?";
                    cout<<lque<<"\nAns-: ";
                    getline(cin,p);
                    break;        
                
                default:
                    cout<<"Enter a valid choice";
                    break;
            }
                for(int i=0;i<a;i++)
                {
                    if(compare(p,R[i].s) && compare(rque,lque))
                    {
                        cout<<"\n\n********** User Details ************";
                        cout<<"\n\nUser ID --> "<<R[i].id ;
                        cout<<"\nUser Name --> "<<R[i].name;
                        cout<<"\nUser Email --> "<<R[i].email;
                        cout<<"\nUser Password --> "<<R[i].password;
                        que++;

                    }
                

                }
                if(que==0)
                    {
                        cout<<"\n Invalid Answer ";
                        cout << "\n\nDo you want to try again? (y/n): ";
                        char retry;
                        cin >> retry;
                        if (retry == 'n' || retry == 'N') {
                            return;  // Exit Login_acc function
                        }
                        p = "";
                    
                    }
        }while(que==0);
    }
}


void forget_password() {
    string resetEmail;
    cout << "Enter your registered email for password reset: ";
    cin >> resetEmail;
    cout<< "Enter your colour pattern: ";
    vector<string> fcolour= authentication2();

    int found = 0;
    string newpas;
    for (int i = 0; i < a; i++) {
        if (resetEmail == R[i].email && compareColorPatterns(fcolour,R[i].colorPattern))
        {
            cout << "User ID: " << R[i].id << endl;
            cout << "Enter your new password: ";
            cin>>newpas;
            R[i].password=newpas;
            found++;
        }
    }

    if (found == 0) {
        cout << "Email not found. Please enter a registered email address.";
    }
}



void forget_email() {
    int userId;
    cout << "Enter your User ID for email reminder: ";
    cin >> userId;

    int found = 0;
    for (int i = 0; i < a; i++) {
        if (userId == R[i].id) {
            cout << "User Name: " << R[i].name << endl;
            cout << "User Email: " << R[i].email << endl;
            found++;
        }
    }

    if (found == 0) {
        cout << "User ID not found. Please enter a valid User ID.";
    }
}



int main(){
    
   for(int i=1;i<=23;i++)
    cout<<ch;
    cout<<" MINI PROJECT ";
    for(int i=1;i<=23;i++)
    cout<<ch;
    do{
        cout<<"\n"<<endl;
        cout<<"1. Register Account"<<endl;
        cout<<"2. Login Account"<<endl;
        cout<<"3. Forget Password"<<endl;
        cout<<"4. Forget Email"<<endl;
        cout<<"5. Exit"<<endl;

        cout<<"\n\nEnter Your Choice -> ";
        cin>>choice;
        switch (choice)
        {
            case 1:
                register_acc();
                break;
            case 2:
                Login_acc();
                break;
            case 3:
                forget_password();
                break;
            case 4:
                forget_email();
                break;
            case 5:
                exit(0);
            
            default:
                cout<<"Invalid Choice";
                break;
    }
    }while(true);
    return 0;
}

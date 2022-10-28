#include<iostream>
#include<string>
using namespace std;

string name[20], roll[20], course[20], classes[20], contact[20];
int total = 0; 
void enter()
{
    int choice=0;
    cout<<"How many student do you want to enter ??"<<endl;
    cin>>choice;
    if(total==0)
    {
        total=total+choice;
        for(int i=0; i<choice; i++)
        {
            cout<<"\nEnter Data of Student: "<<i+1<<endl;
            cout<<"Enter Name: ";
            cin>>name[i];
            cout<<"Enter Roll No: ";
            cin>>roll[i];
            cout<<"Enter Course: ";
            cin>>course[i];
            cout<<"Enter Class: ";
            cin>>classes[i];
            cout<<"Enter Contact: ";
            cin>>contact[i];
        }
    }
    else
    {
        for(int i=0; i<total+choice; i++)
        {
            cout<<"\nEnter Data of Student: "<<i+1<<endl;
            cout<<"Enter Name: ";
            cin>>name[i];
            cout<<"Enter Roll No: ";
            cin>>roll[i];
            cout<<"Enter Course: ";
            cin>>course[i];
            cout<<"Enter Class: ";
            cin>>classes[i];
            cout<<"Enter Contact: ";
            cin>>contact[i];
        }
    }
}

void show()
{
    if(total==0)
    {
        cout<<"No Data is entered"<<endl;
    }
    else
    {
        for(int i=0; i<total; i++)
        {
            cout<<"Data of Student: "<<i+1<<endl;
            cout<<"Name: "<<name[i]<<endl;
            cout<<"Roll No: "<<roll[i]<<endl;
            cout<<"Course: "<<course[i]<<endl;
            cout<<"Class: "<<classes[i]<<endl;
            cout<<"Contact: "<<contact[i]<<endl<<endl;
        }
    }
}

void search()
{
     if(total==0)
    {
        cout<<"No Data is entered"<<endl;
    }
    else
    {
        string rollno;
        cout<<"Enter the Roll Number of Student which you want to search: "<<endl;
        cin>>rollno;
        for(int i=0; i<total; i++)
        {
            if(rollno==roll[i])
            {
            cout<<"Name: "<<name[i]<<endl;
            cout<<"Roll No: "<<roll[i]<<endl;
            cout<<"Course: "<<course[i]<<endl;
            cout<<"Class: "<<classes[i]<<endl;
            cout<<"Contact: "<<contact[i]<<endl;
            }
        }
    }
}

void Delete()
{
    if(total==0)
    {
        cout<<"No Data is entered"<<endl;
    }
    else
    {
        int a; 
        cout<<"Press 1 for Delete All Record:"<<endl;
        cout<<"Press 2 for Delete specific record:"<<endl;
        cin>>a;
        if(a==1)
        {
            total = 0;
            cout<<"All Record is deleted"<<endl;
        }
        else if(a==2)
        {
            string rollno;
            cout<<"Enter the Roll Number of Student which you want to delete: "<<endl;
            cin>>rollno;
            for(int i=0; i<total; i++)
            {
                if(rollno==roll[i])
                {
                    for(int j=i; j<total; j++)
                    {
                        name[j]=name[j+1];
                        roll[j]=roll[j+1];
                        course[j]=course[j+1];
                        classes[j]=classes[j+1];
                        contact[j]=contact[j+1];
                    }
                }
                  total--;
            }
            cout<<"Your required record is deleted"<<endl;
        }
        else
        {
            cout<<"Invalid Input";
        }
    }
}


void update()
{
     if(total==0)
    {
        cout<<"No Data is entered"<<endl;
    }
    else
    {
        string rollno;
        cout<<"Enter the Roll Number of Student which you want to update: "<<endl;
        cin>>rollno;
        for(int i=0; i<total; i++)
        {
            if(rollno==roll[i])
            {
                cout<<"\nPrevious DATA"<<endl;
                cout<<"Data of Student: "<<i+1<<endl;
                cout<<"Name: "<<name[i]<<endl;
                cout<<"Roll No: "<<roll[i]<<endl;
                cout<<"Course: "<<course[i]<<endl;
                cout<<"Class: "<<classes[i]<<endl;
                cout<<"Contact: "<<contact[i]<<endl;
                cout<<"\nEnter New Data:"<<endl;
                cout<<"Enter Name: ";
                cin>>name[i];
                cout<<"Enter Roll No: ";
                cin>>roll[i];
                cout<<"Enter Course: ";
                cin>>course[i];
                cout<<"Enter Class: ";
                cin>>classes[i];
                cout<<"Enter Contact: ";
                cin>>contact[i];
            }
        }
    }

}



int main()
{
    int value;
    while(true)
    {
         cout<<"\nPress 1 to Enter Data:"<<endl;
         cout<<"Press 2 to Show the Data:"<<endl;
         cout<<"Press 3 to Search the Data:"<<endl;
         cout<<"Press 4 to Update the Data:"<<endl;
         cout<<"Press 5 to Delete the Data:"<<endl; 
         cout<<"Press 6 to xit"<<endl;
         cin>>value;
         switch (value)
         {
         case 1:
            enter();  
            break;
         case 2:
            show();
            break;
         case 3:
            search();
            break;
         case 4:
            update();
            break;
         case 5:
            Delete();
            break;
         case 6:
            exit(0);
         default:
            cout<<"Invalid Input"<<endl;
         }
    }
    return 0;
}
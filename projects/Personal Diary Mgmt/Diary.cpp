#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int password();
void addrecord();
void viewrecord();
void editrecord();
void editpassword();
void deleterecord();

struct record
{
    char time[6];
    char name[30];
    char place[25];
    char duration[10];
    char note[500];
} ;

int login(){
   string pass ="";
   char ch;
   cout << "\n\n\n\n\n\t\t\t\t     Personal Diary Management";
   cout << "\n\n\n\n\n\t\t\t\t\tEnter Password:";
   ch = _getch();
   while(ch != 13){//character 13 is enter
      pass.push_back(ch);
      cout << '*';
      ch = _getch();
   }
   if(pass == "pass"){
      cout << "\n\n\nAccess Granted \n";
      system("PAUSE");
      system("CLS");
      int main();
   }else{
      cout << "\nAccess Aborted...\n";
      system("CLS");
	  login();
   }
}


int main()
{
	login();
    int ch;
    cout<<"\n\n\t***********************************\n";
    cout<<"\t  *DAILY DIARY MANAGEMENT SYSTEM*\n";
    cout<<"\t***********************************";
    while(1)
    {
        cout<<"\n\n\t\tMAIN MENU:";
        cout<<"\n\n\tADD STORY\t[1]";
        cout<<"\n\tVIEW STORY\t[2]";
        cout<<"\n\tEDIT STORY\t[3]";
        cout<<"\n\tDELETE STORY\t[4]";
        cout<<"\n\tEDIT PASSWORD\t[5]";
        cout<<"\n\tEXIT\t\t[6]";
        cout<<"\n\n\tENTER YOUR CHOICE:";
        cin>>ch;

        switch(ch)
        {
        case 1:
            addrecord();
            break;
        case 2:
            viewrecord();
            break;
        case 3:
            editrecord();
            break;
        case 4:
            deleterecord();
            break;
        case 5:
            editpassword();
            break;
        case 6:
            cout<<"\n\n\t\tTHANK YOU FOR USING THE SOFTWARE ";
            getch();
            exit(0);
        default:
            cout<<"\nYOU ENTERED WRONG CHOICE..";
            cout<<"\nPRESS ANY KEY TO TRY AGAIN";
            getch();
            break;
        }
        system("cls");
    }
    return 0;
}
void addrecord( )
{
    system("cls");
    FILE *fp ;
    char another = 'Y' ,time[10];
    struct record e ;
    char filename[15];
    int choice;
    cout<<"\n\n\t\t***************************\n";
    cout<<"\t\t* WELCOME TO THE MENU *";
    cout<<"\n\t\t***************************\n\n";
    cout<<"\n\n\tENTER DATE OF YOUR RECORD:[yyyy-mm-dd]:";
    fflush(stdin);
    gets(filename);
    fp = fopen (filename, "ab+" ) ;
    if ( fp == NULL )
    {
        fp=fopen(filename,"wb+");
        if(fp==NULL)
        {
            cout<<"\nSYSTEM ERROR...";
            cout<<"\nPRESS ANY KEY TO EXIT";
            getch();
            return ;
        }
    }
    while ( another == 'Y'|| another=='y' )
    {
        choice=0;
        fflush(stdin);
        cout<< "\n\tENTER TIME:[hh:mm]:";
        cin>>time;
        rewind(fp);
        while(fread(&e,sizeof(e),1,fp)==1)
        {
            if(strcmp(e.time,time)==0)
            {
                cout<<"\n\tTHE RECORD ALREADY EXISTS.\n";
                choice=1;
            }
        }
        if(choice==0)
        {
            strcpy(e.time,time);
            cout<<"\tENTER NAME:";
            fflush(stdin);
            gets(e.name);
            fflush(stdin);
            cout<<"\tENTER PLACE:";
            gets(e.place);
            fflush(stdin);
            cout<<"\tENTER DURATION:";
            gets(e.duration);
            fflush(stdin);
            cout<<"\n\tEXPLAIN THE INCIDENT :";
            gets(e.note);
            fwrite ( &e, sizeof ( e ), 1, fp ) ;
            cout<<"\nYOUR RECORD IS ADDED...\n";
        }
        cout<<"\n\tADD ANOTHER STORY...(Y/N) "  ;
        fflush ( stdin ) ;
        another = getchar( ) ;
    }
    fclose ( fp ) ;
    cout<<"\n\n\tPRESS ANY KEY TO EXIT...";
    getch();
}
void viewrecord( )
{
    FILE *fpte ;
    system("cls");
    struct record customer ;
    char time[6],choice,filename[14];
    int ch;
    cout<<"\n\n\t\t*******************************\n";
    cout<<"\t\t* HERE IS THE VIEWING MENU *";
    cout<<"\n\t\t*******************************\n\n";
    choice=password();
    if(choice!=0)
    {
        return ;
    }
    do
    {
        cout<<"\n\tENTER THE DATE OF RECORD TO BE VIEWED:[yyyy-mm-dd]:";
        fflush(stdin);
        gets(filename);
        fpte = fopen ( filename, "rb" ) ;
        if ( fpte == NULL )
        {
            puts ( "\nTHE RECORD DOES NOT EXIST...\n" ) ;
            cout<<"PRESS ANY KEY TO EXIT...";
            getch();
            return ;
        }
        system("cls");
        cout<<"\n\tHOW WOULD YOU LIKE TO VIEW:\n";
        cout<<"\n\t1.WHOLE STORY OF THE DAY.";
        cout<<"\n\t2.STORY OF FIX TIME.";
        cout<<"\n\t\tENTER YOUR CHOICE:";
        cin>>ch;
        switch(ch)
        {
        case 1:
            cout<<"\nTHE WHOLE STORY FOR  IS:"<<filename;
            while ( fread ( &customer, sizeof ( customer ), 1, fpte ) == 1 )
            {
                cout<<"\n";
                cout<<"\nTIME:"<<customer.time;
                cout<<"\nMEETING WITH:"<<customer.name;
                cout<<"\nMEETING AT:"<<customer.place;
                cout<<"\nDURATION:"<<customer.duration;
                cout<<"\nNOTE:"<<customer.note;
                cout<<"\n";
            }
            break;
        case 2:
            fflush(stdin);
            cout<<"\nENTER TIME:[hh:mm]:";
            gets(time);
            while ( fread ( &customer, sizeof ( customer ), 1, fpte ) == 1 )
            {
                if(strcmp(customer.time,time)==0)
                {
                    cout<<"\nYOUR RECORD IS:";
                    cout<<"\nTIME:"<<customer.time;
                    cout<<"\nMEETING WITH:"<<customer.name;
                    cout<<"\nMEETING AT:"<<customer.place;
                    cout<<"\nDUARATION:"<<customer.duration;
                    cout<<"\nNOTE:"<<customer.note;
                }
            }
            break;
        default:
            cout<<"\nYOU TYPED SOMETHING ELSE...\n";
            break;
        }
        cout<<"\n\nWOULD YOU LIKE TO CONTINUE VIEWING...(Y/N):";
        fflush(stdin);
        scanf("%c",&choice);
    }
    while(choice=='Y'||choice=='y');
    fclose ( fpte ) ;
    return ;
}
void editrecord()
{
    system("cls");
    FILE *fpte ;
    struct record customer ;
    char time[6],choice,filename[14];
    int num,count=0;
    cout<<"\n\n\t\t*******************************\n";
    cout<<"\t\t* WELCOME TO THE EDITING MENU *";
    cout<<"\n\t\t*******************************\n\n";
    choice=password();
    if(choice!=0)
    {
        return ;
    }
    do
    {
        cout<<"\n\tENTER THE DATE OF RECORD TO BE EDITED:[yyyy-mm-dd]:";
        fflush(stdin);
        gets(filename);
        cout<<"\n\tENTER TIME:[hh:mm]:";
        gets(time);
        fpte = fopen ( filename, "rb+" ) ;
        if ( fpte == NULL )
        {
            cout<< "\nRECORD DOES NOT EXISTS:"  ;
            cout<<"\nPRESS ANY KEY TO GO BACK";
            getch();
            return;
        }
        while ( fread ( &customer, sizeof ( customer ), 1, fpte ) == 1 )
        {
            if(strcmp(customer.time,time)==0)
            {
                cout<<"\nYOUR OLD RECORD WAS AS:";
                cout<<"\nTIME: %s",customer.time;
                cout<<"\nMEETING WITH:"<<customer.name;
                cout<<"\nMEETING AT:"  <<customer.place;
                cout<<"\nDURATION: "  <<customer.duration;
                cout<<"\nNOTE:" <<customer.note;
                cout<<"\n\n\t\tWHAT WOULD YOU LIKE TO EDIT..";
                cout<<"\n1.TIME.";
                cout<<"\n2.MEETING PERSON.";
                cout<<"\n3.MEETING PLACE.";
                cout<<"\n4.DURATION.";
                cout<<"\n5.NOTE.";
                cout<<"\n6.WHOLE RECORD.";
                cout<<"\n7.GO BACK TO MAIN MENU.";
                do
                {
                    cout<<"\n\tENTER YOUR CHOICE:";
                    fflush(stdin);
                    cin>>num;
                    fflush(stdin);
                    switch(num)
                    {
                    case 1:
                        cout<<"\nENTER THE NEW DATA:";
                        cout<<"\nNEW TIME:[hh:mm]:";
                        gets(customer.time);
                        break;
                    case 2:
                        cout<<"\nENTER THE NEW DATA:";
                        cout<<"\nNEW MEETING PERSON:";
                        gets(customer.name);
                        break;
                    case 3:
                        cout<<"\nENTER THE NEW DATA:";
                        cout<<"\nNEW MEETING PLACE:";
                        gets(customer.place);
                        break;
                    case 4:
                        cout<<"\nENTER THE NEW DATA:";
                        cout<<"\nDURATION:";
                        gets(customer.duration);
                        break;
                    case 5:
                        cout<<"ENTER THE NEW DATA:";
                        cout<<"\nNOTE:";
                        gets(customer.note);
                        break;
                    case 6:
                        cout<<"\nENTER THE NEW DATA:";
                        cout<<"\nNEW TIME:[hh:mm]:";
                        gets(customer.time);
                        cout<<"\nNEW MEETING PERSON:";
                        gets(customer.name);
                        cout<<"\nNEW MEETING PLACE:";
                        gets(customer.place);
                        cout<<"\nDURATION:";
                        gets(customer.duration);
                        cout<<"\nNOTE:";
                        gets(customer.note);
                        break;
                    case 7:
                        cout<<"\nPRESS ANY KEY TO GO BACK...\n";
                        getch();
                        return ;
                        break;
                    default:
                        cout<<"\nYOU TYPED SOMETHING ELSE...TRY AGAIN\n";
                        break;
                    }
                }
                while(num<1||num>8);
                fseek(fpte,-sizeof(customer),SEEK_CUR);
                fwrite(&customer,sizeof(customer),1,fpte);
                fseek(fpte,-sizeof(customer),SEEK_CUR);
                fread(&customer,sizeof(customer),1,fpte);
                choice=5;
                break;
            }
        }
        if(choice==5)
        {
            system("cls");
            cout<<"\n\t\tEDITING COMPLETED...\n";
            cout<<"--------------------\n";
            cout<<"THE NEW RECORD IS:\n";
            cout<<"--------------------\n";
            cout<<"\nTIME:"<<customer.time;
            cout<<"\nMEETING WITH:" <<customer.name;
            cout<<"\nMEETING AT:"<<customer.place;
            cout<<"\nDURATION:"<<customer.duration;
            cout<<"\nNOTE:"<<customer.note;
            fclose(fpte);
            cout<<"\n\n\tWOULD YOU LIKE TO EDIT ANOTHER RECORD.(Y/N)";
            cin>>choice;
            count++;
        }
        else
        {
            cout<<"\nTHE RECORD DOES NOT EXIST::\n";
            cout<<"\nWOULD YOU LIKE TO TRY AGAIN...(Y/N)";
            cin>>choice;
        }
    }
    while(choice=='Y'||choice=='y');
    fclose ( fpte ) ;
    if(count==1)
        cout<<"\n%d FILE IS EDITED...\n",count;
    else if(count>1)
        cout<<"\n%d FILES ARE EDITED..\n",count;
    else
        cout<<"\nNO FILES EDITED...\n";
    cout<<"\tPRESS ENTER TO EXIT EDITING MENU.";
    getch();
}

int password()
{
    char pass[15]= {0},check[15]= {0},ch;
    FILE *fpp;
    int i=0,j;
    cout<<"::FOR SECURITY PURPOSE::";
    cout<<"::ONLY THREE TRIALS ARE ALLOWED::";
    for(j=0; j<3; j++)
    {
        i=0;
        cout<<"\n\n\tENTER THE PASSWORD:";
        pass[0]=getch();
        while(pass[i]!='\r')
        {
            if(pass[i]=='\b')
            {
                i--;
                cout<<"\b";
                cout<<" ";
                cout<<"\b";
                pass[i]=getch();
            }
            else
            {
                cout<<"*";
                i++;
                pass[i]=getch();
            }
        }
        pass[i]='\0';
        fpp=fopen("SE","r");
        if (fpp==NULL)
        {
            cout<<"\nERROR WITH THE SYSTEM FILE...[FILE MISSING]\n";
            getch();
            return 1;
        }
        else
            i=0;
        while(1)
        {
            ch=fgetc(fpp);
            if(ch==EOF)
            {
                check[i]='\0';
                break;
            }
            check[i]=ch-5;
            i++;
        }
        if(strcmp(pass,check)==0)
        {
            cout<<"\n\n\tACCESS GRANTED...\n";
            return 0;
        }
        else
        {
            cout<<"\n\n\tWRONG PASSWORD..\n\n\tACCESS DENIED...\n";
        }
    }
    cout<<"\n\n\t::YOU ENTERED WRONG PASSWORD::YOU ARE NOT ALLOWED TO ACCESS ANY FILE::\n\n\tPRESS ANY KEY TO GO BACK...";
    getch();
    return 1;
}

void editpassword()
{
    system("cls");
    cout<<"\n";
    char pass[15]= {0},confirm[15]= {0},ch;
    int choice,i,check;
    FILE *fp;
    fp=fopen("SE","rb");
    if(fp==NULL)
    {
        fp=fopen("SE","wb");
        if(fp==NULL)
        {
            cout<<"SYSTEM ERROR...";
            getch();
            return ;
        }
        fclose(fp);
        cout<<"\nSYSTEM RESTORED...\nYOUR PASSWORD IS 'ENTER'\n PRESS ENTER TO CHANGE PASSWORD\n\n";
        getch();
    }
    fclose(fp);
    check=password();
    if(check==1)
    {
        return ;
    }
    do
    {
        if(check==0)
        {
            i=0;
            choice=0;
            cout<<"\n\n\tENTER THE NEW PASSWORD:";
            fflush(stdin);
            pass[0]=getch();
            while(pass[i]!='\r')
            {
                if(pass[i]=='\b')
                {
                    i--;
                    cout<<"\b";
                    cout<<" ";
                    cout<<"\b";
                    pass[i]=getch();
                }
                else
                {
                    cout<<"*";
                    i++;
                    pass[i]=getch();
                }
            }
            pass[i]='\0';
            i=0;
            cout<<"\n\tCONFIRM PASSWORD:";
            confirm[0]=getch();
            while(confirm[i]!='\r')
            {
                if(confirm[i]=='\b')
                {
                    i--;
                    cout<<"\b";
                    cout<<" ";
                    cout<<"\b";
                    confirm[i]=getch();
                }
                else
                {
                    cout<<"*";
                    i++;
                    confirm[i]=getch();
                }
            }
            confirm[i]='\0';
            if(strcmp(pass,confirm)==0)
            {
                fp=fopen("SE","wb");
                if(fp==NULL)
                {
                    cout<<"\n\t\tSYSTEM ERROR";
                    getch();
                    return ;
                }
                i=0;
                while(pass[i]!='\0')
                {
                    ch=pass[i];
                    putc(ch+5,fp);
                    i++;
                }
                putc(EOF,fp);
                fclose(fp);
            }
            else
            {
                cout<<"\n\tTHE NEW PASSWORD DOES NOT MATCH.";
                choice=1;
            }
        }
    }
    while(choice==1);
    cout<<"\n\n\tPASSWORD CHANGED...\n\n\tPRESS ANY KEY TO GO BACK...";
    getch();
}

void deleterecord( )
{
    system("cls");
    FILE *fp,*fptr ;
    struct record file ;
    char filename[15],another = 'Y' ,time[10];;
    int choice,check;
    cout<<"\n\n\t\t*************************\n";
    cout<<"\t\t* WELCOME TO DELETE MENU*";
    cout<<"\n\t\t*************************\n\n";
    check = password();
    if(check==1)
    {
        return ;
    }
    while ( another == 'Y' )
    {

        cout<<"\n\n\tHOW WOULD YOU LIKE TO DELETE.";
        cout<<"\n\n\t#DELETE WHOLE RECORD\t\t\t[1]";
        cout<<"\n\t#DELETE A PARTICULAR RECORD BY TIME\t[2]";
        do
        {
            cout<<"\n\t\tENTER YOU CHOICE:";
            cin>>choice;
            switch(choice)
            {
            case 1:
                cout<<"\n\tENTER THE DATE OF RECORD TO BE DELETED:[yyyy-mm-dd]:";
                fflush(stdin);
                gets(filename);
                fp = fopen (filename, "wb" ) ;
                if ( fp == NULL )
                {
                    cout<<"\nTHE FILE DOES NOT EXISTS";
                    cout<<"\nPRESS ANY KEY TO GO BACK.";
                    getch();
                    return ;
                }
                fclose(fp);
                remove(filename);
                cout<<"\nDELETED SUCCESFULLY...";
                break;
            case 2:
                cout<<"\n\tENTER THE DATE OF RECORD:[yyyy-mm-dd]:";
                fflush(stdin);
                gets(filename);
                fp = fopen (filename, "rb" ) ;
                if ( fp == NULL )
                {
                    cout<<"\nTHE FILE DOES NOT EXISTS";
                    cout<<"\nPRESS ANY KEY TO GO BACK.";
                    getch();
                    return ;
                }
                fptr=fopen("temp","wb");
                if(fptr==NULL)
                {
                    cout<<"\nSYSTEM ERROR";
                    cout<<"\nPRESS ANY KEY TO GO BACK";
                    getch();
                    return ;
                }
                cout<<"\n\tENTER THE TIME OF RECORD TO BE DELETED:[hh:mm]:";
                fflush(stdin);
                gets(time);
                while(fread(&file,sizeof(file),1,fp)==1)
                {
                    if(strcmp(file.time,time)!=0)
                        fwrite(&file,sizeof(file),1,fptr);
                }
                fclose(fp);
                fclose(fptr);
                remove(filename);
                rename("temp",filename);
                cout<<"\nDELETED SUCCESFULLY...";
                break;
            default:
                cout<<"\n\tYOU ENTERED WRONG CHOICE";
                break;
            }
        }
        while(choice<1||choice>2);
        cout<<"\n\tDO YOU LIKE TO DELETE ANOTHER RECORD.(Y/N):";
        fflush(stdin);
        cin>>another;
    }
    cout<<"\n\n\tPRESS ANY KEY TO EXIT...";
    getch();
}



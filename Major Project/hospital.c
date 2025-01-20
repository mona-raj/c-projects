/*A hospital patient management system in C language developed by Mona Raj for Major Project in CAP173 at LPU*/

/*Logic of program
    1. The program will display a menu to the user.
    2. The user can select any option from the menu.
    3. The user can view all the patient records.
    4. The user can add a new patient record.
    5. The user can search for a patient record.
    6. The user can edit a patient record.
    7. The user can delete a patient record.
    8. The user can exit the program.
*/

//header files
#include<stdio.h>
#include<conio.h>
#include<string.h>

//function declaration
void viewMenu();
void viewPatientData();   
void addPatientData();   
void searchPatientID();
void editPatientData();
void deletePatientData();

//global variables declaration
char userChoice;

//structure members
struct patient{
    int id;
    char name[20];
    int age;
    char gender;
    float bill; 
}p1, p2, p3, p4, p5;
struct patient p1 = {212,"Atul Vaid",76,'M',127800.78};
struct patient p2 = {567,"Priya",62,'F',6789.50};
struct patient p3 = {102,"Pandey Dheeraj",45,'M',895.00};
struct patient p4 = {342,"Mufasa Hait",34,'M',89666.09};
struct patient p5 = {000,"",00,'\0',00.00};

//main function
void main()
{
    userChoice = 'V';   //default initialization
    do{
        viewMenu();
        switch(userChoice)
        {
            case 'V':
            viewPatientData();
            getch();
            break;
            case 'A':
            addPatientData();
            getch();
            break;
            case 'S':
            searchPatientID();
            getch();
            break;
            case 'E':
            editPatientData();
            getch();
            break;
            case 'D':
            deletePatientData();
            getch();
            break;
            case 'Q':
            printf("Thank you for using our patient management system.\n");
            break;
            default:
            printf("Invalid input. Try again.\n");
            break;
        }
    }   
    while(userChoice != 'Q');
    getch();
}

//viewMenu() definition
void viewMenu()
{
    printf("\n------------------------\n");
    printf("HEALTHSTAR HOSPITAL\nWelcome to our patient management system.\n");
    printf("What would you like to do?\nUse the following key --\nV : View\tA : Add\tS : Search\tE : Edit\tD : Delete\tQ : Quit");
    scanf("%c",&userChoice);
}

//viewPatientData() definition
void viewPatientData()
{
    printf("The patient records are");
    printf("Patient #1 Record --\n");
    printf("ID : %d\tName : %s\tAge : %d\tGender : %c\tBill : %f\n",p1.id, p1.name, p1.age, p1.gender, p1.bill);
    printf("Patient #2 Record --\n");
    printf("ID : %d\tName : %s\tAge : %d\tGender : %c\tBill : %f\n",p2.id, p2.name, p2.age, p2.gender, p2.bill);
    printf("Patient #3 Record --\n");
    printf("ID : %d\tName : %s\tAge : %d\tGender : %c\tBill : %f\n",p3.id, p3.name, p3.age, p3.gender, p3.bill);
    printf("Patient #4 Record --\n");
    printf("ID : %d\tName : %s\tAge : %d\tGender : %c\tBill : %f\n",p4.id, p4.name, p4.age, p4.gender, p4.bill);
    printf("Patient #5 Record --\n");
    printf("ID : %d\tName : %s\tAge : %d\tGender : %c\tBill : %f\n",p5.id, p5.name, p5.age, p5.gender, p5.bill);
}

//addPatientData() definition
void addPatientData()
{
    printf("Enter patient ID, Name, Age, Gender(M/F) and Bill : \n");
    scanf("%d",&p5.id);
    gets(p5.name);
    scanf("%d %c %f", p5.age, p5.gender, p5.bill);
}

//searchPatientID() definition
void searchPatientID()
{
    int patientID;
    printf("Enter Patients's ID : ");
    scanf("%d",&patientID);
    if (patientID == p1.id || patientID == p2.id || patientID == p3.id || patientID == p4.id || patientID == p5.id)
    {
        printf("Patient record found.\n");
    }
    else
    {
        printf("Patient record does not exist.\n\n");
    }
}
    
//editPatientData() definition
void editPatientData()
{
    int patientNum;
    printf("Enter Patients's Number(1/2/3/4/5) : ");
    scanf("%d",&patientNum);
    switch(patientNum)
    {
        case 1:
        printf("Enter patient ID, Name, Age, Gender(M/F) and Bill : \n");
        scanf("%d",&p1.id);
        gets(p1.name);
        scanf("%d %c %f", p1.age, p1.gender, p1.bill);
        break;
        case 2:
        printf("Enter patient ID, Name, Age, Gender(M/F) and Bill : \n");
        scanf("%d",&p2.id);
        gets(p2.name);
        scanf("%d %c %f", p2.age, p2.gender, p2.bill);
        break;
        case 3:
        printf("Enter patient ID, Name, Age, Gender(M/F) and Bill : \n");
        scanf("%d",&p3.id);
        gets(p3.name);
        scanf("%d %c %f", p3.age, p3.gender, p3.bill);
        break;
        case 4:
        printf("Enter patient ID, Name, Age, Gender(M/F) and Bill : \n");
        scanf("%d",&p4.id);
        gets(p4.name);
        scanf("%d %c %f", p4.age, p4.gender, p4.bill);
        break;
        case 5:
        printf("Enter patient ID, Name, Age, Gender(M/F) and Bill : \n");
        scanf("%d",&p5.id);
        gets(p5.name);
        scanf("%d %c %f", p5.age, p5.gender, p5.bill);
        break;
        default:
        printf("Invalid input. Try again.\n");
        break;
    }
}

//deletePatientData() definition
void deletePatientData()
{
    int patientNum;
    printf("Enter Patients's Number(1/2/3/4/5) : ");
    scanf("%d",&patientNum);
    switch(patientNum)
    {
        case 1:
        p1.id = 000;
        strcpy(p1.name,"Undefined");
        p1.age = 00;
        p1.gender = '\0';
        p1.bill = 00.00;
        break;
        case 2:
        p2.id = 000;
        strcpy(p2.name,"Undefined");
        p2.age = 00;
        p2.gender = '\0';
        p2.bill = 00.00;        
        break;
        case 3:
        p3.id = 000;
        strcpy(p3.name,"Undefined");
        p3.age = 00;
        p3.gender = '\0';
        p3.bill = 00.00;        
        break;
        case 4:
        p4.id = 000;
        strcpy(p4.name,"Undefined");
        p4.age = 00;
        p4.gender = '\0';
        p4.bill = 00.00;        
        break;
        case 5:
        p5.id = 000;
        strcpy(p5.name,"Undefined");
        p5.age = 00;
        p5.gender = '\0';
        p5.bill = 00.00;        
        break;
        default:
        printf("Invalid input. Try again.\n");
        break;
    }
}




/*A quiz game in C language developed by Mona Raj for Minor Project in CAP173 at LPU*/

/*Logic of program
    1.allow user to select a subject using switch case
    2.store questions for each subject in separate functions
    3.store correct answers in an array
    4.match user's answers with the correct using if else ladder
    5.calculate result
    6.display result
*/

//header files
#include<stdio.h>

//function declaration
void bio();
void math();
void comp();

//global variables declaration
char name[10];
int ans[5]={6,6,6,6,6};
int userInput[5]={0,0,0,0,0};

//main function
void main()
{

    int sub;
    int score=0;
    printf("QUIZ-TIME!!!\nEnter your name : ");
    scanf("%s",name);
    printf("\n");
    printf("Welcome %s !\nChoose a subject :\nEnter 1 for Biology\nEnter 2 for Mathematics\nEnter 3 for Computer\n",name);
    scanf("%d",&sub);
    printf("\n-----------------------------------------------------------------\n");


    //selecting subject using switch case
    switch(sub)
    {
        case 1:
        bio();  //function call
        break;
        case 2:
        math(); //function call
        break;
        case 3:
        comp(); //function call
        break;
        default:
        printf("Invalid input, try again\n");   //default case
        break;
    }

    //calculating score
    for(int i=0;i<5;i++)
    {
        if (userInput[i] == ans[i])
        {
            score=score+1;
        }
    }

    //displaying score
    printf("\n-----------------------------------------------------------------\n");
    printf("Thank you for playing %s.\nHere are your results :\nScore : %d /5",name,score);
}

//defining bio() function
void bio()
{
    const char *bioQues[5]={"A. What is the powerhouse of the cell?\n1. Nucleus\n2. Ribosome\n3. Mitochondria\n4. Golgi Apparatus\n","B. Which of the following is not a type of blood cell?\n1. Red Blood Cell\n2. White Blood Cell\n3. Platelets\n4. Plasma Cell\n","C. Which organ is primarily responsible for filtering waste from the blood?\n1. Liver\n2. Kidney\n3. Heart\n4. Stomach\n","D. What is the term for the process by which plants make their own food using sunlight?\n1. Photosynthesis\n2. Respiration\n3. Transpiration\n4. Fermentation\n","E. Which macromolecule serves as the primary energy source for living cells?\n1. Proteins\n2. Lipids\n3. Carbohydrates\n4. Nucleic Acids\n"};

    int bioAns[5]={3,4,2,1,3};

    printf("%s, Are you ready to become a BIOLOGY WIZARD?\n",name);
    for(int i=0;i<5;i++)
    {
        printf(bioQues[i]);
        scanf("%d",&userInput[i]);
        ans[i]=bioAns[i];
    }
}

//defining math() function
void math()
{
    const char *mathQues[5]={"A. What is the value of 7+3*2\n1. 20\n2. 13\n3. 17\n4. 10\n","B. Which of these is a prime number?\n1. 8\n2. 12\n3. 19\n4. 21\n","C. What is the area of a triangle with a base of 5 units and a height of 10 units?\n1. 50 square units\n2. 25 square units\n3. 10 square units\n4. 5 square units\n","D. What is the square root of 144?\n1. 10\n2. 11\n3. 12\n4. 13\n","E. If x=3 and y=4 what is the value of x^2 + y^2 ?\n1. 7\n2. 12\n3. 25\n4. 18\n"};\

    int mathAns[5]={2,3,2,3,3};

    printf("%s, Are you ready to become a MATHS WIZARD?\n",name);
    for(int i=0;i<5;i++)
    {
        printf(mathQues[i]);
        scanf("%d",&userInput[i]);
        ans[i]=mathAns[i];
    }
}

//defining math() function
void comp()
{
    const char *compQues[5]={"A. What is the shortcut key for 'Copy' in most software applications?\n1. Ctrl + X\n2. Ctrl + C\n3. Ctrl + V\n4. Ctrl + Z\n","B. Which of the following is a type of storage device?\n1. RAM\n2. USB Flash Drive\n3. Processor\n4. Mouse\n","C. What does URL stand for?\n1. Uniform Resource Link\n2. Uniform Retrieval Locator\n3. Uniform Resource Locator\n4. Universal Retrieval Link\n","D. Which programming language is primarily used for web development along with HTML and CSS?\n1. Python\n2. Java\n3. JavaScript\n4. C++\n","E. In binary code, what does '1' and '0' represent?\n1. On and Off\n2. True and False\n3. High and Low voltage\n4. All of the above\n"};

    int compAns[5]={2,2,3,3,4};

    printf("%s, Are you ready to become a COMPUTER WIZARD?\n",name);
    for(int i=0;i<5;i++)
    {
        printf(compQues[i]);
        scanf("%d",&userInput[i]);
        ans[i]=compAns[i];
    }
}

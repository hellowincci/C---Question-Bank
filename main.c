#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int answerChecker(char AnswerInput,int questionNumber);
int correct,wrong;
int main()
{
    char questionList[10][1000] = {"Question1","Question2","Question3","Question4","Question5","Question6","Question7","Question8","Question9","Question10"};
    char question1[1000] =("Question 1  : Who is known as the Artit of he world famous painting ¡°Mona Lisa¡±?\n   A. Filipo Brunelleschi\n   B. Michelangelo\n   C. Leonardo da Vinci  \n");//C
    char question2[256] =("Question 2  : Which Mountain¡¯s volcano buried Pompeii city with ash in 79AD?\n   A. Mount Pelee\n   B. Mount Etna\n   C. Mount Vesuvius\n");//C
    char question3[256]=("Question 3  : Who was one of the teachers of Alexander the Great?\n   A. Plato\n   B. Aristotle\n   C. Socrates\n"); //B
    strcpy(questionList[2],question3);
    char question4[256]=("Question 4  : Which is considered as oldest civilization of the world ?\n   A. Mesopotamian Civilization\n   B. Egyptain Civilization\n   C. Harappan Civilization\n");
    strcpy(questionList[3],question4);//A
    char question5[256]=("Question 5  : Which among following is called \"Gift of the Nile\" ?\n   A. Iraq\n   B. Egypt\n   C. China\n");
    strcpy(questionList[4],question5);//B
    char question6[256]=("Question 6  : Who is considered as the master of Greek comedy ?\n   A. Sophocles\n   B. Aeschylus\n   C. Aristophanes\n");
    strcpy(questionList[5],question6);//C
    char question7[256]=("Question 7  : When ancient Olympic games first held ?\n   A. 776 BC\n   B. 780 BC\n   C. 790 BC\n");
    strcpy(questionList[6],question7); //A
    char question8[256]=("Question 8  : Who is known as the father of Modern Medicine ?\n   A. Erastosthenes\n   B. Pythagoras\n   C. Hippocrates\n");
    strcpy(questionList[7],question8); //C
    char question9[256]=("Question 9  : Rome was founded around ?\n   A. 1000 BC\n   B. 1200 BC\n   C. 1400 BC\n");
    strcpy(questionList[8],question9);//A
    char question10[256]=("Question 10 : Which was not an Roman Philosopher ?\n   A. Lucretius\n   B. Cicero\n   C. Octavian\n");
    strcpy(questionList[9],question10);//c
    strcpy(questionList[0],question1);
    strcpy(questionList[1],question2);
    char menuChoice,questionAnswer;
    int i,u,sentinelControl2=1;
    do{
    printf("Welcome to FUN WORLD HISTORY Quiz\n");
    printf("1. Start [S]\n");
    printf("2. Exit [E] \n");
    printf("Enter your choice... ");

    menuChoice = getchar();
    getchar();
    if(menuChoice == 'S')
    {
        do{
            for(i=0;i<10;i++)
            {
                for(u=0;questionList[i][u]!='\0';u++)
                {
                        printf("%c",questionList[i][u]);
                }
                printf("\n");
                printf("Enter your answer... ");

                questionAnswer = getchar();
                getchar();
                sentinelControl2=answerChecker(questionAnswer,i);
                if(sentinelControl2 ==0)
                {
                        printf("InValid...Please Enter Only A,B,C only\n");
                        i--;
                }
            }
        }while(sentinelControl2==0);
        printf("Corrected Answered : %i\n",correct);
        printf("Incorrect Answered : %i\n",wrong);
        if(correct/10 >0.75)
            printf("Congratulations, you are ready to go to the next level.\n");
        else
            printf("Please ask your teacher for extra help.\n");
        correct=0;
        wrong=0;


    }
    else if(menuChoice=='E')
        printf("See you Next Time... \n");
    else
        printf("InValid Input... Only [1] and [2] allow... \n");
    }while(menuChoice !='E');
    return 0;
}

int answerChecker(char AnswerInput,int questionNumber)
{
    char correctAnswer[10] = {'C','C','B','A','B','C','A','C','A','C'};

    if(AnswerInput == 'A'||AnswerInput =='B'|| AnswerInput=='C')
    {
        if(AnswerInput == correctAnswer[questionNumber])
            correct++;
        else
        {
            wrong++;
            printf("The correct answer is:%c\n",correctAnswer[questionNumber]);
        }
        return 1;
    }
    return 0;
}


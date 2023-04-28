#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>

int usrScore = 0,compScore = 0;
void help();
void checkOptions(int comp){
	// 1 = scissor 2= paper 3=rock
	system("cls");
	int usr;
            printf("\t\t==========*Welcome to Rock, Paper & Scissor Game*==========");
            printf("\n\t\tPlease select the option: ");
            printf("\n\t\t1.Scissor");
            printf("\n\t\t2.Paper");
            printf("\n\t\t3.Rock");
            printf("\n\t\t4.Quit\n");
	do
	{	
		printf("\t\t\t");
		fflush(stdin);
		scanf("%d",&usr);
	
		if(usr>0 && usr<5)
		{
			fflush(stdin);
			
			if(usr == comp){
				printf(" --------------------\n");
				printf("|                    |\n");
				printf("|    Its a tie       |\n");
				printf("|                    |\n");
				printf(" --------------------\n");
			}
			else if(usr == 1){
				if(comp == 2){
					printf(" --------------------\n");
					printf("|      You Won :)    |\n");
					printf("| You : Scissor      |\n");
					printf("| Computer : Paper   |\n");
					printf(" --------------------\n");
					usrScore++;	
				}
				else {
					printf(" --------------------\n");
					printf("|     You Lose :(    |\n");
					printf("| You : Scissor      |\n");
					printf("| Computer : Rock    |\n");
					printf(" --------------------\n");
					compScore++;
				}
			}
			else if(usr == 2){
				if(comp == 1){
					printf(" --------------------\n");
					printf("|      You Lose :(   |\n");
					printf("| You : Paper        |\n");
					printf("| Computer : Scissor |\n");
					printf(" --------------------\n");
					compScore++;
				}
				else {
					printf(" --------------------\n");
					printf("|     You Won :)     |\n");
					printf("| You : Paper        |\n");
					printf("| Computer : Rock    |\n");
					printf(" --------------------\n");
					
					usrScore++;
				}
			}
			else if(usr == 3){
				if(comp == 1){
					printf(" --------------------\n");
					printf("|      You Won :)    |\n");
					printf("| You : Rock         |\n");
					printf("| Computer : Scissor |\n");
					printf(" --------------------\n");
					usrScore++;
				}
				else {
					printf(" --------------------\n");
					printf("|     You Lose :(    |\n");
					printf("| You : Rock         |\n");
					printf("| Computer : Paper   |\n");
					printf(" --------------------\n");
					compScore++;
				}
			}
			else if(isupper(usr)>='A' && isupper(usr)<='Z')
			{
			printf(" --------------------\n");
			printf("|                    |\n");
			printf("|    Wrong Choice    |\n");
			printf("|                    |\n");
			printf(" --------------------\n");
			Beep(750,500);
			}
			else if(usr == 4){
				printf(" --------------------\n");
				if(usrScore > compScore)
				printf("|      You Won :)    |\n");
				else if (usrScore < compScore)
				printf("|     You Lose :(    |\n");
				else 
				printf("|      Its a tie     |\n");

				printf("|     Final Score    |\n");
				printf("| You : %d           |\n",usrScore);
				printf("| Computer: %d       |\n",compScore);
				printf(" --------------------\n");
				printf("\a");
				getch();
				break;
			}
		}
		else {
			// printf("\n wrong choice\n"); 
			printf(" --------------------\n");
			printf("|                    |\n");
			printf("|    Wrong Choice    |\n");
			printf("|                    |\n");
			printf(" --------------------\n");
			Beep(750,500);
		}
	}while(1);
}


void guess_no(int num, int nguesses)
{   
    int guess;
	system("cls");
    printf("\t\t========*Guess the number between 1 to 50*=========\n\n");

    do{
           
			fflush(stdin);
			scanf("%d",&guess);   
			// if(!(guess>0) && !(guess<50))
            // {
            // printf(" --------------------\n");
			// printf("|                    |\n");
			// printf("|    Not in range    |\n");
			// printf("|                    |\n");
			// printf(" --------------------\n");
			//  nguesses++;
            // 	continue;
			// }
			fflush(stdin);
               if(guess>0 && guess<50)
                {		
							
                    if(guess>num)
                    {
			            printf(" --------------------\n");
						printf("|                    |\n");
						printf("|    Lower number    |\n");
						printf("|                    |\n");
						printf(" --------------------\n");
                        printf(" \n");
                    }
                    else if(guess<num)
                    {
			            printf(" --------------------\n");
						printf("|                    |\n");
						printf("|   Higher number    |\n");
						printf("|                    |\n");
						printf(" --------------------\n");
                        printf(" \n");
                    }
					//  else if(isalpha(guess)) 
					 else if(isupper(guess)>='A'&&isupper(guess)<='Z') 
                    {
                        
						printf(" --------------------\n");
						printf("|                    |\n");
						printf("|    Wrong choice    |\n");
						printf("|         or         |\n");
						printf("|    Not in range    |\n");
						printf("|                    |\n");
						printf(" --------------------\n");
						Beep(750,500);
						 getch();
                    }
                    else
                    {
                        
			            printf(" -----------------------------------\n");
						printf("|                                  |\n");
                        printf("|   You guessed it in %d attempts  |\n", nguesses);
						printf("|                                  |\n");
						printf(" ----------------------------------\n");
						 getch();
                    }
                    nguesses++;
					//  getch();
                }
                else
                {
                		printf(" --------------------\n");
						printf("|                    |\n");
						printf("|    Wrong choice    |\n");
						printf("|         or         |\n");
						printf("|    Not in range    |\n");
						printf("|                    |\n");
						printf(" --------------------\n");
						Beep(750,500);
						 nguesses++;
				}
        }while(guess!=num);
}

void quiz()
{
     int countr,r,r1,count,i,n;
     float score;
     char choice;
     mainhome:
 	// system("cls");
     printf("\n\t\t > Press S to start the game");
     printf("\n\t\t > press H for help            ");
     printf("\n\t\t > press Q to quit             ");
     printf("\n\t\t________________________________________\n\n");
     choice=toupper(getch());

    if(choice=='H')
	{
		help();
		getch();
		goto mainhome;
	}
	else if (choice=='Q')
		return;
	// exit(1);
    else if(choice=='S')
    {
		system("cls");
		// system("cls");
		printf("\n ------------------  Welcome %s to C Program Quiz Game --------------------------",playername);
		printf("\n\n Here are some tips you might wanna know before playing:");
		printf("\n -------------------------------------------------------------------------");
		printf("\n >> There are 2 rounds in this Quiz Game,WARMUP ROUND & CHALLANGE ROUND");
		printf("\n >> In warmup round you will be asked a total of 3 questions to test your");
		printf("\n    general knowledge. You are eligible to play the game if you give atleast 2");
		printf("\n    right answers, otherwise you can't proceed further to the Challenge Round.");
		printf("\n >> Your game starts with CHALLANGE ROUND. In this round you will be asked a");
		printf("\n    total of 10 questions. Each right answer will be awarded $100,000!");
		printf("\n    By this way you can win upto ONE MILLION cash prize!!!!!..........");
		printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
		printf("\n    right option.");
		printf("\n >> You will be asked questions continuously, till right answers are given");
		printf("\n >> No negative marking for wrong answers!");
		printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
		printf("\n\n\n Press Y  to start the game!\n");
		printf("\n Press any other key to return to the main menu!");
		if (toupper(getch())=='Y')
			{
				goto home;
			}
		else
			{
				goto mainhome;
				system("cls");
			}

     home:
		count=0;
		for(i=1;i<=3;i++)
		{
			system("cls");
			//  r1=i;
			r1=rand() % 6 +1;
			switch(r1)
				{
				case 1:
				printf("\n\nWhich of the following is a Palindrome number?");
				printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
				if (toupper(getch())=='C')
					{
						printf("\n\nCorrect!!!");count++;
						getch();
						break;
					}
				else
					{
						printf("\n\nWrong!!! The correct answer is C.23232");
						getch();
						break;
					}

				case 2:
				printf("\n\n\nThe country with the highest environmental performance index is...");
				printf("\n\nA.France\t\tB.Denmark\n\nC.Switzerland\t\tD.Finland");
				if (toupper(getch())=='C')
					{printf("\n\nCorrect!!!");count++;
					getch();
					break;}
				else
					{printf("\n\nWrong!!! The correct answer is C.Switzerland");
					getch();
					break;}

				case 3:
				printf("\n\n\nWhich animal laughs like human being?");
				printf("\n\nA.Polar Bear\t\tB.Hyena\n\nC.Donkey\t\tD.Chimpanzee");
				if (toupper(getch())=='B')
					{printf("\n\nCorrect!!!");
					count++;
					getch();
					break;}
				else
					{printf("\n\nWrong!!! The correct answer is B.Hyena");
					getch();
					break;
					}

				case 4:
				printf("\n\n\nWho was awarded the youngest player award in Fifa World Cup 2006?");
				printf("\n\nA.Wayne Rooney\t\tB.Lucas Podolski\n\nC.Lionel Messi\t\tD.Christiano Ronaldo");
				if (toupper(getch())=='B')
					{printf("\n\nCorrect!!!");count++;
					getch();
					break;}
				else
					{printf("\n\nWrong!!! The correct answer is B.Lucas Podolski");
					getch();
					break;}

				case 5:
				printf("\n\n\nWhich is the third highest mountain in the world?");
				printf("\n\nA.Mt. K2\t\tB.Mt. Kanchanjungha\n\nC.Mt. Makalu\t\tD.Mt. Kilimanjaro");
				if (toupper(getch())=='B')
					{printf("\n\nCorrect!!!");count++;
					getch();
						break;}
				else
					{printf("\n\nWrong!!! The correct answer is B.Mt. Kanchanjungha");
					getch();
					break;}

				case 6:
				printf("\n\n\nWhat is the group of frogs known as?");
				printf("\n\nA.A traffic\t\tB.A toddler\n\nC.A police\t\tD.An Army");
				if (toupper(getch())=='D' )
					{printf("\n\nCorrect!!!");count++;
					getch();
					break;}
				else
					{printf("\n\nWrong!!! The correct answer is D.An Army");
					getch();
					break;}}
		}

		if(count>=2)
		{goto test;}
		else
		{
			system("cls");
			printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
			getch();
			goto mainhome;
		}
		test:
		system("cls");
		printf("\n\n\t*** CONGRATULATION %s you are eligible to play the Game ***",playername);
		printf("\n\n\n\n\t!Press S key to Start the Game!");
		if(toupper(getch())=='s')
			{goto game;}
		game:
		countr=0;
		for(i=1;i<=10;i++)
		{
			system("cls");
		//  r=i;
			r = rand() % 23 +1;
			switch(r)
			{
				case 1:
				printf("\n\nWhat is the National Game of England?");
				printf("\n\nA.Football\t\tB.Basketball\n\nC.Cricket\t\tD.Baseball");
				if (toupper(getch())=='C')
					{printf("\n\nCorrect!!!");
					countr++;
					getch();
					break;
					//  getch();
					}
				else
					{printf("\n\nWrong!!! The correct answer is C.Cricket");
					getch();
					goto score;
					break;}

				case 2:
				printf("\n\n\nStudy of Earthquake is called............,");
				printf("\n\nA.Seismology\t\tB.Cosmology\n\nC.Orology\t\tD.Etimology");
				if (toupper(getch())=='A')
					{printf("\n\nCorrect!!!");
					countr++;
					getch();
					break;}
				else
					{printf("\n\nWrong!!! The correct answer is A.Seismology");getch();
					goto score;
					break;
					}

				case 3:
				printf("\n\n\nAmong the top 10 highest peaks in the world, how many lie in Nepal? ");
				printf("\n\nA.6\t\tB.7\n\nC.8\t\tD.9");
				if (toupper(getch())=='C')
					{printf("\n\nCorrect!!!");countr++;getch();
					break;}
				else
					{printf("\n\nWrong!!! The correct answer is C.8");getch();
					goto score;
					break;}

				case 4:
				printf("\n\n\nThe Laws of Electromagnetic Induction were given by?");
				printf("\n\nA.Faraday\t\tB.Tesla\n\nC.Maxwell\t\tD.Coulomb");
				if (toupper(getch())=='A')
					{printf("\n\nCorrect!!!");countr++;getch();
					break;}
				else
					{
						printf("\n\nWrong!!! The correct answer is A.Faraday");getch();
					goto score;
					break;
					}

				case 5:
				printf("\n\n\nIn what unit is electric power measured?");
				printf("\n\nA.Coulomb\t\tB.Watt\n\nC.Power\t\tD.Units");
				if (toupper(getch())=='B')
					{printf("\n\nCorrect!!!");countr++;getch(); break;}
				else
					{
						printf("\n\nWrong!!! The correct answer is B.Power");
					getch();
					goto score;
					break;
					}

				case 6:
				printf("\n\n\nWhich element is found in Vitamin B12?");
				printf("\n\nA.Zinc\t\tB.Cobalt\n\nC.Calcium\t\tD.Iron");
				if (toupper(getch())=='B' )
					{printf("\n\nCorrect!!!");countr++;getch();
					break;}
				else
					{printf("\n\nWrong!!! The correct answer is B.Cobalt");goto score;
					getch();
					break;}

				case 7:
				printf("\n\n\nWhat is the National Name of Japan?");
				printf("\n\nA.Polska\t\tB.Hellas\n\nC.Drukyul\t\tD.Nippon");
				if (toupper(getch())=='D')
					{printf("\n\nCorrect!!!");countr++;getch();
					break;}
				else
					{printf("\n\nWrong!!! The correct answer is D.Nippon");getch();
					goto score;
					break;}

				case 8:
				printf("\n\n\nHow many times a piece of paper can be folded at the most?");
				printf("\n\nA.6\t\tB.7\n\nC.8\t\tD.Depends on the size of paper");
				if (toupper(getch())=='B')
					{printf("\n\nCorrect!!!");countr++;getch(); break;}
				else
					{printf("\n\nWrong!!! The correct answer is B.7");
					getch();
					goto score;
					break;}

				case 9:
				printf("\n\n\nWhat is the capital of Denmark?");
				printf("\n\nA.Copenhagen\t\tB.Helsinki\n\nC.Ajax\t\tD.Galatasaray");
				if (toupper(getch())=='A')
					{printf("\n\nCorrect!!!");countr++; getch();
					break;}
				else
					{printf("\n\nWrong!!! The correct answer is A.Copenhagen");getch();
					goto score;
					break;}

				case 10:
				printf("\n\n\nWhich is the longest River in the world?");
				printf("\n\nA.Nile\t\tB.Koshi\n\nC.Ganga\t\tD.Amazon");
				if (toupper(getch())=='A')
					{printf("\n\nCorrect!!!");countr++;getch(); break;}
				else
					{printf("\n\nWrong!!! The correct answer is A.Nile");getch();break;goto score;}

				case 11:
				printf("\n\n\nWhat is the color of the Black Box in aeroplanes?");
				printf("\n\nA.White\t\tB.Black\n\nC.Orange\t\tD.Red");
				if (toupper(getch())=='C')
					{printf("\n\nCorrect!!!");countr++;getch();
					break;}
				else
					{printf("\n\nWrong!!! The correct answer is C.Orange");getch();
					break;goto score;}

				case 12:
				printf("\n\n\nWhich city is known at 'The City of Seven Hills'?");
				printf("\n\nA.Rome\t\tB.Vactican City\n\nC.Madrid\t\tD.Berlin");
				if (toupper(getch())=='A')
					{printf("\n\nCorrect!!!");countr++;getch();
					break;}
				else
					{printf("\n\nWrong!!! The correct answer is A.Rome");getch();
					break;goto score;}

				case 13:
				printf("\n\n\nName the country where there no mosquitoes are found?");
				printf("\n\nA.Japan\t\tB.Italy\n\nC.Argentina\t\tD.France");
				if (toupper(getch())=='D')
					{printf("\n\nCorrect!!!");countr++;getch();
					break;}
				else
					{printf("\n\nWrong!!! The correct answer is D.France");getch();
					break;goto score;}

				case 14:
				printf("\n\n\nWho is the author of 'Pulpasa Cafe'?");
				printf("\n\nA.Narayan Wagle\t\tB.Lal Gopal Subedi\n\nC.B.P. Koirala\t\tD.Khagendra Sangraula");
				if (toupper(getch())=='A')
					{printf("\n\nCorrect!!!");countr++;getch();
					break;}
				else
					{printf("\n\nWrong!!! The correct answer is A.Narayan Wagle");getch();
					break;goto score;}

				case 15:
				printf("\n\n\nWhich Blood Group is known as the Universal Recipient?");
				printf("\n\nA.A\t\tB.AB\n\nC.B\t\tD.O");
				if (toupper(getch())=='B')
					{printf("\n\nCorrect!!!");countr++;getch();
					break;}
				else
					{printf("\n\nWrong!!! The correct answer is B.AB");getch();
					goto score;
					break;}

				case 16:
				printf("\n\n\nWhat is the unit of measurement of distance between Stars?");
				printf("\n\nA.Light Year\t\tB.Coulomb\n\nC.Nautical Mile\t\tD.Kilometer");
				if (toupper(getch())=='A')
					{printf("\n\nCorrect!!!");countr++; getch();
					break;
					}
				else
					{printf("\n\nWrong!!! The correct answer is A.Light Year");getch();
					goto score;
					break;}


				case 17:
				printf("\n\n\nThe country famous for Samba Dance is........");
				printf("\n\nA.Brazil\t\tB.Venezuela\n\nC.Nigeria\t\tD.Bolivia");
				if (toupper(getch())=='A')
					{printf("\n\nCorrect!!!");countr++; getch();
					break;}
				else
					{printf("\n\nWrong!!! The correct answer is A.Brazil");getch();goto score;
					break;}

				case 18:
				printf("\n\n\nWind speed is measure by__________?");
				printf("\n\nA.Lysimeter\t\tB.Air vane\n\nC.Hydrometer\t\tD.Anemometer\n\n");
				if (toupper(getch())=='D')
					{printf("\n\nCorrect!!!");countr++; getch();
					break;}
				else
					{printf("\n\nWrong!!! The correct answer is D.Anemometer");getch();goto score;
					break;}

				case 19:
				printf("\n\n\nWhich city in the world is popularly known as The City of Temple?");
				printf("\n\nA.Delhi\tB.Bhaktapur\n\nC.Kathmandu\tD.Agra\n\n");
				if (toupper(getch())=='C')
					{printf("\n\nCorrect!!!");countr++; getch();
					break;}
				else
					{printf("\n\nWrong!!! The correct answer is C.Kathmandu");getch();goto score;
					break;}

				case 20:
				printf("\n\n\nWhich hardware was used in the First Generation Computer?");
				printf("\n\nA.Transistor\t\tB.Valves\n\nC.I.C\t\tD.S.S.I");
				if (toupper(getch())=='B')
					{printf("\n\nCorrect!!!");countr++; getch();
					break;}
				else
					{printf("\n\nWrong!!! The correct answer is B.Valves");getch();goto score;
					break;}

				case 21:
				printf("\n\n\nOzone plate is being destroyed regularly because of____ ?");
				printf("\n\nA.L.P.G\t\tB.Nitrogen\n\nC.Methane\t\tD. C.F.C");
				if (toupper(getch())=='D')
					{printf("\n\nCorrect!!!");countr++; getch();
					break;}
				else
					{printf("\n\nWrong!!! The correct answer is D. C.F.C");getch();goto score;
					break;}

				case 22:
				printf("\n\n\nWho won the Women's Australian Open Tennis in 2007?");
				printf("\n\nA.Martina Hingis\t\tB.Maria Sarapova\n\nC.Kim Clijster\t\tD.Serena Williams");
				if (toupper(getch())=='D')
					{printf("\n\nCorrect!!!");countr++; getch();
					break;}
				else
					{printf("\n\nWrong!!! The correct answer is D.Serena Williams");getch();goto score;
					break;}

				case 23:
				printf("\n\n\nWhich film was awarded the Best Motion Picture at Oscar in 2010?");
				printf("\n\nA.The Secret in their Eyes\t\tB.Shutter Island\n\nC.The King's Speech\t\tD.The Reader");
				if (toupper(getch())=='C')
					{printf("\n\nCorrect!!!");countr++; getch();
					break;}
				else
					{printf("\n\nWrong!!! The correct answer is C.The King's Speech");getch();goto score;
					break;}
			}
		}
	score:
    system("cls");
	score=(float)countr*100000;
	if(score>0.00 && score<1000000)
	{
	   printf("\n\n\t\t**************** CONGRATULATION *****************");
	     printf("\n\t You won $%.2f",score);goto go;}

	 else if(score==1000000.00)
	{
	    printf("\n\n\n \t\t**************** CONGRATULATION ****************");
	    printf("\n\t\t\t\t YOU ARE A MILLIONAIRE!!!!!!!!!");
	    printf("\n\t\t You won $%.2f",score);
	    printf("\t\t Thank You!!");
		goto go;
	}
	 else
    {
	 printf("\n\n\t******** SORRY YOU DIDN'T WIN ANY CASH ********");
	    printf("\n\t\t Thanks for your participation");
	    printf("\n\t\t TRY AGAIN");goto go;}

	go:
	puts("\n\n Press Y if you want to play next game");
	puts(" Press any key if you want to exit the game");

	if (toupper(getch())=='Y')
		goto home;
	else
		{
			Beep(750,500);
			return ;
		// goto mainhome;
		}
	}
}

void help()
{
// 	system("cls");
    printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n ......................... C program Quiz Game...........");
    printf("\n >> There are two rounds in the game, WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 3 questions to test your general");
    printf("\n    knowledge. You will be eligible to play the game if you can give atleast 2");
    printf("\n    right answers otherwise you can't play the Game...........");
    printf("\n >> Your game starts with the CHALLANGE ROUND. In this round you will be asked");
    printf("\n    total 10 questions each right answer will be awarded $100,000.");
    printf("\n    By this way you can win upto ONE MILLION cash prize in USD...............");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option");
    printf("\n >> You will be asked questions continuously if you keep giving the right answers.");
    printf("\n >> No negative marking for wrong answers");

	printf("\n\n\t*********************BEST OF LUCK*********************************");
	printf("\n\n\t*****C PROGRAM QUIZ GAME is developed by CODE WITH C TEAM********");
}
int main()
{
    int num, nguesses=1, userChoice,compChoice;
	char game_number;
    int guess;
	system("cls");
    srand(time(0));  
	// system("cls");
    do{
		system("cls");
        printf("\n\n\t\t\t\t=========*Choose the Game*===========\n");
		printf("\n\t\tPlease select the option: \n");
        printf("\t\t1. Guess the Number \n");
        printf("\t\t2. Rock,Paper,Scissor\n");
		printf("\t\t3. Quiz\n");
        printf("\t\t4. exit \n\n");
		printf("\t\t\t");
		fflush(stdin);
		game_number = getchar();
        if(game_number=='1')
        {
        
			num = rand() % 50 +1;
            guess_no(num,nguesses);
        }
        else if(game_number=='2')
        {
           
            compChoice = (rand() % 3) + 1;
            checkOptions(compChoice);
        } 
		else if(game_number=='3')
		{
			system("cls");
			printf("\n\t\t\t\t   WELCOME ");
			printf("\n\t\t\t\t=====*to*======");
			printf("\n\t\t\t\t   THE GAME ");
			printf("\n\t\t________________________________________");
			printf("\n\t\t________________________________________");
			printf("\n\t\t   BECOME A MILLIONAIRE!!!!!!!!!!!    ") ;
			printf("\n\t\t________________________________________");
			printf("\n\t\t________________________________________");
			quiz();
		} 
        else if(game_number>3 || game_number<=9)
        {

            Beep(750,500);       	
        }
        else
        {
        	Beep(900,500);       	
		}

    }while(game_number!='4');
	return 0;
}

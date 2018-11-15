#include <iostream>
using namespace std;
int translateToPigLatin(char str[500])
{
	int i, j;
	int answer = 0;
	char initial;
	char exception1[] = "the";
	char exception2[] = "and"; 
	char exception3[] = "but"; 
	char exception4[] = "for"; 
	char exception5[] = "nor"; 
	char exception6[] = "yet";
	char exception11[] = "THE";
	char exception22[] = "AND";
	char exception33[] = "BUT";
	char exception44[] = "FOR";
	char exception55[] = "NOR";
	char exception66[] = "YET";
	char word[4]="ran";
	int a = 0;
	for (i = 0; i <= 500; i++)
	{
		if (str[i] >= 48 && str[i] <= 57)
		{
			answer = -1;
			
			break;
		}//if word start w/ num, break
		if (str[i] == '\0')
		{
			if (i==0)
			{
				answer = -1;
			}
			else
			{
				answer = 0;
			}
			break;
		} //if phrase is end, break the loop.
		
		for (j = i + 1; j <= 500; j++)
		{

			if (str[j] == ' ' || str[j]=='\0')
			{
				break;
			}
			
		}//i to j is 1 word
		//following statement should return 'as is' ex: ab ab -> output : ab ab
		if ((j - i) < 3)
		{
			for (i; i < j; i++)
			{
				cout << str[i];
			}/*printout word btw i to j*/
		}//if the word is less than 3 letter word, just print without translating.
		else if ((j - i) >= 3)
		{
			for (a = 0; a < 3; a++)
			{
				word[a] = str[i + a];
			}
			if (strcmp(word, exception1) == 0 || strcmp(word, exception11) == 0)
			{
				for (i; i < j; i++)
				{
					cout << str[i];
				}/*printout word btw i to j*/
			}
			else if (strcmp(word, exception2) == 0|| strcmp(word, exception22) == 0)
			{
				for (i; i < j; i++)
				{
					cout << str[i];
				}/*printout word btw i to j*/
			}
			else if (strcmp(word, exception3) == 0 || strcmp(word, exception33) == 0)
			{
				for (i; i < j; i++)
				{
					cout << str[i];
				}/*printout word btw i to j*/
			}
			else if (strcmp(word, exception4) == 0 || strcmp(word, exception44) == 0)
			{
				for (i; i < j; i++)
				{
					cout << str[i];
				}/*printout word btw i to j*/
			}
			else if (strcmp(word, exception5) == 0 || strcmp(word, exception55) == 0)
			{
				for (i; i < j; i++)
				{
					cout << str[i];
				}/*printout word btw i to j*/
			}
			else if (strcmp(word, exception6) == 0)
			{
				for (i; i < j; i++)
				{
					cout << str[i];
				}/*printout word btw i to j*/
			}
			else
			{
				if (str[i] == 'a' || str[i] == 'e' || str[i] == 'o' || str[i] == 'i' || str[i] == 'u')
				{
					for (i; i < j; i++)
					{
						cout << str[i];
					}/*printout word btw i to j*/
				}

				else if (str[i] == 'A' || str[i] == 'E' || str[i] == 'O' || str[i] == 'I' || str[i] == 'U')
				{
					for (i; i < j; i++)
					{
						cout << str[i];
					}/*printout word btw i to j*/
				}
				else
				{
					initial = str[i]; /*remember first letter*/
					for (i = i + 1; i < j; i++)
					{
						cout << str[i];
					}/*printout word btw 2nd letter to j*/
					cout << initial;					
				}
				cout << "ay";
			}
		}
		else if ((j - i) > 3)
		{
			if (str[i] == 'a' || str[i] == 'e' || str[i] == 'o' || str[i] == 'i' || str[i] == 'u')
			{
				for (i; i < j; i++)
				{
					cout << str[i];
				}/*printout word btw i to j*/
			}

			else if (str[i] == 'A' || str[i] == 'E' || str[i] == 'O' || str[i] == 'I' || str[i] == 'U')
			{
				for (i; i < j; i++)
				{
					cout << str[i];
				}/*printout word btw i to j*/
			}
			else
			{
				initial = str[i]; /*remember first letter*/
				for (i = i + 1; i < j; i++)
				{
					cout << str[i];
				}/*printout word btw 2nd letter to j*/
				cout << initial;
			}
			cout << "ay";
		}//print w/ rule. by vowel start or not


		i = j;
		if (str[i] == '\0')
		{
			if (i == 0)
			{
				answer = -1;
			}
			else
			{
				answer = 0;
			}
			break;
		}
		cout << ' ';
	}
	cout << endl;
	return answer;
}


int main()
{
	char retry;
	do
	{
		char phrase[500];
		int i;
		int answer=0;
		cin.getline(phrase, 500);
		answer = translateToPigLatin(phrase);
		if (answer == -1)
		{
			cout << "---error ! ---" << endl;
			cout << answer << endl;
		}
		else
		{
			cout << answer << endl;
		}
		cout << "Play again? enter 'Y'" << endl;
		cin >> retry;
		cin.ignore();
		cin.clear();
	} while ((retry == 'Y') || (retry == 'y'));
	return 0;
	
}
/*
cin.getline(answer,2);

}while(strcomp(answer==,"y")==0|| strcomp(answer,"Y")==0)*/
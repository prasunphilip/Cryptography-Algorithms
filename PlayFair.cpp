#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char text[30],first_letter,second_letter,first_letter_cipher,second_letter_cipher,cipher_text[30];
	int i,j,m,n,text_length,column_index_of_first_letter,row_index_of_first_letter,column_index_of_second_letter,row_index_of_second_letter,cipher_text_counter=0;
	const char key[5][5] = {
    {'P', 'L', 'A', 'Y', 'F'},
    {'I', 'R', 'B', 'C', 'D'},
    {'E', 'G', 'H', 'K', 'M'},
    {'N', 'O', 'Q', 'S', 'T'},
    {'U', 'V', 'W', 'X', 'Z'}
	};
	cout<<"Enter the text : (without spaces and in uppercase)\n";
	cin>>text;
	text_length = strlen(text);
	for(i = 0 ; i < text_length - 1 ; i++)
	{
		if(text[i] == text[i+1])
		{
			for(j = text_length ; j > i + 1 ; j--)
			{
				text[j] = text[j-1];
			}
			text[i+1] = 'X';
			text_length++;
		}
	}
	if(text_length % 2 != 0)
		text[text_length++] = 'X';
	for(i = 0 ; i < text_length ; i = i + 2)
	{
		first_letter = text[i];
		second_letter = text[i+1];
		for(m = 0; m < 5 ; m++)
		{
			for(n = 0; n < 5 ; n++)
			{
				if(first_letter == key[m][n])
				{
					column_index_of_first_letter = m;
					row_index_of_first_letter = n;
				}
				if(second_letter == key[m][n])
				{
					column_index_of_second_letter = m;
					row_index_of_second_letter = n;
				}
			}
		}
		if(column_index_of_first_letter == column_index_of_second_letter)//for alphabets in same row
		{
			if(row_index_of_first_letter + 1 == 5)
				row_index_of_first_letter = -1;
				
			if(row_index_of_second_letter + 1 == 5)
				row_index_of_second_letter = -1;
				
			first_letter_cipher = key[column_index_of_first_letter][row_index_of_first_letter+1];	
			second_letter_cipher = key[column_index_of_second_letter][row_index_of_second_letter+1];
		}
		else if(row_index_of_first_letter == row_index_of_second_letter)//for alphabets in same column
		{
			if(column_index_of_first_letter + 1 == 5)
				column_index_of_first_letter = -1;
				
			if(column_index_of_second_letter + 1 == 5)
				column_index_of_second_letter = -1;
				
			first_letter_cipher = key[column_index_of_first_letter+1][row_index_of_first_letter];			
			second_letter_cipher = key[column_index_of_second_letter+1][row_index_of_first_letter];
		}
		else
		{
			first_letter_cipher = key[column_index_of_first_letter][row_index_of_second_letter];		
			second_letter_cipher = key[column_index_of_second_letter][row_index_of_first_letter];
		}
		cipher_text[cipher_text_counter++] = first_letter_cipher;
		cipher_text[cipher_text_counter++] = second_letter_cipher;
	}
	cout<<endl;
	cout<<"String Text : ";
	for(i = 0 ; i < text_length ; i++)
	{
		if(i % 2 == 0)
			cout<<" ";
		cout<<text[i];
	}
	cout<<endl;
	cout<<"Cipher Text : ";
	for(i = 0 ; i < cipher_text_counter ; i++)
	{
		if(i % 2 == 0)
			cout<<" ";
		cout<<cipher_text[i];
	}
	return 0;
}

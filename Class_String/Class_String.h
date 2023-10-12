#pragma once

class String
{
private:

	char* mString;
	int mLength;

public:
	String ()
	{
		mLength = 0;
		mString = new char[mLength];
	
	}

	String (int x)
	{
		mLength = x;
		mString = new char[mLength];		
	}

	String(const char* word) : mString{}, mLength{}
	{
		while (word[mLength] != '\0')
		{
			mLength++;
		}

		mString = new char[mLength + 1];

		for (int i = 0; i < mLength;i++)
		{
			mString[i] = word[i];
		}
	}

	String(String* string)
	{

	}


	void Print(String x);
};
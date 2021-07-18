//Given a string text of words separated by a single space (no leading or trailing spaces) and a string brokenLetters of all distinct letter keys that are broken, 
//return the number of words in text you can fully type using this keyboard.

class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        	int cnt =0, res =0;
	for (int i=0; i<text.length(); i++) 
	{
		for (int j=0; j<brokenLetters.length(); j++)
		{
			if (text[i]==brokenLetters[j]) 
				cnt=1;
		}
		if (text[i]==' ' || i==text.length()-1)
		{
			if (cnt==0) res++;
			else cnt=0;
		}
	}
	return res; 
    }
};

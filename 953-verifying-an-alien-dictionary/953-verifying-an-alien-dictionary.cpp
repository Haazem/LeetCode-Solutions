class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        	int n = words.size();
	if(n == 1)
		return true;

	int arr[26] ;
	for (int i = 0 ; i < 26 ; i ++)
	{
		//store letters in arr
		arr[order[i] - 97] = i ;
	}

	for (int i = 0 ; i < n - 1; i ++ )
	{
		int len1 = words[i].size();
		int len2 = words[i+1].size();

		int mn = 0 ;
		while(mn < len1 && mn < len2)
		{
			//find value of char
			int x = arr[words[i][mn] - 97];
			int y = arr[words[i+1][mn] - 97];

			if(x < y)
			{
				len1 = len2 ;
				break;
			}
			else if (x > y)
			{
				return false ;
			}
			mn ++;

		}
		if(len1 > len2)
		{
			return false ;
		}
	}


return true;
    }
};
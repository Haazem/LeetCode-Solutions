class Solution {
public:
    int toBin(int x)
{
	int count = 0 ;
	while(x > 0 )
	{
		int y = x % 2;
		x /= 2 ;
		if(y == 1)
			count ++;
	}

	return count ;
}


static bool sort_func(const pair<int , int > &p1 , const pair<int , int> &p2 )
{
	if (p1.second == p2.second)
	{
		return p1.first < p2.first;
	}
	else
		return p1.second < p2.second;

}
    
    
    vector<int> sortByBits(vector<int>& arr) {
       
         int n = arr.size();
    vector<pair<int,int>> v(n) ;

    for (int i = 0 ; i < n ; i ++ )
    {
    	v[i].first = arr[i];
    	v[i].second = toBin(arr[i]);
    }



    sort(v.begin() , v.end() , sort_func);

    vector<int> ans ;
    for (int i = 0 ; i < n ; i ++ )
    {
    	ans.push_back(v[i].first);
    }

    return ans;
        
    }
};
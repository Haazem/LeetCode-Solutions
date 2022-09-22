class Solution {
public:
    
 static   bool my_sort(pair<int , int>& p1, pair<int , int>& p2 ){

	return p1.second >= p2.second;

      }


    vector<int> topKFrequent(vector<int>& nums, int k) {
        
	vector<int> ans ;
	map<int , int>m;

	for(int i = 0 ; i < (int)nums.size() ; i++){
		m[nums[i]] ++;
	}

	vector<pair<int , int>> l ;
	for (auto i : m){
		l.push_back({i.first , i.second});
	}

	sort(l.begin(),l.end() , my_sort);
	for(int i = 0 ; i < k ; i ++){
		ans.push_back(l[i].first);
	}

	return ans;
    }
};
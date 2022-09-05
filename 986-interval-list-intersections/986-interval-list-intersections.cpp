class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        
	sort(firstList.begin() , firstList.end());
	sort(secondList.begin() , secondList.end());
	int n = firstList.size();
	int m = secondList.size();

	vector<vector<int>> ans ;

	int p1 = 0 ,p2 = 0 ;
	while (p1 < n && p2 < m ){

		vector<int> temp ;
		//e2 >= s1 && e1 >= s2
		if(secondList[p2][1] >= firstList[p1][0] && firstList[p1][1] >= secondList[p2][0]){
			int mx = max(firstList[p1][0] , secondList[p2][0]);
			int mn = min(firstList[p1][1] , secondList[p2][1]);
			temp = {mx , mn};
			ans.push_back(temp);
		}
		if (firstList[p1][1] < secondList[p2][1]){
				p1++;
			} else {
				p2++;
			}
	}
	
	return ans;
    }
};
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
        
        		int m = (int)flowerbed.size();

		if(n == 0)return true;
		if(m == 1){
			if(n == 1 && flowerbed[0] == 0)
				return true;
			return false;
		}


		if(flowerbed[0] == 0 && flowerbed[1] == 0)
		{
			flowerbed[0] = 1;
			n--;
		}


		for(int i = 1 ; i < m-1 ; i ++){
		if(n == 0) break;

		if(flowerbed[i] == 0 && flowerbed[i-1] == 0 && flowerbed[i+1] == 0 ){
			flowerbed[i] = 1;
			n --;

		   }

		}

		if(n > 0 && flowerbed[m-1] == 0 && flowerbed[m-2] == 0){
			flowerbed[m-1] = 1;
			n--;
		}

		if(n == 0)
			return true;
		return false;
        
    }
};
class ParkingSystem {
public:
   int big_type;
	int med_type;
	int small_type;
    ParkingSystem(int big, int medium, int small) {
        big_type = big ;
        med_type = medium;
        small_type = small;
    }
    
    bool addCar(int carType) {
        if(carType == 1 && big_type > 0 )
        {
        	big_type --;
        	return true;
        }
        else if (carType == 2 && med_type > 0 )
        {
        	med_type --;
        	return true;
        }
        else if (carType == 3 && small_type > 0 )
        {
        	small_type --;
        	return true;
        	
        }
        else 
        	return false ;
        	
    }

};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
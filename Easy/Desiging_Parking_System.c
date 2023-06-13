typedef struct { // regrouping 3 types of car
    int bigCars;
    int mediumCars;
    int smallCars;
} ParkingSystem;


ParkingSystem* parkingSystemCreate(int big, int medium, int small) { //assigning number of car for each type assuming the max of each one
    ParkingSystem *test= malloc(sizeof(ParkingSystem));
    test->bigCars=big;
    test->mediumCars=medium;
    test->smallCars=small;
    return test;
}

bool parkingSystemAddCar(ParkingSystem* obj, int carType) { // checking if the capacity is good for the incoming car
    switch(carType){
        case 1:
            if (obj->bigCars<=0){
                return false;
            } 
            obj->bigCars -=1;

            break;
        case 2:
            if (obj->mediumCars<=0){
                return false;
            }
            obj->mediumCars -=1;
            break;
        case 3:
            if (obj->smallCars<=0){
                return false;
            }
            obj->smallCars -=1;
            break;
    }
    return true;
}

void parkingSystemFree(ParkingSystem* obj) {
    free(obj);
}


/**
 * Your ParkingSystem struct will be instantiated and called as such:
 * ParkingSystem* obj = parkingSystemCreate(big, medium, small);
 * bool param_1 = parkingSystemAddCar(obj, carType);
 
 * parkingSystemFree(obj);
*/
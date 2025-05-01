#include <iostream>
using namespace std;

class Segitiga{
    private:
    float HitungLuasSegitiga(float x, float y)
    {
        return  (x * y)/ 2; 
    }

    float HitungKelilingSegitiga(float z)
    {
        return z * 3; 
    }
};
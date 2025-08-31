/*Divneev Singh
24070123043
ENTC A2*/


#include <iostream>
using namespace std;

class cuboid{
    float len;
    float wid;
    float ht;

    public:
    cuboid();
    void volume();
};
cuboid::cuboid(){
    cout<<"Enter the length: ";
    cin>>len;
    cout<<"Enter the width: ";
    cin>>wid;
    cout<<"Enter the height: ";
    cin>>ht;
}
void cuboid::volume(){
    cout<<"Volume of the cuboid is: "<<len*wid*ht<<endl;
}
int main(){
    cuboid c1;
    c1.volume();
    return 0;
}

/*Output
Enter the length: 20
Enter the width: 20
Enter the height: 30
Volume of the cuboid is: 12000
*/

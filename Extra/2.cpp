#include  <iostream>
using namespace std;
 
class Distance
{
    private:
        int km;
        int m;
    public:
             Distance (); //Constructor
        void getDist  ();
        void showDist ();
        Distance addDist( Distance d2 );
        Distance subDist( Distance d2 );
};
 
Distance:: Distance ()
{
    km = 0; m = 0;
}
 
void Distance:: getDist()
{
    cout << "Enter Value of km : "; cin >> km;
    cout << "Enter value of m : "; cin >> m;
     
    m = (m >= 1000) ? 1000 : m;
}
 
void Distance:: showDist()
{
    cout << endl << "\tKm : " << km;
    cout << endl << "\tm: " << m;
}
 
 
Distance Distance:: addDist( Distance d2 )
{
    Distance temp;
 
    temp.km = km + d2.km;
    temp.m = m + d2.m;
 
    if( temp.m >= 12)
    {
        temp.km++;
        temp.m -= 12;        
    }
    return temp;    
}
 
Distance Distance:: subDist( Distance d2 )
{
    Distance temp;
 
    temp.km = km - d2.km;
    temp.m = m - d2.m;
 
    if( temp.m < 0 )
    {
        temp.km--;
        temp.m = 12 + temp.m;     
    }
    return temp;    
}
 
int main()
{
    Distance d1;
    Distance d2;
    Distance d3;
    Distance d4;
 
    cout << "Enter Distance1 : " << endl;
    d1.getDist();
     
    cout << "Enter Distance2 : " << endl;
    d2.getDist();
 
    d3 = d1.addDist(d2);
    d4 = d1.subDist(d2);
 
    cout << endl << "Distance1 : " ;
    d1.showDist();
 
    cout << endl << "Distance2 : " ;
    d2.showDist();
 

 
    cout << endl;         
    return 0;
}
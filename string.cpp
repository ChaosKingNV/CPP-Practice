#include<iostream>
#include<vector>

class Position
{
    public:
        int x;
	    int y;
};

int main()
{
    Position pos;
    pos.x = 10;
    pos.y = 11;
    std::vector<Position> cordinates;
    cordinates.push_back(pos);

    std::cout << cordinates[0].x << "," << cordinates[0].y << std::endl;

    return 0;
}

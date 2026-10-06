#ifndef CLASSROOM_H
#define CLASSROOM_H

class Classroom
{
private:
    int room;
    int capacity;

public:
    void setRoom(int r)
    {
        room=r;
    }
    void setCapacity(int c)
    {
        capacity=c;
    }

    int getRoom()
    {
        return room;
    }
    int getCapacity()
    {
        return capacity;
    }
};


#endif // CLASSROOM_H

#ifndef BURRITO_H
#include<string>

#define BURRITO_H

class burrito
{
    public:
        burrito(string z);
        void setname(string z)
        {
            name=z;
        }
        string getname()
        {
            return name;
        }
    private:
        string name;
        

};
#endif // BURRITO_H

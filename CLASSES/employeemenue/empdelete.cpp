#include<iostream>
#include<string.h>
using namespace std;
class Empl{
    
    public:
    int id,price;
    char name[10];
    void setData(int id,char name[],int price){

        this->price=price;
        this->id=id;
        strcpy(this->name,name);
    }
    int getId(){
        return id;
    }
};
class Comp{

     public:
     Empl *e;
     int size;
     void setEmp(Empl e[],int size){
        this->e=e;
        this->size=size;
     }   
     void isDelete(int id)
     {
        for(int i=0;i<size;i++){

                if(e[i].getId()==id)
                {
                    --size;
                    for(int j=i;j<size;j++)
                    {
                        e[j]=e[j+1];
                    }
                }
        }
        for(int i=0;i<size;i++){

               cout<<e[i].id<<"\t"<<e[i].price<<"\t"<<e[i].name;
        }
     }
};
int main(){

    Empl ee[3];
    ee[0].setData(11,"abc",53);
    ee[1].setData(22,"xyz",99);
    ee[2].setData(55,"ajay",88);
    Comp c;
    c.setEmp(ee,3);
    c.isDelete(22);
    return 0;
}
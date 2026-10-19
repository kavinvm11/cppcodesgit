//class methods
//there are two ways to define it(inside class or outside class)
#include<iostream>
//inside class
class path_1{      
    public:
        void method_1(){
            std::cout<<"helllo"<<'\n';
        }
};


//outside class
class path_2{       
    public:
        void method_2();
};
void path_2::method_2(){        //use :: between class and method
    std::cout<<"world"<<'\n';
}


int main()
{
    path_1 obj_1;
    path_2 obj_2;
    obj_1.method_1();
    obj_2.method_2();
    return 0;
}
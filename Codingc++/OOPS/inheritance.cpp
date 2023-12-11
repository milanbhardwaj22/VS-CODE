    #include<iostream>
    using namespace std ;
    class parent1 {
    public :
    parent1 ()
    {
        cout<< "parent class" << endl;
    }
    };
    class parent2 {
    public :
    parent2 ()
    {
        cout<< "parent class" << endl;
    }
    };


    class child : public parent1, public parent2{
    public :
    child(){
        cout << "child class" << endl;
    }
    };
    class grandchild : public child{
        public :
        grandchild()
        {
            cout << "grandchild" << endl;
        }
    };

    int main()
    {
        grandchild gc;
    }

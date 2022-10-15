
class A1
{

    int x = 10;
    int y= 15;
    void display(){
        System.out.println("A1");
    }
    void display1(){
        System.out.println("accessing method of base class by created object is allowed but u when there is same variable in both parent and child class then parent class variable is accessible we cannot access variable of child i.e base class.");
    }
}


class B1 extends A1
{
    int x = 20;
    int z = 25;
    void display(){
        System.out.println("B1");
    }
    void display2(){
        System.out.println("not allowed by object a");
    }
}


public class DynamicMethodDispatch
{
    public static void main(String[] args)
    {
        A1 a = new B1(); // object of type B

        // Data member of class A will be accessed
        System.out.println(a.x);
        System.out.println(a.y);
        //System.out.println(a.z);// not allowed

        a.display();
        a.display1();
        //a.display2();-------> not allowed
    }
}

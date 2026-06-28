interface Test {
    int square(int n);
}

class Arithmetic implements Test {
    public int square(int n) {
        return n * n;
    }
}


class Outer {
    void display() {
        System.out.println("This is Outer class");
    }

    class Inner {
        void display() {
            System.out.println("This is Inner class");
        }
    }
}


class Point {
    private int x;
    private int y;

    Point() {
        x = 0;
        y = 0;
    }

    Point(int x, int y) {
        this.x = x;
        this.y = y;
    }

    void setX(int x) {
        this.x = x;
    }

    void setY(int y) {
        this.y = y;
    }

    void setXY(int x, int y) {
        this.x = x;
        this.y = y;
    }

    void display() {
        System.out.println("Point = (" + x + "," + y + ")");
    }
}


class Box {
    int length;
    int breadth;

    Box(int l, int b) {
        length = l;
        breadth = b;
    }

    int area() {
        return length * breadth;
    }
}

class Box3D extends Box {
    int height;

    Box3D(int l, int b, int h) {
        super(l, b);
        height = h;
    }

    int volume() {
        return length * breadth * height;
    }
}


public class Assignment {

    public static void main(String[] args) {

        // Question 1
        System.out.println("Question 1:");
        Arithmetic a = new Arithmetic();
        System.out.println("Square = " + a.square(5));


        // Question 2
        System.out.println("\nQuestion 2:");
        Outer o = new Outer();
        o.display();

        Outer.Inner i = o.new Inner();
        i.display();


        // Question 3
        System.out.println("\nQuestion 3:");
        Point p = new Point();
        p.setXY(10, 20);
        p.display();


        // Question 4
        System.out.println("\nQuestion 4:");
        Box b = new Box(5, 4);
        System.out.println("Area = " + b.area());

        Box3D b3 = new Box3D(5, 4, 3);
        System.out.println("Volume = " + b3.volume());
    }
}

#include<string>
#include"Canvas.h"
#include"Circle.h"
#include"ExponentialFunction.h"
#include"Graph.h"
#include"LogarithmFunction.h"
#include"PolynomialFunction.h"
#include"Square.h"
#include"Triangle.h"
#include"TrigonometricFunction.h"

int main()
{
    bool isRunning=true;
    while(isRunning)
    {
        ///This is an example program showing the different possibilities of graphs and shapes that one can possibly draw.
        ///This program is open to expansion and possible refactoring.

        ///This is a set that will store the points of two filled triangles and draw the triangles on a canvas.
        std::set<Point> triangleSet;

        ///Points for first triangle.
        triangleSet.insert(Point(5, 11));///Draws a triangle, can be called recursively if implemented correctly. Row 0
        triangleSet.insert(Point(6, 10));///Row 1.
        triangleSet.insert(Point(6, 12));
        triangleSet.insert(Point(7, 9));///Row 2.
        triangleSet.insert(Point(7, 11));
        triangleSet.insert(Point(7, 11));
        triangleSet.insert(Point(7, 13));
        triangleSet.insert(Point(8, 8));///Row 3.
        triangleSet.insert(Point(8, 10));
        triangleSet.insert(Point(8, 10));
        triangleSet.insert(Point(8, 12));
        triangleSet.insert(Point(8, 10));
        triangleSet.insert(Point(8, 12));
        triangleSet.insert(Point(8, 12));
        triangleSet.insert(Point(8, 14));

        ///Points for second triangle.
        triangleSet.insert(Point(20, 11));///Draws a triangle, can be called recursively if implemented correctly. Row 0
        triangleSet.insert(Point(21, 10));///Row 1.
        triangleSet.insert(Point(21, 12));
        triangleSet.insert(Point(22, 9));///Row 2.
        triangleSet.insert(Point(22, 11));
        triangleSet.insert(Point(22, 11));
        triangleSet.insert(Point(22, 13));
        triangleSet.insert(Point(23, 8));///Row 3.
        triangleSet.insert(Point(23, 10));
        triangleSet.insert(Point(23, 10));
        triangleSet.insert(Point(23, 12));
        triangleSet.insert(Point(23, 10));
        triangleSet.insert(Point(23, 12));
        triangleSet.insert(Point(23, 12));
        triangleSet.insert(Point(23, 14));

        Canvas canvas1;
        canvas1.draw(triangleSet);
        canvas1.show();

        ///This example will draw various built-in shapes on a canvas in an attempt to make a picture out of them.
        Canvas canvas2;
        canvas2.draw(Square(5, 5, Point(canvas2.getCenter().getX()-8, canvas2.getCenter().getY()-7)));
        canvas2.draw(Square(5, 5, Point(canvas2.getCenter().getX()-8, canvas2.getCenter().getY())));
        canvas2.draw(Triangle(5, Point(canvas2.getCenter().getX()-8, canvas2.getCenter().getY()-5)));
        canvas2.draw(Circle(2, Point(canvas2.getCenter().getX(), canvas2.getCenter().getY()-5)));
        canvas2.draw(Circle(10, Point(canvas2.getCenter().getX()-5, canvas2.getCenter().getY()-5)));
        canvas2.show();

        ///This example will show some graph example with the tangent function
        Graph graph1;
        Function* f=new TangentFunction();
        graph1.draw(*f);
        graph1.show();

        ///This example will show the same graph being used to draw the polynomial function 10/x
        delete f;
        f=NULL;
        f=new PolynomialFunction(Polynomial(Term(10, -1)));
        graph1.clearContents();
        graph1.draw(*f);
        graph1.show();

        ///This example will show the same graph being used to draw the exponential (e^x) and logarithm (ln(x)) functions.
        delete f;
        f=NULL;
        f=new ExponentialFunction();

        Function* f2=new LogarithmFunction();

        graph1.clearContents();
        graph1.draw(*f);
        graph1.draw(*f2);
        graph1.show();

        ///This final example will show a random drawing on a canvas.
        Canvas canvas3;
        canvas3.draw();
        canvas3.show();

        delete f;
        f=NULL;

        delete f2;
        f2=NULL;

        std::cout<<"\n"<<std::endl;
        std::cout<<"Would you like to see the examples again? Type anything and then press enter to see them again or type NO and then enter to quit the program.\n"<<std::endl;
        std::string userInput;
        std::cin>>userInput;
        if(userInput=="NO")
        {
            isRunning=false;
        }
    }

    return 0;
}

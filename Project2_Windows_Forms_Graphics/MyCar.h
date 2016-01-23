using namespace System::Drawing;

public ref class CMyShape {
public:
	CMyShape(int x, int y, int w, int h, int wheelr, Color c) {
		X=y;
		Y=x;
		Width=w;
		Height=h;
		Wheel_Radius = wheelr;
		color=c;
	}
	CMyShape(CMyShape^ src) {	// copy constructor
		Type=src->Type;
		X=src->X;
		Y=src->Y;
		Width=src->Width;
		Height=src->Height;
		Wheel_Radius=src->Wheel_Radius;
		color=src->color;
	}

	int getX() { return X; }
	void setX(int x) { X=x; }
	int getY() { return Y; }
	void setY(int y) { Y=y; }

	void draw(Graphics^ g) { 
		int wheel_Diameter = 2 * Width / 3;
		int wheel2_X = X + (2*(80/3));
		g->FillRectangle(gcnew SolidBrush(color), X, Y, Width, Height);
		g->FillPie(gcnew SolidBrush(color), X + Width / 2, Y - Height / 2, Width/2,  Height, 0, 360);
		g->FillEllipse(gcnew SolidBrush(Color::Black), X, Y + Height - wheel_Diameter/4, Width/3, Width/3);
		g->FillEllipse(gcnew SolidBrush(Color::Black), wheel2_X, Y + Height - wheel_Diameter/4, Width/3, Width/3);
	}

	bool containPoint(int x, int y) {
		switch (Type) {
			case 0:
				{
					double a=Width/2.0;
					double b=Height/2.0;
					double xc=X+a;
					double yc=Y+b;
					return ((x-xc)*(x-xc)/(a*a)+(y-yc)*(y-yc)/(b*b)<=1.0);
				}
			case 1:
				return (x>=X && y>=Y && x<X+Width && y<Y+Height);
		}

		return false;
	}

private:
	int Type;	// 0: oval; 1: rectangle
	int X;
	int Y;
	int Width;
	int Height;
	int Wheel_Radius;
	Color color;
};
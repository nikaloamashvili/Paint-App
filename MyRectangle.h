#pragma once
#include "MyShape.h"
#include "MyLine.h"


class MyRectangle :
	public MyLine
{
public:
	 DECLARE_SERIAL(MyRectangle)
	MyRectangle(void);
	~MyRectangle(void);
	int getId();
	void innerDraw(CDC *dc);
};


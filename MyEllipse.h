#pragma once
#include "MyShape.h"
#include "MyLine.h"

class MyEllipse :
	public MyLine
{
public:
	 DECLARE_SERIAL(MyEllipse)
	MyEllipse(void);
	~MyEllipse(void);
	 int getId();
	void innerDraw(CDC *dc);
};


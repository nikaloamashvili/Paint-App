#pragma once
#include "MyShape.h"
class MyLine :
	public MyShape
{
public:
	 DECLARE_SERIAL(MyLine)
	MyLine(void);
	~MyLine(void);
	int getId();
	 void innerDraw(CDC *dc);
};


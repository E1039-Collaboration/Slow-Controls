// PositionTrackerDll.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "PositionTracker.h"


int main(int argc, char *argv[])
{
	double position = atof(argv[1]);
	char *file = argv[2];

	PositionTracker(position, file);

	return 0;
}
#include "clipper.hpp"
#include <iostream>
using namespace ClipperLib;

int main()
{
	Path subj;
	Paths solution;
	subj <<
	IntPoint(348,257) <<
	IntPoint(364,148) <<
	IntPoint(362,148) <<
	IntPoint(326,241) <<
	IntPoint(295,219) <<
	IntPoint(258,88)  <<
	IntPoint(440,129) <<
	IntPoint(370,196) <<
	IntPoint(372,275) <<
	IntPoint(348,257);

	ClipperOffset co;
	co.AddPath(subj, jtSquare, etClosedPolygon);
	co.Execute(solution, -2.0);

	std::cout << "solution" << std::endl;
	std::cout << solution;// << std::endl;


}

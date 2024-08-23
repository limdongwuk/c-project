#include "Lesson5_BigObject.h"

Lesson5_BigObject::Lesson5_BigObject()
{
	for (int idx = 0; idx < 1024 * 1024; ++idx)
		c[0][idx] = idx;
}

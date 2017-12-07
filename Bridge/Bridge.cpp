#include "stdafx.h"

#include "Bridge.h"

using namespace nsBridge;

Bridge::Bridge()
{
	m_cppBL = new CNativeLibrary();
}

Bridge::~Bridge()
{
	delete m_cppBL;
	m_cppBL = 0;
}

int Bridge::getTestValue()
{
	return m_cppBL->getTestValue();
}
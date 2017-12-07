// Bridge.h

#pragma once

#include "../NativeLibrary/NativeLibrary.h"

using namespace System;

namespace nsBridge {

	public ref class Bridge
	{
		private:
			CNativeLibrary * m_cppBL;
		public:
			Bridge();
			~Bridge();
			int getTestValue();
	};
}

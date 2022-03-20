#pragma once


	enum class PixelState
	{
		DONT_UPDATE = 0,
		SLOW_UDPATE = 1,
		LAST_STILL = 2,
		LAST_STILL_TWO_FRAME = 3,
		LAST_STILL_THREE_FRAME = 4,
		SLOW_UPDATE = 5,
		LAST_MOVED = 6
	};


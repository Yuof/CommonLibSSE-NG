#pragma once

#include "RE/B/BSTEvent.h"

namespace RE
{
	struct SpellsLearned
	{
	public:
		// Carries no data: the game passes an uninitialized stack slot.
		struct Event
		{
		};
		static_assert(sizeof(Event) == 0x1);

		static BSTEventSource<Event>* GetEventSource();
		static void                   SendEvent();
	};
}

#pragma once

#include "states_items.h"

namespace States {

	/*** states definitions ***/
	extern Base* active_state;

	extern Base menu;
	extern Confirm confirm;
	extern Confirm heater_error;
	extern Washing washing;
	extern Timer_heater drying;
	extern Curing curing;
	extern Timer_heater resin;
	extern Warmup warmup_print;
	extern Warmup warmup_resin;
	extern Test_switch selftest_cover;

	void init();
	void loop(Events& events);
	void change(Base* new_state);

}

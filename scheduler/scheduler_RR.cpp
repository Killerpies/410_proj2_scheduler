/*
 * SchedulerSTRR.cpp
 *
 *  Created on: Sep 7, 2019
 *      Author: keith
 *
 *      implements round robin scheduling algorithm
 *      pre-emptive
 */

//TODO fill in content
#include "../includes/scheduler_RR.h"

	//this is a preemptive scheduler,set the preemptive member variable to true
	//when calling the base class
//	Scheduler_RR(std::queue<PCB> &queue,int time_slice =UNINITIALIZED):Scheduler(queue,true,time_slice){};
//	virtual ~Scheduler_RR(){};

	//override base class behaviour if necessary, otherwise call it
	bool  Scheduler_RR::time_to_switch_processes(int tick_count, PCB &p){
		return true;
	}

	//RR - preemptive - no sorting of ready_q needed.
	void Scheduler_RR::sort(){}

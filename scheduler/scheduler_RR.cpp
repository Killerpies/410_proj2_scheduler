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
using namespace std;
	//this is a preemptive scheduler,set the preemptive member variable to true
	//when calling the base class
//	Scheduler_RR::Scheduler_RR(std::queue<PCB> &queue,int time_slice =UNINITIALIZED):Scheduler(queue,true,time_slice){};
//	virtual ~Scheduler_RR(){};

	//override base class behaviour if necessary, otherwise call it
	bool  Scheduler_RR::time_to_switch_processes(int tick_count, PCB &p){
		preemptive = true;
		time_slice = 10;
		if (p.isEmpty()){
			return true;
		}
		if (p.remaining_cpu_time <= 0){
			return true;
		}
		if (tick_count > 1){
			return true;
		}
		p.remaining_cpu_time -= 1;
	return false;
	}

	//RR - preemptive - no sorting of ready_q needed.
	void Scheduler_RR::sort(){}

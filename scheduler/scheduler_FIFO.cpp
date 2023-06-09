/*
 * SchedulerSTRR.cpp
 *
 *  Created on: Sep 7, 2019
 *      Author: keith
 *
 *      implements FIFO scheduling algorithm
 *      not pre-emptive
 */

//TODO fill in content
#include "../includes/scheduler_FIFO.h"
using namespace std;

	//this is a non - preemptive scheduler, set the preemptive member variable to false
	//when calling the base class
//Scheduler_FIFO::Scheduler_FIFO(std::queue<PCB> &queue):Scheduler(queue,false,UNINITIALIZED){};
//	virtual ~Scheduler_FIFO(){};

	//override base class behaviour if necessary, otherwise call it
	bool  Scheduler_FIFO::time_to_switch_processes(int tick_count, PCB &p){
		return Scheduler::time_to_switch_processes(tick_count, p);
	}

	//FIFO - not preemptive - no sorting needed
	void Scheduler_FIFO::sort(){}

/*
 * scheduler.cpp
 *
 *  Created on: Sep 8, 2019
 *      Author: keith
 */

//TODO fill in content

#include "../includes/scheduler.h"
using namespace std;


//
//	Scheduler::Scheduler(queue<PCB> &queue, bool preemptive, int time_slice =
//			UNINITIALIZED) :	ready_q(&queue), preemptive(preemptive), time_slice(time_slice){	};
//	Scheduler::~Scheduler() {	};

	//add a process, either a new one or one that
	//had been running on the CPU and has been preempted
	void Scheduler::add(PCB p){
		ready_q->push(p);
	}

	//get next process
	PCB Scheduler::getNext(){
		PCB temp = ready_q->front();
		ready_q->pop();
		return temp;
	}

	//returns true if there are no  jobs in the readyQ
	//false otherwise
	bool Scheduler::isEmpty(){
		return ready_q->empty();
	}

	//if process has completed (used all its remaining_cpu_time) or
	//if we are using a preemptive scheduling algorithm and the
	//timeslice is over then its time to switch processes
	//returns:ready_q->pop();
	//true - switch processes
	//false - do not switch
	bool Scheduler::time_to_switch_processes(int tick_count, PCB &p){
		return true;
	}

	// sort  ready_q based on the scheduler algorithm used whenever add(PCB p) is called
	void Scheduler::sort(){
		//pure virtual function
	}


